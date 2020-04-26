// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPickupActor.generated.h"

class UsphereComponent;

UCLASS()
class COOPGAME_API ASPickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UsphereComponent* overlapSphere;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UDecalComponent* decalComp;
public:	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
