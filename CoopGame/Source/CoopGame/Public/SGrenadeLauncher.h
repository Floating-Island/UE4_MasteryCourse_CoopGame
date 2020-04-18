// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SGrenadeLauncher.generated.h"

class ASProjectile;
/**
 * 
 */
UCLASS()
class COOPGAME_API ASGrenadeLauncher : public ASWeapon
{
	GENERATED_BODY()
public:
	ASGrenadeLauncher();

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<ASProjectile> ProjectileClass;

	void startFire() override;
	
protected:
	//UFUNCTION(BlueprintCallable, Category = "Weapon") it shouldn't have this, the parent class already has it
		virtual void fire() override;
	
	
};
