// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SPowerupActor.h"
#include "SHealthRegenerationPowerup.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASHealthRegenerationPowerup : public ASPowerupActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Powerup Effect")
	float healingAmount;

public:
	void powerupTicking() override;
};
