// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectile.h"
#include "SGrenadeProjectile.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASGrenadeProjectile : public ASProjectile
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ASGrenadeProjectile();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion")
	float explosionCountdown;

	FTimerHandle explodeTimer; //timer for explosion

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Explosion")
	float damageRadius;

	void startExplosionCountdown();
	void generateExplosion();
	void provokeRadialDamage(const FHitResult& hit);
};