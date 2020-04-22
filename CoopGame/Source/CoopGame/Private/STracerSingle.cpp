// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerSingle.h"
#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "CoopGame.h"

//debug variables:
static int32 DebugTracerWeaponDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugTracerWeaponDrawing(
	TEXT("COOP.DebugSingleTrace")/*command used in console*/,
	DebugTracerWeaponDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for single traces") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);

void ASTracerSingle::fire()
{
	checkIfServerIsFiring();
	
	if (hasAmmoInMagazine())
	{
		singleTraceFire();
		reduceMagazineAmmo();
	}
	else
	{
		reload();
	}
	
}

void ASTracerSingle::startFire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if(weaponOwner)
	{
		fireAtRate<ASTracerSingle, &ASTracerSingle::fire>(this);

	}
}

void ASTracerSingle::singleTraceFire()
{
	firingEffects();
	AActor* weaponOwner = GetOwner();
	
	FCollisionQueryParams collisionParameters;
	collisionParameters.AddIgnoredActor(weaponOwner);//owner is ignored when tracing
	collisionParameters.AddIgnoredActor(this);//ignore also the weapon in the trace
	collisionParameters.bTraceComplex = true;//traces against each individual triangle from the traced mesh. Gives the exact result of where we hit something. It's more expensive
	collisionParameters.bReturnPhysicalMaterial = true;

	FVector eyesLocation;//will be used as the starting point for our trace
	FRotator eyesRotation;
	weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

	FVector shotDirection = eyesRotation.Vector();
	FVector traceDistance = eyesLocation + shotDirection * rangeMultiplier;//where the trace ends

	FHitResult hit;//struct containing hit information
	bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, COLLISION_WEAPON_CHANNEL, collisionParameters);
	//ECC_Visibility is used now because everything that blocks that channel, will block the trace.
	//That thing that blocks will be something that can be damaged

	FVector traceEndPoint = calculateEndPoint(hitBlocked, hit, traceDistance);
	tracerEffectSpawn(traceEndPoint);//create beam to represent bullet trajectory

	serverTraceEffects(traceEndPoint);//only executed by server

	if(hitBlocked)
	{
		processPointDamage(weaponOwner, shotDirection, hit);
	}
	
	 

	if (DebugTracerWeaponDrawing > 0)
	{
		DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
	}
	lastFireTime = GetWorld()->TimeSeconds;

}
