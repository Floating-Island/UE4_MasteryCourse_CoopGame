// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"

#include "SHealthComponent.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
	bHasDied = false;
	healthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health Component"));
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = mesh;
}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void ASExplosiveBarrel::onHealthChanged(USHealthComponent* trigger, float health, float healthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
}
