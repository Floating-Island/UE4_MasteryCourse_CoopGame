// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectile.h"

#include "Components/PrimitiveComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ASProjectile::ASProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject < UStaticMeshComponent>(TEXT("Mesh Component"));//creates component 
	
	
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = mesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
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

	damage = 40.0f;
}



// Called when the game starts or when spawned
void ASProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

