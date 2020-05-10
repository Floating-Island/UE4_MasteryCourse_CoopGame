// Fill out your copyright notice in the Description page of Project Settings.


#include "STracerWeapon.h"
//engine includes
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Net/UnrealNetwork.h"

//project includes
#include "CoopGame.h"


void ASTracerWeapon::singleTraceEffectReplication()
{
	tracerEffectSpawn(traceNetInfo.traceTo);
}

void ASTracerWeapon::serverTraceEffects(FVector traceEndPoint)
{
	if (Role == ROLE_Authority)
	{
		traceNetInfo.traceTo = traceEndPoint;//doesn't replicate if the value is the same as the current one
	}
}

void ASTracerWeapon::physicalMaterialReactionReplication()
{
	reactAtPhysicsMaterial(traceNetInfo.traceTo, surfaceToReplicate);
}

void ASTracerWeapon::serverReactsAtPhysicalMaterial(EPhysicalSurface surfaceHit)
{
	if (Role == ROLE_Authority)
	{
		surfaceToReplicate = surfaceHit;//doesn't replicate if the value is the same as the current one
	}
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
		UGameplayStatics::ApplyPointDamage(hitActor, actualDamage, shotDirection, hit, weaponOwner->GetInstigatorController(), weaponOwner, typeOfDamage);

		serverReactsAtPhysicalMaterial(surfaceHit);
		reactAtPhysicsMaterial(hit.ImpactPoint, surfaceHit);
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

void ASTracerWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ASTracerWeapon, traceNetInfo, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(ASTracerWeapon, surfaceToReplicate, COND_SkipOwner);
}




