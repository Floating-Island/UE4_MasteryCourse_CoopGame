// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SPowerupActor.h"
#include "SSuperSpeedPowerup.generated.h"

class ASCharacter;
/**
 * 
 */
UCLASS()
class COOPGAME_API ASSuperSpeedPowerup : public ASPowerupActor
{
	GENERATED_BODY()

protected:
	ASCharacter* player;

public:
	void onActivated() override;
	void onExpired() override;
};
