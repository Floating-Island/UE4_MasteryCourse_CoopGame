// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerWeapon.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "CoopGame.h"




ASTracerWeapon::ASTracerWeapon()
{
	rangeMultiplier = 10000;
	tracerTarget = "BeamEnd";
}

void ASTracerWeapon::startFire()
{
	fireAtRate<ASTracerWeapon, &ASTracerWeapon::fire>(this);
}

void ASTracerWeapon::fire()
{
	//first it has to trace the world from the pawn's eyes to the crosshair (at the center of the screen)
}

void ASTracerWeapon::processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit)
{
		//process baseDamage
		AActor* hitActor = hit.GetActor();

		EPhysicalSurface surfaceHit = UPhysicalMaterial::DetermineSurfaceType(hit.PhysMaterial.Get());

		float actualDamage = baseDamage;
		if (surfaceHit == SURFACE_FLESH_VULNERABLE)
		{
			actualDamage += bonusDamage;
		}
		UGameplayStatics::ApplyPointDamage(hitActor, actualDamage, shotDirection, hit, weaponOwner->GetInstigatorController(), this, typeOfDamage);

		reactAtPhysicsMaterial(hit, surfaceHit);
}

void ASTracerWeapon::tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance)
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






