// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExplosiveBarrel.generated.h"

class URadialForceComponent;
class USHealthComponent;

UCLASS()
class COOPGAME_API ASExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExplosiveBarrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		URadialForceComponent* forceComp;

	//health component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USHealthComponent* healthComp;

	UFUNCTION()
		void onHealthChanged(USHealthComponent* trigger,
			float health,
			float healthDelta,
			const class UDamageType* DamageType,
			class AController* InstigatedBy,
			AActor* DamageCauser);

	UPROPERTY(ReplicatedUsing = serverImitateExplosionReplication, BlueprintReadOnly, Category = "Barrel")
		bool bHasExploded;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barrel")
		UMaterialInterface* explodedMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "Barrel")
		UParticleSystem* explodeParticle;

	UPROPERTY(EditDefaultsOnly, Category = "Barrel")
		float explosionDamage;

	UPROPERTY(EditDefaultsOnly, Category = "Barrel")
		float explosionRadius;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barrel")
		TSubclassOf<UDamageType> damageType;

	UPROPERTY(EditDefaultsOnly, Category = "Barrel")
		FVector explosionReactionImpulse;

	void explode();
	void explosionEffects();
	
	UFUNCTION()
		void serverImitateExplosionReplication();
	
	
	void provokeRadialDamage();


};
