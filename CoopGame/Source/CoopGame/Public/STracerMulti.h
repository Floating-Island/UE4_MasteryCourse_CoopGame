// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "STracerWeapon.h"
#include "STracerMulti.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASTracerMulti : public ASTracerWeapon
{
	GENERATED_BODY()
public:
	ASTracerMulti();
	void startFire() override;
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta=(ClampMin="1"))
		int shots;
	/*Half angle in Degrees*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (ClampMin = "0", ClampMax = "1.5708"))
		float shotSpread;

	void fire() override;
	void multiTraceFire();
	
};
