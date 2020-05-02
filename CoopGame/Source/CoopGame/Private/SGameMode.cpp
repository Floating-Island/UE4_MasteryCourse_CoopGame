// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"

#include "TimerManager.h"
#include "Engine/World.h"

#include "SGameState.h"
#include "SPlayerState.h"
#include "SHealthComponent.h"


ASGameMode::ASGameMode()
{
	GameStateClass = ASGameState::StaticClass();
	PlayerStateClass = ASPlayerState::StaticClass();

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
	Super::Tick(DeltaSeconds);

	checkBotsState();

	checkPlayersState();
}


void ASGameMode::startBotWave()
{
	waveLevel++;

	botsToSpawn = waveSpawnMultiplier * waveLevel;
	
	GetWorldTimerManager().SetTimer(botSpawnTimer, this, &ASGameMode::spawnOnTimerElapsed, spawnRate, true, 0);

	setWaveState(EWaveState::playingWave);
}

void ASGameMode::endBotWave()
{
	GetWorldTimerManager().ClearTimer(botSpawnTimer);

	setWaveState(EWaveState::waitingWaveCompletion);
}
 
void ASGameMode::nextBotWavePreparation()
{
	GetWorldTimerManager().SetTimer(nextWaveStartTimer, this, &ASGameMode::startBotWave, waveDelay);

	setWaveState(EWaveState::preparingNextWave);
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
		APawn* spawnedBot = pawnIterator->Get();
		if(spawnedBot && !spawnedBot->IsPlayerControlled())
		{
			USHealthComponent* healthComponent = Cast<USHealthComponent, UActorComponent>(spawnedBot->GetComponentByClass(USHealthComponent::StaticClass()));
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

bool ASGameMode::allPlayersDied()
{
	for (auto controllerIterator = GetWorld()->GetPlayerControllerIterator(); controllerIterator; ++controllerIterator)
	{
		APlayerController* spawnedPlayerController = controllerIterator->Get();
		APawn* spawnedPlayer = spawnedPlayerController->GetPawn();
		if (spawnedPlayerController && spawnedPlayer)
		{
			USHealthComponent* healthComponent = Cast<USHealthComponent, UActorComponent>(spawnedPlayer->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(healthComponent) && healthComponent->getCurrentHealth() > 0)
			{
				return false;
			}
		}
	}
	return true;
}

void ASGameMode::checkPlayersState()
{
	if(allPlayersDied())
	{
		gameOver();
	}
}

void ASGameMode::gameOver()
{
	endBotWave();

	setWaveState(EWaveState::gameOver);
	//detach controllers, display game over screen to players, etc.

	UE_LOG(LogTemp, Log, TEXT("All players died, it's game over"));
}

void ASGameMode::setWaveState(EWaveState newWaveState)
{
	ASGameState* gameState = GetGameState<ASGameState>();

	if(ensureAlways(gameState))
	{
		gameState->changeWaveState(newWaveState);
	}
}
