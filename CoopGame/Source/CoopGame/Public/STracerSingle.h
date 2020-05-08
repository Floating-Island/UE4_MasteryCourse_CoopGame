// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STracerWeapon.h"
#include "STracerSingle.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASTracerSingle : public ASTracerWeapon
{
	GENERATED_BODY()
protected:
	void fire() override;
	void singleTraceFire();

	/*Half angle in Degrees*/
	UPROPERTY(EditDefaultsOnly, Category = "Weapon", meta = (ClampMin = 0.0f))
		float bulletSpread;
public:
	void startFire() override;

	ASTracerSingle();
};
