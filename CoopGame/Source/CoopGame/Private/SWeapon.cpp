// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"//used to help seeing the trace
#include "Kismet/GameplayStatics.h"
//#include "Particles/ParticleSystem.h"//used to spawn effects
//#include "Components/SkeletalMeshComponent.h" //used to get the muzzle socket location
#include "Particles/ParticleSystemComponent.h"


//debug variables:
static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugWeaponDrawing(
TEXT("COOP.DebugWeapons")/*command used in console*/,
	DebugWeaponDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for weapons") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);


// Sets default values
ASWeapon::ASWeapon()
{
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));//mesh instantiation
	RootComponent = mesh;//make mesh the root components

	muzzleSocket = "MuzzleSocket";
	tracerTarget = "BeamEnd";

	damage = 20.0f;
}

void ASWeapon::tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance)
{
	if(tracerEffect)
	{
		//we want to spawn a beam effect between the muzzle socket and the trace end (or the hit impact location if it hit)
		FVector beamStart = mesh->GetSocketLocation(muzzleSocket);
		UParticleSystemComponent* tracerComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), tracerEffect, beamStart);
		if(tracerComponent)
		{
			FVector beamEnd;
			if (hitBlocked)
			{
				beamEnd = hit.ImpactPoint;
			}
			else
			{
				beamEnd = traceDistance;
			}
			tracerComponent->SetVectorParameter(tracerTarget, beamEnd);
		}
	}
}

void ASWeapon::processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked)
{
	if(hitBlocked)//something got hit by the trace
	{
		//process damage
		AActor* hitActor = hit.GetActor();

		
		UGameplayStatics::ApplyPointDamage(hitActor, damage, shotDirection, hit, weaponOwner->GetInstigatorController(), this, typeOfDamage);

		if(hitImpactEffect)//if it was assigned
		{
			//spawn impact effect
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitImpactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());
			//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
		}
	}
}

void ASWeapon::muzzleFireFlash()
{
	if(muzzleEffect)//only if a muzzle effect was assigned
	{
		UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
	}
}

void ASWeapon::fire()
{
	//first it has to trace the world from the pawn's eyes to the crosshair (at the center of the screen)

	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if(weaponOwner)
	{
		muzzleFireFlash();

		
		FVector eyesLocation;//will be used as the starting point for our trace
		FRotator eyesRotation;
		weaponOwner->GetActorEyesViewPoint(eyesLocation, eyesRotation);//now we have the eyes's location and rotation

		FVector shotDirection = eyesRotation.Vector();
		int traceMultiplier = 10000;
		FVector traceDistance = eyesLocation + shotDirection * traceMultiplier;//where the trace ends

		FCollisionQueryParams collisionParameters;
		collisionParameters.AddIgnoredActor(weaponOwner);//owner is ignored when tracing
		collisionParameters.AddIgnoredActor(this);//ignore also the weapon in the trace
		collisionParameters.bTraceComplex = true;//traces against each individual triangle from the traced mesh. Gives the exact result of where we hit something. It's more expensive

		
		FHitResult hit;//struct containing hit information
		bool hitBlocked = GetWorld()->LineTraceSingleByChannel(hit, eyesLocation, traceDistance, ECC_Visibility, collisionParameters);
		//ECC_Visibility is used now because everything that blocks that channel, will block the trace.
		//That thing that blocks will be something that can be damaged
		processPointDamage(weaponOwner, shotDirection, hit, hitBlocked);


		tracerEffectSpawn(hitBlocked, hit, traceDistance);//create beam to represent bullet trajectory 

		if(DebugWeaponDrawing > 0)
		{
			DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
		}
		
	}
	
	
}
