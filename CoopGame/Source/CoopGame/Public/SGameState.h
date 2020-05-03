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

	/*Only a server uses it.*/
	UFUNCTION()
		void changeWaveState(EWaveState newState);

	EWaveState currentWaveState();

protected:

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = waveStateReplication, Category = "States")
		EWaveState waveState;
	
	UFUNCTION()
		void waveStateReplication(EWaveState oldWaveState);

	UFUNCTION(BlueprintImplementableEvent)
		void waveStateChanged(EWaveState newWaveState, EWaveState oldWaveState);
};
