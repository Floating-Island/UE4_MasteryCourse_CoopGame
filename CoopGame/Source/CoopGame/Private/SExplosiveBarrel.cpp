// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Components/PrimitiveComponent.h"

#include "SHealthComponent.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
	bHasExploded = false;
	healthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health Component"));
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = mesh;
	explosionDamage = 60.0f;
	explosionRadius = 200.0f;
	mesh->SetSimulatePhysics(true);
	explosionReactionImpulse = FVector(0.0f, 0.0f, 10.0f);
	
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
	if(health <= 0 && !bHasExploded)
	{
		bHasExploded = true;
		mesh->SetMaterial(mesh->GetMaterialIndex("DefaultMaterial"), explodedMaterial);
		if(explodeParticle)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, explodeParticle, this->GetActorLocation(), this->GetActorRotation());
		}
		mesh->AddImpulse(explosionReactionImpulse);
		
		provokeRadialDamage();
	}
}

void ASExplosiveBarrel::provokeRadialDamage()
{
	FHitResult hit;
	//process baseDamage
	AActor* hitActor = hit.GetActor();

	TArray<AActor*> ignoredActors = TArray<AActor*>();


	EPhysicalSurface surfaceHit = UPhysicalMaterial::DetermineSurfaceType(hit.PhysMaterial.Get());

	bool damagedApplied = false;
	damagedApplied = UGameplayStatics::ApplyRadialDamage(this, explosionDamage, this->GetActorLocation(), explosionRadius, damageType,
		ignoredActors, this, this->GetInstigatorController(), true, ECC_Visibility);
}
