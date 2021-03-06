// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthRegenerationPowerup.h"


#include "SCharacter.h"
#include "SHealthComponent.h"
#include "Kismet/GameplayStatics.h"

void ASHealthRegenerationPowerup::powerupTicking()
{
	TArray<AActor*> players;
	UGameplayStatics::GetAllActorsOfClass(this, ASCharacter::StaticClass(), players);
	for (auto player : players)
	{
		ASCharacter* character = Cast<ASCharacter, AActor>(player);
		if(player && character && character->IsPlayerControlled())
		{
			USHealthComponent* healthComponent = Cast<USHealthComponent, UActorComponent>(player->GetComponentByClass(USHealthComponent::StaticClass()));
			if(healthComponent)
			{
				healthComponent->heal(healingAmount);
			}
		}
	}
}
