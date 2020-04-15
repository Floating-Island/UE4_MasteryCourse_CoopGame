// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/SCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"


// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("springArm"));
	springArm->SetupAttachment(RootComponent);//root component will be the character capsule
	springArm->bUsePawnControlRotation = true;//set to true to be able to rotate the camera based on the springArm vision. Now lookUp and turnRight will be used to rotate the camera

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("camera"));
	//the text macro helps to create strings for us.
	camera->SetupAttachment(springArm);//the camera is now attached to the spring arm
	//collision tests inside the editor help when a wall is between the character and the camera

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;//necessary to allow the pawn to crouch
	
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

	//character crouch binding
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASCharacter::beginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASCharacter::endCrouch);
}

void ASCharacter::moveForward(float forwardValue)
{
	AddMovementInput(GetActorForwardVector() * forwardValue);
}

void ASCharacter::moveRight(float rightValue)
{
	AddMovementInput(GetActorRightVector() * rightValue);
}

void ASCharacter::beginCrouch()
{
	Crouch();
}

void ASCharacter::endCrouch()
{
	UnCrouch();
}

