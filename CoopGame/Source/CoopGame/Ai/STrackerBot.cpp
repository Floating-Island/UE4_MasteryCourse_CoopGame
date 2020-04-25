// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"

#include "SHealthComponent.h"
#include "SCharacter.h"
#include "CoopGame.h"

// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetCanEverAffectNavigation(false);//doesn't interfere with the navigation mesh volume
	meshComp->SetSimulatePhysics(true);//so we can apply forces to it.
	RootComponent = meshComp;

	healthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health Component"));
	healthComp->onHealthChanged.AddDynamic(this, &ASTrackerBot::handleTakeDamage);

	overlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere Component"));
	overlapSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);//doesn't need physics
	overlapSphere->SetCollisionResponseToAllChannels(ECR_Ignore);//doesn't interact with any channel
	overlapSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);//only responds to the pawn channel
	overlapSphere->SetupAttachment(RootComponent);
	selfInflictedDamage = 10;
	bSelfDestructionInitiated = false;
	
	forceMagnitude = 1000;
	minimumEndSeekDistance = 100.0f;

	bVelocityChanges = true;

	explosionDamage = 30;
	explosionRadius = 200;
	bHasExploded = false;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	nextStep = nextStepInDestination();
	overlapSphere->SetSphereRadius(overlapRadius);
}

void ASTrackerBot::pulseBody()
{
	if (pulseMaterial == nullptr)
	{
		pulseMaterial = meshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, meshComp->GetMaterial(0));//0 because it's the only material of the mesh.
	}

	if (pulseMaterial)//isn't nullptr and it was assigned in blueprint. 
	{
		pulseMaterial->SetScalarParameterValue("lastTimeDamaged", GetWorld()->TimeSeconds);//the name of the parameter set inside the material's graph
	}
}

void ASTrackerBot::handleTakeDamage(USHealthComponent* trigger, float health, float healthDelta,
                                    const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//we should pulse the material when hit, pulse more when nearing death.
	pulseBody();
	if(health <= 0)
	{
		//explodes when health equals zero.
		selfDestruct();
	}
}

FVector ASTrackerBot::nextStepInDestination()
{
	ACharacter* target = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);//shouldn't be used, it's a hack
	FVector currentLocation = GetActorLocation();
	
	UNavigationPath* pathToTarget =  UNavigationSystemV1::FindPathToActorSynchronously(this,currentLocation, target);
	if(pathToTarget->PathPoints.Num() > 1)
	{
		return pathToTarget->PathPoints[1];
	}
	return currentLocation;
}

void ASTrackerBot::selfDestruct()
{
	if(bHasExploded)
	{
		return;
	}
	bHasExploded = true;
	explosionEffect();
	provokeRadialDamage();
	DrawDebugSphere(GetWorld(), GetActorLocation(), explosionRadius, 32, FColor::Yellow, false, 1.0f, 0, 1);
	//Destroy tracker immediately
	Destroy();
}

void ASTrackerBot::explosionEffect()
{
	if(explosionParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticle, GetActorLocation());
	}
}

void ASTrackerBot::provokeRadialDamage()
{
	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);
	UGameplayStatics::ApplyRadialDamage(GetWorld(), explosionDamage, GetActorLocation(), explosionRadius, explosionDamageType, ignoredActors, this, GetInstigatorController(), true, COLLISION_WEAPON_CHANNEL);
}

void ASTrackerBot::selfDamage()
{
	UGameplayStatics::ApplyDamage(this, selfInflictedDamage, GetInstigatorController(), this, explosionDamageType);
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	FVector forceDirection = nextStep - currentLocation;
	float distanceToTargetStep = forceDirection.Size(); 
	
	if(distanceToTargetStep <= minimumEndSeekDistance)
	{
		nextStep = nextStepInDestination();
	}
	else
	{
		//get pushed to nextStep
		forceDirection.Normalize();
		meshComp->AddForce(forceDirection * forceMagnitude, NAME_None, bVelocityChanges);
	}
}

void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if(bSelfDestructionInitiated)
	{
		return;
	}
	ASCharacter* playerPawn = Cast<ASCharacter>(OtherActor);
	if(playerPawn)
	{
		bSelfDestructionInitiated = true;
		//overlapped with a player, start self destruction sequence...
		float timerTime = 0.5f;
		GetWorldTimerManager().SetTimer(SelfDamageTimer, this, &ASTrackerBot::selfDamage, timerTime, true, 0);
	}
}
