// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"

void ASGameState::waveStateReplication(EWaveState oldWaveState)
{
	waveStateChanged(waveState, oldWaveState);
}
