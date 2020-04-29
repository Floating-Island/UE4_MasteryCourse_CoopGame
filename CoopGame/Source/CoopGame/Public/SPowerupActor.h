// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupActor.generated.h"


class URotatingMovementComponent;
class UPointLightComponent;

UCLASS()
class COOPGAME_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		UPointLightComponent* pointLight;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		URotatingMovementComponent* rotationComponent;

	/*Time between powerup's application*/
	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
		float powerupDuration;

	/*Number of times the powerup is applied*/
	UPROPERTY(EditDefaultsOnly, Category = "Powerup")
		int32 ticksQuantity;

	FTimerHandle powerupTickTimer;

	//ticks that have been applied
	int32 processedTicks;
	
	UFUNCTION()
		void onTickPowerup();

	UPROPERTY(ReplicatedUsing = onPowerUpActivation)
		bool bIsActivated;

	UFUNCTION()
		void onPowerUpActivation();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerup")
		virtual void onStateChanged(bool bIsStateActive);
	
public:	

	void activatePowerup();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerup")
		virtual void onActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerup")
		virtual void powerupTicking();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerup")
		virtual void onExpired();
	
};
