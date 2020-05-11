// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"


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
		UE_LOG(LogTemp, Warning, TEXT("Pickup object class not set in %s."), *GetName());
		return;
	}
	
	FActorSpawnParameters spawningParameters;
	spawningParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FTransform spawnTransform = GetTransform();

	spawnTransform.SetLocation(GetTransform().GetLocation() + pickupObjectLocation);
	
	pickupObjectInstance = GetWorld()->SpawnActor<AActor>(pickupObjectClass, spawnTransform, spawningParameters);
}

void ASPickupActor::pickupObjectOverlaping(AActor* OtherActor)
{

}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	//give player a powerup, if a player overlapped.
	if(Role == ROLE_Authority && pickupObjectInstance)
	{
		pickupObjectOverlaping(OtherActor);

		//set respawn timer
		GetWorldTimerManager().SetTimer(respawnPickupObjectTimer, this, &ASPickupActor::respawn, respawnCooldown);
	}
}

void ASPickupActor::emitObjectPickedSound()
{
	if(ObjectPickedUpSound)
	{
		UGameplayStatics::SpawnSoundAttached(ObjectPickedUpSound, RootComponent);
	}
}

