// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "../../../../../../../Program Files/Epic Games/UE_4.22/Engine/Source/Runtime/Engine/Classes/Engine/World.h"

#include "SProjectileWeapon.generated.h"

class ASProjectile;
/**
 * 
 */
UCLASS(Abstract)
class COOPGAME_API ASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()
public:
	ASProjectileWeapon();

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<ASProjectile> ProjectileClass;

	virtual void startFire() override;
	void FireSingleProjectile();
	
protected:
	//UFUNCTION(BlueprintCallable, Category = "Weapon") it shouldn't have this, the parent class already has it
	virtual void fire() override;
	void serverSpawnProjectile(FVector muzzleLocation, FRotator eyesRotation, FActorSpawnParameters ActorSpawnParams);
};
