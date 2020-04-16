// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeLauncher.h"
#include "Components/SkeletalMeshComponent.h"//used to get the muzzle socket location
#include "DrawDebugHelpers.h"//used to help seeing the trace
#include "Kismet/GameplayStatics.h"
#include "Components/PrimitiveComponent.h"

#include "SProjectile.h"


ASGrenadeLauncher::ASGrenadeLauncher()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASGrenadeLauncher::fire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if (weaponOwner)
	{
		if (muzzleEffect)//only if a muzzle effect was assigned
		{
			UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
		}
		

		FVector MuzzleLocation = mesh->GetSocketLocation("Muzzle");
		FRotator MuzzleRotation = mesh->GetSocketRotation("Muzzle");

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		ASProjectile* bullet;
		// spawn the bullet at the muzzle
		bullet = GetWorld()->SpawnActor<ASProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);

		
	}
}
