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
	//AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon
	//
	//if (weaponOwner)
	//{
	//	if (hasAmmoInMagazine())
	//	{
	//		fireAtRate<ASProjectileWeapon, &ASProjectileWeapon::fire>(this);
	//	}
	//	else
	//	{
	//		reload();
	//	}
	//}
}

void ASProjectileWeapon::fire()
{

}

void ASProjectileWeapon::serverSpawnProjectile(FVector muzzleLocation, FRotator eyesRotation, FActorSpawnParameters ActorSpawnParams)
{
	if(Role == ROLE_Authority)
	{
		GetWorld()->SpawnActor<ASProjectile>(ProjectileClass, muzzleLocation, eyesRotation, ActorSpawnParams);
	}
}

void ASProjectileWeapon::FireSingleProjectile()
{
	AActor* weaponOwner = GetOwner();
	if (ProjectileClass)
	{
		FVector muzzleLocation = mesh->GetSocketLocation(muzzleSocket);

		FVector eyesLocation;
		FRotator eyesRotation;
		weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		ActorSpawnParams.Owner = weaponOwner;
		ActorSpawnParams.Instigator = weaponOwner->GetInstigator();

		firingEffects();
		lastFireTime = GetWorld()->TimeSeconds;//triggers replication via server
		
		//spawn the projectile
		serverSpawnProjectile(muzzleLocation, eyesRotation, ActorSpawnParams);
	}
}


