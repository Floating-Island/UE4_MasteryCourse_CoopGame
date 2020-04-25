// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackerBot.generated.h"


class USHealthComponent;
class UParticleSystem;

UCLASS()
class COOPGAME_API ASTrackerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASTrackerBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void pulseBody();

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* meshComp;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
		USHealthComponent* healthComp;

	UFUNCTION()
		void handleTakeDamage(USHealthComponent* trigger, float health, float healthDelta,
								const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

	
	FVector nextStepInDestination();

	FVector nextStep;

	UPROPERTY(EditDefaultsOnly, Category = "Tracking")
	int forceMagnitude;

	UPROPERTY(EditDefaultsOnly, Category = "Tracking")
		bool bVelocityChanges;

	UPROPERTY(EditDefaultsOnly, Category = "Tracking")
		float minimumEndSeekDistance;

	UMaterialInstanceDynamic* pulseMaterial;

	void selfDestruct();
	void explosionEffect();

	UPROPERTY(EditDefaultsOnly, Category = "Destruction")
		UParticleSystem* explosionParticle;

	UPROPERTY(EditDefaultsOnly, Category = "Destruction")
		float explosionDamage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Destruction")
		float explosionRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Destruction")
		TSubclassOf<UDamageType> explosionDamageType;

	bool bHasExploded;

	void provokeRadialDamage();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};