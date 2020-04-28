// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"

#include "SPowerupActor.h"

// Sets default values
ASPickupActor::ASPickupActor()
{
	float radius = 75;
	overlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlapping Sphere Component"));
	overlapSphere->SetSphereRadius(radius);
	RootComponent = overlapSphere;

	decalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Component"));
	decalComp->SetupAttachment(RootComponent);
	decalComp->SetRelativeRotation(FRotator(90, 0, 0));
	decalComp->DecalSize = FVector(64, radius, radius);


	respawnCooldown = 10;
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	respawn();
}

void ASPickupActor::respawn()
{
	if(powerupClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Powerup class not set in %s."), *GetName());
		return;
	}
	
	FActorSpawnParameters spawningParameters;
	spawningParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	powerupInstance = GetWorld()->SpawnActor<ASPowerupActor>(powerupClass, GetTransform(), spawningParameters);
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	//give player a powerup, if a player overlapped.
	if(powerupInstance)
	{
		powerupInstance->activatePowerup();
		powerupInstance = nullptr;

		//set respawn timer
		GetWorldTimerManager().SetTimer(respawnPowerupTimer, this, &ASPickupActor::respawn, respawnCooldown);
	}
}

