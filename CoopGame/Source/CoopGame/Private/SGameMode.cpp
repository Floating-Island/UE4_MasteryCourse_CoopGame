// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"

#include "TimerManager.h"
#include "Engine/World.h"

#include "SHealthComponent.h"


ASGameMode::ASGameMode()
{

	spawnRate = 0;

	waveLevel = 0;

	waveSpawnMultiplier = 0;

	botsToSpawn = 0;

	waveDelay = 0;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1;
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	nextBotWavePreparation();
}

void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick();

	checkBotsState();
}


void ASGameMode::startBotWave()
{
	waveLevel++;

	botsToSpawn = waveSpawnMultiplier * waveLevel;
	
	GetWorldTimerManager().SetTimer(botSpawnTimer, this, &ASGameMode::spawnOnTimerElapsed, spawnRate, true, 0);
	
}

void ASGameMode::endBotWave()
{
	GetWorldTimerManager().ClearTimer(botSpawnTimer);

	//nextBotWavePreparation();//we don't want this to do it right now.
}
 
void ASGameMode::nextBotWavePreparation()
{
	GetWorldTimerManager().SetTimer(nextWaveStartTimer, this, &ASGameMode::startBotWave, waveDelay);
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

bool ASGameMode::allWaveBotsDied()
{
	for(auto pawnIterator = GetWorld()->GetPawnIterator(); pawnIterator; ++pawnIterator)
	{
		APawn* spawnedPawn = pawnIterator->Get();
		if(spawnedPawn && !spawnedPawn->IsPlayerControlled())
		{
			USHealthComponent* healthComponent = Cast<USHealthComponent, UActorComponent>(spawnedPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if(healthComponent && healthComponent->getCurrentHealth() > 0)
			{
				return false;
			}
		}
	}
	return true;
}

void ASGameMode::checkBotsState()
{
	if(botsToSpawn > 0 || GetWorldTimerManager().IsTimerActive(nextWaveStartTimer))
	{
		return;
	}

	if(allWaveBotsDied())
	{
		nextBotWavePreparation();
	}
}
