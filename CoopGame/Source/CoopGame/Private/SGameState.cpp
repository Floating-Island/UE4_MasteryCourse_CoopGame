// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"

#include "Net/UnrealNetwork.h"

void ASGameState::changeWaveState(EWaveState newState)
{
	if(Role == ROLE_Authority)
	{
		EWaveState oldState = waveState;
		waveState = newState;
		waveStateReplication(oldState);
	}
}

void ASGameState::waveStateReplication(EWaveState oldWaveState)
{
	waveStateChanged(waveState, oldWaveState);
}


void ASGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASGameState, waveState);
}