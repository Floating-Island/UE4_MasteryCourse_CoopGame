// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPickupActor.generated.h"

class USphereComponent;
class ASPowerupActor;
class USoundCue;

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

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
		USphereComponent* overlapSphere;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
		UDecalComponent* decalComp;

	UPROPERTY(EditInstanceOnly, Category = "Pickup Actor")//EditInstanceOnly allows to change the powerup in each instance.
		TSubclassOf<AActor> pickupObjectClass;

	UPROPERTY(EditInstanceOnly, Category = "Pickup Actor")
		FVector pickupObjectLocation;

	AActor* pickupObjectInstance;
	UFUNCTION()
		void respawn();
	
	virtual void pickupObjectOverlaping(AActor* OtherActor);
	
	FTimerHandle respawnPickupObjectTimer;

	UPROPERTY(EditInstanceOnly, Category = "Pickup Actor")
		float respawnCooldown;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USoundCue* ObjectPickedUpSound;

	
public:	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void emitObjectPickedSound();
};
