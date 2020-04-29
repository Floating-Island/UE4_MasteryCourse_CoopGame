// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupWeaponActor.h"
#include "SCharacter.h"
#include "SWeapon.h"

void ASPickupWeaponActor::pickupObjectOverlaping(AActor* OtherActor)
{
	ASWeapon* pickedWeapon = Cast<ASWeapon, AActor>(pickupObjectInstance);
	ASCharacter* player = Cast<ASCharacter, AActor>(OtherActor);
	if (pickupObjectInstance && pickedWeapon && player)
	{
		pickedWeapon->SetOwner(OtherActor);
		player->replaceHeldWeapon(pickedWeapon);
		pickedWeapon->SetActorHiddenInGame(true);
		pickupObjectInstance = nullptr;
	}
}
