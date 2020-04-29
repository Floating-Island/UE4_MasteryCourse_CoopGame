// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SPickupActor.h"
#include "SPickupPowerupActor.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASPickupPowerupActor : public ASPickupActor
{
	GENERATED_BODY()

protected:
	void pickupObjectOverlaping(AActor* OtherActor) override;
};
