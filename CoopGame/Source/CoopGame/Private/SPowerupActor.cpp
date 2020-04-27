// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerupActor.h"
#include "TimerManager.h"

// Sets default values
ASPowerupActor::ASPowerupActor()
{
	powerupInterval = 0;
	ticksQuantity = 0;
	processedTicks = 0;
}

void ASPowerupActor::activatePowerup()
{
	if(powerupInterval > 0)
	{
		GetWorldTimerManager().SetTimer(powerupTickTimer, this, &ASPowerupActor::onTickPowerup, powerupInterval, true, 0.0f);
	}
	else
	{
		onTickPowerup();
	}
}

// Called when the game starts or when spawned
void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPowerupActor::onTickPowerup()
{
	processedTicks++;

	powerupTicking();
	
	if(processedTicks >= ticksQuantity)
	{
		onExpired();

		GetWorldTimerManager().ClearTimer(powerupTickTimer);
	}
}
