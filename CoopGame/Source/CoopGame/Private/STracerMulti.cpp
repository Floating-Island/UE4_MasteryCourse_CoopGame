// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerMulti.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "DrawDebugHelpers.h"

#include "CoopGame.h"

//debug variables:
static int32 DebugMultiTraceDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugMultiTraceDrawing(
	TEXT("COOP.DebugWeapons")/*command used in console*/,
	DebugMultiTraceDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for weapons") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);

ASTracerMulti::ASTracerMulti()
{
	shots = 1;
	spreadConeHalfAngleRadius = 0.16f;
}

void ASTracerMulti::startFire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if (weaponOwner)
	{
		fireAtRate<ASTracerMulti, &ASTracerMulti::fire>(this);
	}	
}

void ASTracerMulti::fire()
{
	checkIfServerIsFiring();
	
	if (hasAmmoInMagazine())
	{
		multiTraceFire();
		reduceMagazineAmmo();
	}
	else
	{
		reload();
	}
	
}

void ASTracerMulti::multiTraceFire()
{
	muzzleFireFlash();
	AActor* weaponOwner = GetOwner();
	recoilShakingCamera(weaponOwner);

	FCollisionQueryParams collisionParameters;
	collisionParameters.AddIgnoredActor(weaponOwner);//owner is ignored when tracing
	collisionParameters.AddIgnoredActor(this);//ignore also the weapon in the trace
	collisionParameters.bTraceComplex = true;//traces against each individual triangle from the traced mesh. Gives the exact result of where we hit something. It's more expensive
	collisionParameters.bReturnPhysicalMaterial = true;

	FVector eyesLocation;//will be used as the starting point for our trace
	FRotator eyesRotation;
	weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

	FVector shotDirection = eyesRotation.Vector();
	

	for (int releaseShot = 0; releaseShot < shots; releaseShot++)
	{
		FVector shot = FMath::VRandCone(shotDirection, spreadConeHalfAngleRadius);

		FVector traceDistance = eyesLocation + shot * rangeMultiplier;//where the trace ends
		
		FHitResult hit;//struct containing hit information
		bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, COLLISION_WEAPON_CHANNEL, collisionParameters);
		//ECC_Visibility is used now because everything that blocks that channel, will block the trace.
		//That thing that blocks will be something that can be damaged
		if (hitBlocked)
		{
			processPointDamage(weaponOwner, shotDirection, hit);
		}
		FVector traceEndPoint = calculateEndPoint(hitBlocked, hit, traceDistance);
		tracerEffectSpawn(traceEndPoint);//create beam to represent bullet trajectory

		if (DebugMultiTraceDrawing > 0)
		{
			DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
		}
		
	}
	lastFireTime = GetWorld()->TimeSeconds;
	
}
