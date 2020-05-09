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
#include "Sound/SoundCue.h"
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
	explosionRadius = 350;
	bHasExploded = false;

	outerSwarmSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Outer Swarm Sphere Component"));
	outerSwarmSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	outerSwarmSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	outerSwarmSphere->SetCollisionResponseToChannel(COLLISION_TRACKERBOT_CHANNEL, ECR_Overlap);
	outerSwarmSphere->SetupAttachment(RootComponent);
	outerSwarmSphere->SetGenerateOverlapEvents(true);
	outerSwarmSphere->OnComponentBeginOverlap.AddDynamic(this, &ASTrackerBot::increasePowerLevel);
	outerSwarmSphere->OnComponentEndOverlap.AddDynamic(this, &ASTrackerBot::decreasePowerLevel);

	maximumPowerLevel = 3;
	currentPowerLevel = 0;
	swarmBonusDamageMultiplier = 15;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	serverCalculateNextStep();
	overlapSphere->SetSphereRadius(explosionRadius);
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	serverMoveToNextStep();
	swarmGlow();
}

void ASTrackerBot::serverMoveToNextStep()
{
	if(Role == ROLE_Authority && !bHasExploded)
	{
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
}

void ASTrackerBot::serverCalculateNextStep()
{
	if(Role == ROLE_Authority)
	{
		nextStep = nextStepInDestination();
	}
}

FVector ASTrackerBot::nextStepInDestination()
{
	ACharacter* target = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);//shouldn't be used, it's a hack
	FVector currentLocation = GetActorLocation();
	
	UNavigationPath* pathToTarget =  UNavigationSystemV1::FindPathToActorSynchronously(this,currentLocation, target);
	if(pathToTarget && pathToTarget->PathPoints.Num() > 1)
	{
		return pathToTarget->PathPoints[1];
	}
	return currentLocation;
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

void ASTrackerBot::increasePowerLevel(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	currentPowerLevel = FMath::Clamp(++currentPowerLevel, currentPowerLevel, maximumPowerLevel);
	UE_LOG(LogTemp, Log, TEXT("power level: %s"), *FString::FromInt(currentPowerLevel));
}

void ASTrackerBot::decreasePowerLevel(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex)
{
	currentPowerLevel = FMath::Clamp(--currentPowerLevel, 0, currentPowerLevel);
	UE_LOG(LogTemp, Log, TEXT("power level: %s"), *FString::FromInt(currentPowerLevel));

}

void ASTrackerBot::swarmGlow()
{
	if (swarmMaterialGlow == nullptr)
	{
		swarmMaterialGlow = meshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, meshComp->GetMaterial(0));//0 because it's the only material of the mesh.
	}

	if (swarmMaterialGlow)//isn't nullptr and it was assigned in blueprint. 
	{
		float relativePowerLevel = currentPowerLevel / static_cast<float>(maximumPowerLevel);
		swarmMaterialGlow->SetScalarParameterValue("PowerLevelAlpha", relativePowerLevel);//the name of the parameter set inside the material's graph
	}
}

void ASTrackerBot::selfDestruct()
{
	if(bHasExploded)
	{
		return;
	}
	bHasExploded = true;
	explosionEffect();//if we have dedicated servers, this and other things (like the one below this) shouldn't be done by them.
	hideMesh();
	
	if(Role == ROLE_Authority)
	{	
		provokeRadialDamage();
		//Destroy tracker after some time
		SetLifeSpan(0.5f);
	}
}

void ASTrackerBot::explosionEffect()
{
	if(explosionParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticle, GetActorLocation());
	}
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), destructionSound, GetActorLocation(), GetActorRotation());
}

void ASTrackerBot::hideMesh()
{
	meshComp->SetVisibility(false, true);
	meshComp->SetSimulatePhysics(false);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ASTrackerBot::provokeRadialDamage()
{
	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);
	float currentDamage = explosionDamage + currentPowerLevel * swarmBonusDamageMultiplier;
	UE_LOG(LogTemp, Log, TEXT("Damage Dealt: %s"), *FString::FromInt(currentDamage));
	UGameplayStatics::ApplyRadialDamage(GetWorld(), currentDamage, GetActorLocation(), explosionRadius, explosionDamageType, ignoredActors, this, GetInstigatorController(), true, COLLISION_WEAPON_CHANNEL);
}

void ASTrackerBot::selfDamage()
{
	UGameplayStatics::ApplyDamage(this, selfInflictedDamage, GetInstigatorController(), this, explosionDamageType);
}


void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	if(bSelfDestructionInitiated || bHasExploded)
	{
		return;
	}
	ASCharacter* playerPawn = Cast<ASCharacter>(OtherActor);
	if(playerPawn)
	{
		bSelfDestructionInitiated = true;
		//overlapped with a player, start self destruction sequence...
		UGameplayStatics::SpawnSoundAttached(destructionSequenceInitiatedSound, RootComponent);
		serverStartSelfDestruct();
	}
}

void ASTrackerBot::serverStartSelfDestruct()
{
	if(Role == ROLE_Authority)
	{
		float timerTime = 0.25f;
		GetWorldTimerManager().SetTimer(SelfDamageTimer, this, &ASTrackerBot::selfDamage, timerTime, true, 0);	
	}
}