// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"

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
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	//give player a powerup, if a player overlapped.
}
