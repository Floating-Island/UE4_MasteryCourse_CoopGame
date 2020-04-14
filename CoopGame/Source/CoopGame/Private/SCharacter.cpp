// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/SCharacter.h"
#include "SCharacter.h"

// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//model movement input
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::moveForward);//binded with W key in editor representing a +1 value and with S representing -1.
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::moveRight);//binded with D key in editor representing a +1 value and with A representing -1.

	//camera movement input
	PlayerInputComponent->BindAxis("LookUp", this, &ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRight", this, &ASCharacter::AddControllerYawInput);
}

void ASCharacter::moveForward(float forwardValue)
{
	AddMovementInput(GetActorForwardVector() * forwardValue);
}

void ASCharacter::moveRight(float rightValue)
{
	AddMovementInput(GetActorRightVector() * rightValue);
}

