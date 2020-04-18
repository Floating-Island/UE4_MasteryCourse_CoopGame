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
private:
	TMap<EPhysicalSurface, UParticleSystem**> physicalMaterialsMap;
protected:

	void tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance);
	void processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* DefaultHitImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* FleshImpactEffect;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
		FName tracerTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* tracerEffect;
public:
	ASRifle();

	void fire() override;
	void reactAtPhysicsMaterial(FHitResult hit);//should be in a projectile
};
