// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "PhysicsEngine/RadialForceComponent.h"

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
	float impulseMagnitude = 100000.0;
	explosionReactionImpulse = FVector(0.0f, 0.0f, impulseMagnitude);
	
	
	forceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("Radial Force Component"));
	forceComp->SetupAttachment(RootComponent);
	forceComp->bIgnoreOwningActor = true;
	forceComp->bAutoActivate = false;//so we don't need to have tick enabled
}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	forceComp->Radius = explosionRadius;
	forceComp->ImpulseStrength = explosionReactionImpulse.Size();
	healthComp->onHealthChanged.AddDynamic(this, &ASExplosiveBarrel::onHealthChanged);
}

void ASExplosiveBarrel::explode()
{
	bHasExploded = true;
	mesh->SetMaterial(mesh->GetMaterialIndex("DefaultMaterial"), explodedMaterial);
	if(explodeParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, explodeParticle, this->GetActorLocation(), this->GetActorRotation());
	}
	mesh->AddImpulse(explosionReactionImpulse);//doesn't work yet
	forceComp->FireImpulse();
	provokeRadialDamage();
}

void ASExplosiveBarrel::onHealthChanged(USHealthComponent* trigger, float health, float healthDelta,
                                        const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if(health <= 0 && !bHasExploded)
	{
		explode();
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
