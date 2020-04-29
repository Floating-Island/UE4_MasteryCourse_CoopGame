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

	pickupObjectLocation = FVector(0, 0, 50);

	respawnCooldown = 10;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	if(Role == ROLE_Authority)
	{
		respawn();
	}
}

void ASPickupActor::respawn()
{
	if(pickupObjectClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Powerup class not set in %s."), *GetName());
		return;
	}
	
	FActorSpawnParameters spawningParameters;
	spawningParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FTransform spawnTransform = GetTransform();

	spawnTransform.SetLocation(GetTransform().GetLocation() + pickupObjectLocation);
	
	powerupInstance = GetWorld()->SpawnActor<ASPowerupActor>(pickupObjectClass, spawnTransform, spawningParameters);
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	//give player a powerup, if a player overlapped.
	if(Role == ROLE_Authority && powerupInstance)
	{
		powerupInstance->SetOwner(OtherActor);
		powerupInstance->activatePowerup();
		powerupInstance = nullptr;

		//set respawn timer
		GetWorldTimerManager().SetTimer(respawnPowerupTimer, this, &ASPickupActor::respawn, respawnCooldown);
	}
}

