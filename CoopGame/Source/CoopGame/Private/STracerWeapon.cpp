// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerWeapon.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "CoopGame.h"


void ASTracerWeapon::singleTraceReplication()
{
	muzzleFireFlash();
}

ASTracerWeapon::ASTracerWeapon()
{
	rangeMultiplier = 10000;
	tracerTarget = "BeamEnd";
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

FVector ASTracerWeapon::calculateEndPoint(bool hitBlocked, FHitResult hit, FVector traceDistance)
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
	return beamEnd;
}

void ASTracerWeapon::tracerEffectSpawn(FVector endPoint)
{
	if (tracerEffect)
	{
		//we want to spawn a beam effect between the muzzle socket and the trace end (or the hit impact location if it hit)
		FVector beamStart = mesh->GetSocketLocation(muzzleSocket);
		UParticleSystemComponent* tracerComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), tracerEffect, beamStart);
		if (tracerComponent)
		{
			tracerComponent->SetVectorParameter(tracerTarget, endPoint);
		}
	}
}






