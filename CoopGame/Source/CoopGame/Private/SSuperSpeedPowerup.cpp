// Fill out your copyright notice in the Description page of Project Settings.


#include "SSuperSpeedPowerup.h"
#include "SCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

void ASSuperSpeedPowerup::onActivated()
{
	player = Cast<ASCharacter, AActor>(GetOwner());
	if(player)
	{
		float normalSpeed = player->GetCharacterMovement()->GetMaxSpeed();
		float powerupSpeed = normalSpeed * 2;
		player->GetCharacterMovement()->MaxWalkSpeed = powerupSpeed;
	}
}

void ASSuperSpeedPowerup::onExpired()
{
	if(player)
	{
		float powerupSpeed = player->GetCharacterMovement()->GetMaxSpeed();
		float normalSpeed = powerupSpeed / static_cast<float>(2);
		player->GetCharacterMovement()->MaxWalkSpeed = normalSpeed;
	}
	Super::onExpired();
}
