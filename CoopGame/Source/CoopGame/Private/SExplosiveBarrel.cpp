// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"

#include "SHealthComponent.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
	bHasExploded = false;
	healthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health Component"));
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = mesh;
	
}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
	healthComp->onHealthChanged.AddDynamic(this, &ASExplosiveBarrel::onHealthChanged);
}

void ASExplosiveBarrel::onHealthChanged(USHealthComponent* trigger, float health, float healthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	DrawDebugSphere(GetWorld(), this->GetActorLocation(), 300.0f, 36, FColor::Black, false, 2.0f, 2, 3);
	if(health <= 0 && !bHasExploded)
	{
		mesh->SetMaterial(mesh->GetMaterialIndex("DefaultMaterial"), explodedMaterial);
		
	}
}
