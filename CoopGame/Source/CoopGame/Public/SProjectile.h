// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;


UCLASS()
class COOPGAME_API ASProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		USphereComponent* collisionComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")//UE4 now is able to see and edit this
		UStaticMeshComponent* mesh;//to be able to show it.

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")//secure way to expose it
		UParticleSystem* hitImpactEffect;

	FTimerHandle explodeTimer;//timer to explode


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void provokeRadialDamage(const FHitResult& hit);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		TSubclassOf<UDamageType> damageType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		float damage;
	
	///** called when projectile hits something */
	//UFUNCTION()
	//	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);

	void generateExplosion();

};
