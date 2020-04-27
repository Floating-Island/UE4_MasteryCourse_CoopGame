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

// Called when the game starts or when spawned
void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPowerupActor::activatePowerup()
{
	if (powerupInterval > 0)
	{
		GetWorldTimerManager().SetTimer(powerupTickTimer, this, &ASPowerupActor::onTickPowerup, powerupInterval, true, 0.0f);
	}
	else
	{
		onTickPowerup();
	}
}

void ASPowerupActor::onTickPowerup()//if it's blueprint implementable, all methods inside it have to be UFUNCTION
{
	processedTicks++;

	powerupTicking();
	
	if(processedTicks >= ticksQuantity)
	{
		onExpired();

		GetWorldTimerManager().ClearTimer(powerupTickTimer);
	}
}
