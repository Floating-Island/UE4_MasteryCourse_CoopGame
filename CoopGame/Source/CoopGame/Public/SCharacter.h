// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class COOPGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

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

	
	//forward movement
	void moveForward(float forwardValue);//move backwards is the same but negative

	//right movement
	void moveRight(float rightValue);

	//crouching
	void beginCrouch();

	void endCrouch();

	//jumping
	void jump();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
