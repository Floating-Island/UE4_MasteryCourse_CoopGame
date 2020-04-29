// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupPowerupActor.h"
#include "SPowerupActor.h"

void ASPickupPowerupActor::pickupObjectOverlaping(AActor* OtherActor)
{
	ASPowerupActor* pickedPowerup = Cast<ASPowerupActor, AActor>(pickupObjectInstance);
	if(pickedPowerup)
	{
		pickedPowerup->SetOwner(OtherActor);
		pickedPowerup->activate();
		pickedPowerup = nullptr;
	}
	
}
