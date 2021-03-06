// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "STracerWeapon.generated.h"

class UParticleSystem;


//contains the information of a single trace. It could've been a single variable, but it's there to show that you can send a struct to server.
USTRUCT()
struct FHitScanTrace//in this case, it shouldn't be necessary
{
	GENERATED_BODY()

public:
	UPROPERTY()
		FVector_NetQuantize traceTo;//this has less precision. 10 has 1 decimal position, 100 has 2.
};

/**
 * 
 */
UCLASS(Abstract)
class COOPGAME_API ASTracerWeapon : public ASWeapon
{
	GENERATED_BODY()
protected:

	FVector calculateEndPoint(bool hitBlocked, FHitResult hit, FVector traceDistance);
	void tracerEffectSpawn(FVector endPoint);
	void processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
		FName tracerTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* tracerEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int rangeMultiplier;

	
	//replicates trace effects
	UPROPERTY(ReplicatedUsing = singleTraceEffectReplication)
		FHitScanTrace traceNetInfo;

	UFUNCTION()
		 void singleTraceEffectReplication();

	void serverTraceEffects(FVector traceEndPoint);

	
	//replicates physical material hit effect
	UPROPERTY(ReplicatedUsing = physicalMaterialReactionReplication)
		TEnumAsByte<EPhysicalSurface> surfaceToReplicate;
	
	UFUNCTION()
		void physicalMaterialReactionReplication();
	
	void serverReactsAtPhysicalMaterial(EPhysicalSurface surfaceHit);

public:
	ASTracerWeapon();
};
