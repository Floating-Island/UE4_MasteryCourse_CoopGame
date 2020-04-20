// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "STracerWeapon.generated.h"

class UParticleSystem;
/**
 * 
 */
UCLASS(Abstract)
class COOPGAME_API ASTracerWeapon : public ASWeapon
{
	GENERATED_BODY()
protected:

	void tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance);
	void processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
		FName tracerTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* tracerEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int rangeMultiplier;

public:
	ASTracerWeapon();
};
