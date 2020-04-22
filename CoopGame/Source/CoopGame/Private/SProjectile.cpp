// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectile.h"

#include "Components/PrimitiveComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

#include "CoopGame.h"

// Sets default values
ASProjectile::ASProjectile()
{
	physicalMaterialsMap.Add(SurfaceType_Default, &DefaultHitImpactEffect);
	physicalMaterialsMap.Add(SURFACE_FLESH_DEFAULT, &FleshImpactEffect);
	physicalMaterialsMap.Add(SURFACE_FLESH_VULNERABLE, &FleshImpactEffect);

	mesh = CreateDefaultSubobject < UStaticMeshComponent>(TEXT("Mesh Component"));//creates component 
	
	
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = mesh;
	ProjectileMovement->InitialSpeed = 500.0f;
	ProjectileMovement->MaxSpeed = 1000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;


	// Use a sphere as a simple collision representation
	collisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	collisionComponent->InitSphereRadius(4.0f);
	collisionComponent->SetCollisionProfileName("Projectile");
	//	collisionComponent->OnComponentHit.AddDynamic(this, &ASProjectile::OnHit);	// set up a notification for when this component hits something blocking

		// Players can't walk on it
	collisionComponent->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	collisionComponent->CanCharacterStepUpOn = ECB_No;

	RootComponent = mesh;

	baseDamage = 40.0f;

	bonusDamage = 60.0f;

	SetReplicates(true);
	SetReplicateMovement(true);
}



// Called when the game starts or when spawned
void ASProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void ASProjectile::reactAtPhysicsMaterial(FHitResult hit, EPhysicalSurface surfaceHit)
{
	UParticleSystem* selectedHitImpactEffect = *(*(physicalMaterialsMap.Find(surfaceHit)));

	if (!selectedHitImpactEffect)
	{
		selectedHitImpactEffect = DefaultHitImpactEffect;
	}

	if (selectedHitImpactEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), selectedHitImpactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());
		//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
	}
}

