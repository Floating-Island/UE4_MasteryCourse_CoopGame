// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"//used to help seeing the trace
#include "Kismet/GameplayStatics.h"
//#include "Particles/ParticleSystem.h"//used to spawn effects
//#include "Components/SkeletalMeshComponent.h" //used to get the muzzle socket location
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ASWeapon::ASWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));//mesh instantiation
	RootComponent = mesh;//make mesh the root components

	muzzleSocket = "MuzzleSocket";
	tracerTarget = "Target";
}

// Called when the game starts or when spawned
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();
	
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

void ASWeapon::processDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked)
{
	if(hitBlocked)//something got hit by the trace
	{
		//process damage
		AActor* hitActor = hit.GetActor();

		float damage = 20.0f;
		UGameplayStatics::ApplyPointDamage(hitActor, damage, shotDirection, hit, weaponOwner->GetInstigatorController(), this, typeOfDamage);

		if(hitImpactEffect)//if it was assigned
		{
			//spawn impact effect
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitImpactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());
			//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
		}
	}
}

void ASWeapon::fire()
{
	//first it has to trace the world from the pawn's eyes to the crosshair (at the center of the screen)

	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	if(weaponOwner)
	{
		if(muzzleEffect)//only if a muzzle effect was assigned
		{
			UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
		}

		
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
		processDamage(weaponOwner, shotDirection, hit, hitBlocked);


		tracerEffectSpawn(hitBlocked, hit, traceDistance);//create beam to represent bullet trajectory 

		DrawDebugLine(GetWorld(), eyesLocation, traceDistance, FColor::Orange, false, 1.0f, 0, 1.0f);//draws a line representing the trace
		
	}
	
	
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

