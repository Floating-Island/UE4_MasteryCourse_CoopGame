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
public:
	void startFire() override;
	void singleTraceFire(AActor* weaponOwner);
};
