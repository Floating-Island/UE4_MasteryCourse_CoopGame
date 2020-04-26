// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"

// Sets default values
ASPickupActor::ASPickupActor()
{

	overlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlapping Sphere Component"));
	RootComponent = overlapSphere;

	decalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Component"));
	decalComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
}

