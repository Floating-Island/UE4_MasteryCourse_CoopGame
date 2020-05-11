// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ASWeapon;
class UAudioComponent;
class USHealthComponent;

UCLASS()
class COOPGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();
	void attachWeapon();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void startFire();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void stopFire();
	
	void serverAttachWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//camera component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//An instance is assigned only in the constructor and then more properties are added, but the object can't be swapped for another. Also available to blueprints
		UCameraComponent* camera;
	
	//spring arm component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* springArm;//used to adapt lookUp and turnRight to a third person camera mode

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UAudioComponent* audioComponent;
	
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

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Player")
	bool bHasDied;

	
	//forward movement
	void moveForward(float forwardValue);//move backwards is the same but negative

	//right movement
	void moveRight(float rightValue);

	//crouching
	void beginCrouch();

	void endCrouch();

	//jumping
	void jump();

	//zooming
	float defaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float zoomFOV;

	float targetFOV; //necessary to smooth the zooming in and zooming out.

	UPROPERTY(EditDefaultsOnly, Category = "Camera", meta = (ClampMin = 0.1, ClampMax = 100))
	float fovTransitionSpeed;

	void beginZoom();

	void endZoom();

	//weapon holding
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon")
	ASWeapon* heldWeapon;

	UFUNCTION(BlueprintCallable, Category = "weapon")
		bool isHoldingAWeapon();

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TSubclassOf<ASWeapon> heldWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
		FName weaponSocket;

	UFUNCTION(BlueprintCallable)
		void emitWalkingSound();

	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;//we want to get the camera view

	void replaceHeldWeapon(ASWeapon* newWeapon);
};
