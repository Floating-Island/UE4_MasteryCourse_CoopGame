// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectile.h"
#include "SGrenadeProjectile.generated.h"


class USoundCue;
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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		float explosionDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		TSubclassOf<UDamageType> damageType;

	UPROPERTY(ReplicatedUsing = serverImitateExplosionReplication)
	bool bIsExploding;

	UFUNCTION()
		void serverImitateExplosionReplication();
	void explosionEffects();
	void startExplosionCountdown();
	void generateExplosion();
	void provokeRadialDamage();

	UFUNCTION()
		void serverVanish();

	UPROPERTY(EditDefaultsOnly, Category = "Destruction")
		USoundCue* explosionSound;
	
};
