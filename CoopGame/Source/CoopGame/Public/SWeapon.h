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
class USoundCue;



UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASWeapon();
	void limitAmmoToCapacitiesSet();

	virtual void startFire();

	virtual void stopFire();

	bool hasAmmoInMagazine();
	void reduceMagazineAmmo();
	void reload();

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int magazineCapacity;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int ammoInMagazine;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int availableBackupAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		int backupAmmoCapacity;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon") //not everything has to be exposed to blueprints
		TSubclassOf<UCameraShake> recoilCameraShake;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //no need to edit it
		FName muzzleSocket;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon") //secure way to expose it
		UParticleSystem* muzzleEffect;
	
	TMap<EPhysicalSurface, UParticleSystem**> physicalMaterialsMap;//to map surface types

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* DefaultHitImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* FleshImpactEffect;

	void reactAtPhysicsMaterial(FVector hitImpactPoint, EPhysicalSurface surfaceHit);

	//fire rate timers
	FTimerHandle timeBetweenShotsTimer;

	UPROPERTY(ReplicatedUsing = firingEffects)
		float lastFireTime;

	/*Bullets per minute*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (ClampMin = "0.1"))
		float fireRate;

	/*Inverse of fireRate (in seconds)*/
	float timeBetweenShots;

	template <typename callerType, void(callerType::* method)()>
	void fireAtRate(callerType* caller);

	virtual void fire();

	void recoilShakingCamera(AActor* weaponOwnerActor);

	//networking
	UFUNCTION(Server, Reliable, WithValidation)
		void serverFires();

	void checkIfServerIsFiring();

	UFUNCTION()
		void firingEffects();

	//Sounds
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USoundCue* fireSound;

	void emitFireSound();

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USoundCue* reloadSound;

	void emitReloadSound();
	
};

template <typename callerType, void( callerType::* method)()>
void ASWeapon::fireAtRate(callerType* caller)
{
	const float firstDelay = FMath::Max(0.0f, lastFireTime + timeBetweenShots - GetWorld()->TimeSeconds);
	GetWorldTimerManager().SetTimer(timeBetweenShotsTimer, caller, method, timeBetweenShots, true, firstDelay);
}
