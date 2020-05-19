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
		pickedWeapon->SetActorHiddenInGame(true);
		player->replaceHeldWeapon(pickedWeapon);
		pickupObjectInstance = nullptr;
		pickedWeapon->Destroy();//should server do it too.
	}
}
