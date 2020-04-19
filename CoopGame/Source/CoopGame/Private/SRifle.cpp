// Fill out your copyright notice in the Description page of Project Settings.


#include "SRifle.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"//for debugging
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "CoopGame.h"

//debug variables:
static int32 DebugRifleDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugRifleDrawing(
	TEXT("COOP.DebugWeapons")/*command used in console*/,
	DebugRifleDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for weapons") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);


ASRifle::ASRifle()
{
	tracerTarget = "BeamEnd";
}

void ASRifle::startFire()
{
	fireAtRate<ASRifle, &ASRifle::fire, ASRifle>(this);
}

void ASRifle::tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance)
{
	if (tracerEffect)
	{
		//we want to spawn a beam effect between the muzzle socket and the trace end (or the hit impact location if it hit)
		FVector beamStart = mesh->GetSocketLocation(muzzleSocket);
		UParticleSystemComponent* tracerComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), tracerEffect, beamStart);
		if (tracerComponent)
		{
			FVector beamEnd;
			if (hitBlocked)
			{
				beamEnd = hit.ImpactPoint;
			}
			else
			{
				beamEnd = traceDistance;
			}
			tracerComponent->SetVectorParameter(tracerTarget, beamEnd);
		}
	}
}

void ASRifle::fire()
{
	//first it has to trace the world from the pawn's eyes to the crosshair (at the center of the screen)

	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if (weaponOwner)
	{
		muzzleFireFlash();


		FVector eyesLocation;//will be used as the starting point for our trace
		FRotator eyesRotation;
		weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

		FVector shotDirection = eyesRotation.Vector();
		int traceMultiplier = 10000;
		FVector traceDistance = eyesLocation + shotDirection * traceMultiplier;//where the trace ends

		FCollisionQueryParams collisionParameters;
		collisionParameters.AddIgnoredActor(weaponOwner);//owner is ignored when tracing
		collisionParameters.AddIgnoredActor(this);//ignore also the weapon in the trace
		collisionParameters.bTraceComplex = true;//traces against each individual triangle from the traced mesh. Gives the exact result of where we hit something. It's more expensive
		collisionParameters.bReturnPhysicalMaterial = true;


		FHitResult hit;//struct containing hit information
		bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, COLLISION_WEAPON_CHANNEL, collisionParameters);
		//ECC_Visibility is used now because everything that blocks that channel, will block the trace.
		//That thing that blocks will be something that can be damaged
		processPointDamage(weaponOwner, shotDirection, hit, hitBlocked);


		tracerEffectSpawn(hitBlocked, hit, traceDistance);//create beam to represent bullet trajectory 

		if (DebugRifleDrawing > 0)
		{
			DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
		}
		lastFireTime = GetWorld()->TimeSeconds;
		Super::recoilShakingCamera(weaponOwner);

	}
}



void ASRifle::processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked)
{
	if (hitBlocked)//something got hit by the trace
	{
		//process baseDamage
		AActor* hitActor = hit.GetActor();

		EPhysicalSurface surfaceHit = UPhysicalMaterial::DetermineSurfaceType(hit.PhysMaterial.Get());

		float actualDamage = baseDamage;
		if(surfaceHit == SURFACE_FLESH_VULNERABLE)
		{
			actualDamage += bonusDamage;
		}
		UGameplayStatics::ApplyPointDamage(hitActor, actualDamage, shotDirection, hit, weaponOwner->GetInstigatorController(), this, typeOfDamage);
	
		reactAtPhysicsMaterial(hit, surfaceHit);
	}
}
