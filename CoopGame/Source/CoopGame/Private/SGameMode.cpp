// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"

#include "TimerManager.h"

void ASGameMode::startBotWave()
{
	waveLevel++;

	botsToSpawn = waveSpawnMultiplier * waveLevel;
	
	GetWorldTimerManager().SetTimer(botSpawnTimer, this, &ASGameMode::spawnOnTimerElapsed, spawnRate, true, 0);
}

void ASGameMode::endBotWave()
{
	GetWorldTimerManager().ClearTimer(botSpawnTimer);

	nextBotWavePreparation();
}
 
void ASGameMode::nextBotWavePreparation()
{
	FTimerHandle nextWaveStart;
	GetWorldTimerManager().SetTimer(nextWaveStart, this, &ASGameMode::startBotWave, waveDelay);
}

void ASGameMode::spawnOnTimerElapsed()
{
	spawnNewBot();

	botsToSpawn--;//we spawned a bot.

	if(botsToSpawn <= 0)
	{
		endBotWave();
	}
}

ASGameMode::ASGameMode()
{

	spawnRate = 0;

	waveLevel = 0;

	waveSpawnMultiplier = 0;

	botsToSpawn = 0;

	waveDelay = 0;
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	nextBotWavePreparation();
}
