// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerSingle.h"
#include "DrawDebugHelpers.h"

#include "CoopGame.h"

//debug variables:
static int32 DebugTracerWeaponDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugTracerWeaponDrawing(
	TEXT("COOP.DebugWeapons")/*command used in console*/,
	DebugTracerWeaponDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for weapons") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);

void ASTracerSingle::fire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if (weaponOwner)
	{
		singleTraceFire(weaponOwner);
	}
}

void ASTracerSingle::startFire()
{
	fireAtRate<ASTracerSingle, &ASTracerSingle::fire>(this);
}

void ASTracerSingle::singleTraceFire(AActor* weaponOwner)
{
	muzzleFireFlash();


	FVector eyesLocation;//will be used as the starting point for our trace
	FRotator eyesRotation;
	weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

	FVector shotDirection = eyesRotation.Vector();
	FVector traceDistance = eyesLocation + shotDirection * rangeMultiplier;//where the trace ends

	FCollisionQueryParams collisionParameters;
	collisionParameters.AddIgnoredActor(weaponOwner);//owner is ignored when tracing
	collisionParameters.AddIgnoredActor(this);//ignore also the weapon in the trace
	collisionParameters.bTraceComplex = true;//traces against each individual triangle from the traced mesh. Gives the exact result of where we hit something. It's more expensive
	collisionParameters.bReturnPhysicalMaterial = true;


	FHitResult hit;//struct containing hit information
	bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, COLLISION_WEAPON_CHANNEL, collisionParameters);
	//ECC_Visibility is used now because everything that blocks that channel, will block the trace.
	//That thing that blocks will be something that can be damaged
	if(hitBlocked)
	{
		processPointDamage(weaponOwner, shotDirection, hit);
	}
	
	tracerEffectSpawn(hitBlocked, hit, traceDistance);//create beam to represent bullet trajectory 

	if (DebugTracerWeaponDrawing > 0)
	{
		DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
	}
	lastFireTime = GetWorld()->TimeSeconds;
	recoilShakingCamera(weaponOwner);
}
