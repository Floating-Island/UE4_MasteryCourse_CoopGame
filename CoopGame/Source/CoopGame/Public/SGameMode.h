// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

enum class EWaveState : uint8;
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

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		int32 waveLevel;

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		int32 waveSpawnMultiplier;
	
	int32 botsToSpawn;
	
	FTimerHandle botSpawnTimer;

	void spawnOnTimerElapsed();

	FTimerHandle nextWaveStartTimer;
	
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float waveDelay;

	bool allWaveBotsDied();

	void checkBotsState();

	bool allPlayersDied();

	void checkPlayersState();

	void gameOver();

	void setWaveState(EWaveState newWaveState);

public:
	ASGameMode();
	
	void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;
};
