// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeLauncher.h"
#include "Components/SkeletalMeshComponent.h"//used to get the muzzle socket location
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

#include "SProjectile.h"


ASGrenadeLauncher::ASGrenadeLauncher()
{
}

void ASGrenadeLauncher::startFire()
{
	const float firstDelay = FMath::Max(0.0f, lastFireTime + timeBetweenShots - GetWorld()->TimeSeconds);

	GetWorldTimerManager().SetTimer(timeBetweenShotsTimer, this, &ASGrenadeLauncher::fire, timeBetweenShots, true, firstDelay);
}

void ASGrenadeLauncher::stopFire()
{
	GetWorldTimerManager().ClearTimer(timeBetweenShotsTimer);
}

void ASGrenadeLauncher::fire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon
	
	if (weaponOwner && ProjectileClass)
	{
		Super::muzzleFireFlash();
		FVector muzzleLocation = mesh->GetSocketLocation(muzzleSocket);

		FVector eyesLocation;
		FRotator eyesRotation;
		weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		ActorSpawnParams.Owner = weaponOwner;
		ActorSpawnParams.Instigator = weaponOwner->GetInstigator();

		//spawn the projectile
		GetWorld()->SpawnActor<ASProjectile>(ProjectileClass, muzzleLocation, eyesRotation, ActorSpawnParams);

		lastFireTime = GetWorld()->TimeSeconds;
		Super::recoilShakingCamera(weaponOwner);
	}
}
