// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SRifle.generated.h"

class UParticleSystem;
/**
 * 
 */
UCLASS()
class COOPGAME_API ASRifle : public ASWeapon
{
	GENERATED_BODY()

protected:

	void tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance);
	void processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked);
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
		FName tracerTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* tracerEffect;
	

	void fire() override;
public:
	ASRifle();

	void startFire() override;

	
	
};
