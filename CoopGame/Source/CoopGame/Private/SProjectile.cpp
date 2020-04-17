// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectile.h"


#include "Kismet/GameplayStatics.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TimerManager.h"

// Sets default values
ASProjectile::ASProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject < UStaticMeshComponent>(TEXT("Mesh Component"));//creates component 
	RootComponent = mesh;
	
	
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = RootComponent;
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

	
}

// Called when the game starts or when spawned
void ASProjectile::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().ClearTimer(explodeTimer);
	GetWorldTimerManager().SetTimer(explodeTimer, this, &ASProjectile::generateExplosion, 1.0f, false);
}

// Called every frame
void ASProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASProjectile::provokeRadialDamage(const FHitResult& hit)
{
	//process damage
	AActor* hitActor = hit.GetActor();

	float damage = 40.0f;
	float damageRadius = 50.0f;
	TArray<AActor*> ignoredActors = TArray<AActor*>();
	UGameplayStatics::ApplyRadialDamage(this, damage, this->GetActorLocation(), damageRadius, damageType, ignoredActors, this->GetOwner(),this->GetInstigatorController(), true, ECC_Visibility);

	if (hitImpactEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitImpactEffect, this->GetActorLocation(), this->GetActorRotation());
		//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
	}
}

void ASProjectile::generateExplosion()
{
	FHitResult hit;
	provokeRadialDamage(hit);
	Destroy();
}

//void ASProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//                         FVector NormalImpulse, const FHitResult& hit)
//{
//	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
//	{
//		provokeRadialDamage(hit);
//	}
//	MakeNoise(1.0f, Instigator);//instigator is the one responsible for damage deal. In this case is used to make noise.
//	//Instigator has a UNoiseEmitterComponent so it's nice to use.
//	Destroy();//only the server has the authority to destroy it.
//}

