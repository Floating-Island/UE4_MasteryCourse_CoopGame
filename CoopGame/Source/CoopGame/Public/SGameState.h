// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SGameState.generated.h"


UENUM(BlueprintType)
enum class EWaveState :uint8
{
	preparingNextWave,
	playingWave,
	waitingWaveCompletion,
	waveCompleted,
	gameOver
};

/**
 * 
 */
UCLASS()
class COOPGAME_API ASGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = waveStateReplication, Category = "States")
		EWaveState waveState;

protected:

	UFUNCTION()
		void waveStateReplication(EWaveState oldWaveState);

	UFUNCTION(BlueprintImplementableEvent)
		void waveStateChanged(EWaveState newWaveState, EWaveState oldWaveState);
};
