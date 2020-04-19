// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;
class UCameraShake;

UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASWeapon();

	virtual void startFire();

	virtual void stopFire();

protected:
	virtual void BeginPlay() override;
	
	void muzzleFireFlash();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> typeOfDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float baseDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float bonusDamage;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //no need to edit it
	FName muzzleSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //secure way to expose it
	UParticleSystem* muzzleEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon") //not everything has to be exposed to blueprints
	TSubclassOf<UCameraShake> recoilCameraShake;

	
	TMap<EPhysicalSurface, UParticleSystem**> physicalMaterialsMap;//to map surface types

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* DefaultHitImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* FleshImpactEffect;

	void reactAtPhysicsMaterial(FHitResult hit, EPhysicalSurface surfaceHit);//should be in a projectile

	//fire rate timers
	FTimerHandle timeBetweenShotsTimer;

	float lastFireTime;

	/*Bullets per minute*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		float fireRate;

	/*Inverse of fireRate (in seconds)*/
	float timeBetweenShots;
	
	template< class UserClass >
	void fireAtRate(typename FTimerDelegate::TUObjectMethodDelegate< UserClass >::FMethodPtr InTimerMethod);

	virtual void fire();

	void recoilShakingCamera(AActor* weaponOwnerActor);
};

template <class UserClass>
void ASWeapon::fireAtRate(typename FTimerDelegate::TUObjectMethodDelegate<UserClass>::FMethodPtr InTimerMethod)
{
	const float firstDelay = FMath::Max(0.0f, lastFireTime + timeBetweenShots - GetWorld()->TimeSeconds);

	GetWorldTimerManager().SetTimer(timeBetweenShotsTimer, this, InTimerMethod, timeBetweenShots, true, firstDelay);
}