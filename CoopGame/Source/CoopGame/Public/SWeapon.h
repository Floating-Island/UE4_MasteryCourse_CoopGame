// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;
class UCameraShake;

UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASWeapon();

	virtual void startFire();

	virtual void stopFire();

protected:
	void muzzleFireFlash();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> typeOfDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float baseDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float bonusDamage;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //no need to edit it
	FName muzzleSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //secure way to expose it
	UParticleSystem* muzzleEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon") //not everything has to be exposed to blueprints
	TSubclassOf<UCameraShake> recoilCameraShake;

	
	TMap<EPhysicalSurface, UParticleSystem**> physicalMaterialsMap;//to map surface types

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* DefaultHitImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* FleshImpactEffect;

	void reactAtPhysicsMaterial(FHitResult hit, EPhysicalSurface surfaceHit);//should be in a projectile
	
	virtual void fire();

	void recoilShakingCamera(AActor* weaponOwnerActor);
};
