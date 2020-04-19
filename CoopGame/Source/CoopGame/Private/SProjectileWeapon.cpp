// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectileWeapon.h"
#include "Components/SkeletalMeshComponent.h"//used to get the muzzle socket location
#include "Kismet/GameplayStatics.h"

#include "SProjectile.h"


ASProjectileWeapon::ASProjectileWeapon()
{
}

void ASProjectileWeapon::startFire()
{
	fireAtRate<ASProjectileWeapon, &ASProjectileWeapon::fire>(this);
}

void ASProjectileWeapon::fire()
{

}

void ASProjectileWeapon::FireSingleProjectile(AActor* weaponOwner)
{
	if (weaponOwner && ProjectileClass)
	{
		muzzleFireFlash();
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
		recoilShakingCamera(weaponOwner);
	}
}


