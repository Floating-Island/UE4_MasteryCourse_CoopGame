// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"

// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetCanEverAffectNavigation(false);
	RootComponent = meshComp;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	
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

}
