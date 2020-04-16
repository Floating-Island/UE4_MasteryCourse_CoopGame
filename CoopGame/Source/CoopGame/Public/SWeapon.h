// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;

UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void tracerEffectSpawn(bool hitBlocked, FHitResult hit, FVector traceDistance);
	void processPointDamage(AActor* weaponOwner, FVector shotDirection, FHitResult hit, bool hitBlocked);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* mesh;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void fire();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> typeOfDamage;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
	FName muzzleSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
	UParticleSystem* muzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* hitImpactEffect;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//no need to edit it
		FName tracerTarget;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")//secure way to expose it
		UParticleSystem* tracerEffect;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
