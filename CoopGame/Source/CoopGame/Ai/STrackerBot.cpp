// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"

#include "SHealthComponent.h"

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

	
	forceMagnitude = 1000;
	minimumEndSeekDistance = 100.0f;

	bVelocityChanges = true;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	nextStep = nextStepInDestination();
}

void ASTrackerBot::handleTakeDamage(USHealthComponent* trigger, float health, float healthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//explodes when health equals zero.

	//we should pulse the material when hit, pulse more when nearing death.

	meshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, meshComp->GetMaterial(0));//0 because it's the only material of the mesh.
}

FVector ASTrackerBot::nextStepInDestination()
{
	ACharacter* target = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);//shouldn't be used, it's a hack
	FVector currentLocation = this->GetActorLocation();
	
	UNavigationPath* pathToTarget =  UNavigationSystemV1::FindPathToActorSynchronously(this,currentLocation, target);
	if(pathToTarget->PathPoints.Num() > 1)
	{
		return pathToTarget->PathPoints[1];
	}
	return currentLocation;
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
