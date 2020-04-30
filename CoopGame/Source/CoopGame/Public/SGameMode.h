// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void spawnNewBot();

	void startBotWave();

	void endBotWave();

	void nextBotWavePreparation();

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float spawnRate;

	int32 waveLevel;

	int32 waveSpawnMultiplier;
	
	int32 botsToSpawn;
	
	FTimerHandle botSpawnTimer;

	void spawnOnTimerElapsed();

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float waveDelay;

public:
	ASGameMode();
	
	void StartPlay() override;
};
