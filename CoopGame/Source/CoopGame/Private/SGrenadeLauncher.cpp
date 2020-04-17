// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeLauncher.h"
#include "Components/SkeletalMeshComponent.h"//used to get the muzzle socket location
#include "Kismet/GameplayStatics.h"

#include "SProjectile.h"


ASGrenadeLauncher::ASGrenadeLauncher()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASGrenadeLauncher::fire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon
	
	if (weaponOwner && ProjectileClass)
	{
		if (muzzleEffect)//only if a muzzle effect was assigned
		{
			UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
		}
		FVector muzzleLocation = mesh->GetSocketLocation(muzzleSocket);
		FRotator muzzleRotation = mesh->GetSocketRotation(muzzleSocket);


		FVector eyesLocation;
		FRotator eyesRotation;
		weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		ActorSpawnParams.Owner = this;;

		//spawn the projectile
		GetWorld()->SpawnActor<ASProjectile>(ProjectileClass, muzzleLocation, eyesRotation, ActorSpawnParams);
	}
}
