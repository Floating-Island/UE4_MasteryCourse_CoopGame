// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthRegenerationPowerup.h"


#include "SCharacter.h"
#include "SHealthComponent.h"
#include "Kismet/GameplayStatics.h"

void ASHealthRegenerationPowerup::powerupTicking()
{
	TArray<APawn*> players;
	UGameplayStatics::GetAllActorsOfClass(this, ASCharacter::StaticClass(), players);
	for (auto player : players)
	{
		if(player && player->IsPlayerControlled())
		{
			USHealthComponent* healthComponent = Cast<USHealthComponent, UActorComponent>(player->GetComponentByClass(USHealthComponent::StaticClass()));
			if(healthComponent)
			{
				healthComponent->heal(healingAmount);
			}
		}
	}
}
