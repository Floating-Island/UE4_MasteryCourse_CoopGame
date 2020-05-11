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
	shotSpread = 9.16f;
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
		emitEmptyMagazineSound();
	}
}

void ASTracerMulti::multiTraceFire()
{
	firingEffects();// muzzle and recoil, replicated independently of the trace
	lastFireTime = GetWorld()->TimeSeconds;
	AActor* weaponOwner = GetOwner();

	FCollisionQueryParams collisionParameters;
	collisionParameters.AddIgnoredActor(weaponOwner);
	collisionParameters.AddIgnoredActor(this);
	collisionParameters.bTraceComplex = true;
	collisionParameters.bReturnPhysicalMaterial = true;

	FVector eyesLocation;//will be used as the starting point for our trace
	FRotator eyesRotation;
	weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);

	FVector shotDirection = eyesRotation.Vector();

	float hitSpreadRadians = FMath::DegreesToRadians(shotSpread);

	for (int releaseShot = 0; releaseShot < shots; releaseShot++)
	{
		FVector shot = FMath::VRandCone(shotDirection, hitSpreadRadians);

		FVector traceDistance = eyesLocation + shot * rangeMultiplier;//where the trace ends
		
		FHitResult hit;
		bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, COLLISION_WEAPON_CHANNEL, collisionParameters);


		FVector traceEndPoint = calculateEndPoint(hitBlocked, hit, traceDistance);
		tracerEffectSpawn(traceEndPoint);//create trace line to represent bullet trajectory
		serverTraceEffects(traceEndPoint);//changes FHitScanTrace.traceTo to traceEndPoint if it's the server, which then triggers replicatedUsing on the function that executes tracerEffectSpawn with the updated value for all clients
		
		if (hitBlocked)
		{
			processPointDamage(weaponOwner, shotDirection, hit);
		}


		if (DebugMultiTraceDrawing > 0)
		{
			DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
		}
		
	}
}
