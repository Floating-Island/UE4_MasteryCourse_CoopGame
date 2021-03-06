// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/SCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"
#include "kismet/KismetMathLibrary.h"

#include "SWeapon.h"
#include "CoopGame.h"
#include "SHealthComponent.h"

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

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanJump = true;//necessary to allow the pawn to jump

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON_CHANNEL, ECR_Ignore);

	healthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("Health"));

	bHasDied = false;

	//zoom properties
	defaultFOV = camera->FieldOfView;

	zoomFOV = 65.0f;

	targetFOV = defaultFOV;//if not set, tick would target a random float number!!
	
	fovTransitionSpeed = 20;

	//weapon socket properties

	weaponSocket = "rWeaponSocket";


	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));

	audioComponent->SetupAttachment(RootComponent);
	

	
}

void ASCharacter::attachWeapon()
{
	if(heldWeaponClass)
	{
		FActorSpawnParameters spawnParameters;
		spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParameters.Owner = this;
		heldWeapon = GetWorld()->SpawnActor<ASWeapon>(heldWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, spawnParameters);
		if(heldWeapon)
		{
			heldWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, weaponSocket);
		}
	}
}

void ASCharacter::startFire()
{
	if(heldWeapon)
	{
		heldWeapon->startFire();
	}
}

void ASCharacter::stopFire()
{
	if(heldWeapon)
	{
		heldWeapon->stopFire();
	}
}

void ASCharacter::serverAttachWeapon()
{
	if (Role == ROLE_Authority)//if the one who executes this is a server...
	{
		attachWeapon();
	}
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();

	serverAttachWeapon();
	healthComp->onHealthChanged.AddDynamic(this, &ASCharacter::onHealthChanged);
}

void ASCharacter::beginZoom()
{
	targetFOV = zoomFOV;
}

void ASCharacter::endZoom()
{
	targetFOV = defaultFOV;
}

bool ASCharacter::isHoldingAWeapon()
{
	if(heldWeapon)
	{
		return true;
	}
	return false;
}

void ASCharacter::replaceHeldWeapon(ASWeapon* newWeapon)
{
	if(isHoldingAWeapon())
	{
		if(newWeapon->GetClass() == heldWeapon->GetClass())
		{
			int restockAmmo = newWeapon->magAmmo() + newWeapon->backupAmmo();
			heldWeapon->addAmmo(restockAmmo);
			return;
		}
		ASWeapon* oldWeapon = heldWeapon;
		heldWeapon = nullptr;//has to be this way to avoid accessing of the variable when is being destroyed.
		oldWeapon->Destroy();
	}
	heldWeaponClass = newWeapon->GetClass();
	serverAttachWeapon();
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(targetFOV != camera->FieldOfView)//someone pressed or released the zoom binding
	{
		float nextFOV = FMath::FInterpTo(camera->FieldOfView, targetFOV, DeltaTime, fovTransitionSpeed);
		camera->SetFieldOfView(nextFOV);
	}
	if(audioComponent->Sound && !GetMovementComponent()->IsFalling())
	{
		emitWalkingSound();
	}
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

	//character jump binding
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::jump);

	//character zoom binding
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &ASCharacter::beginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &ASCharacter::endZoom);

	//fire weapon binding
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASCharacter::startFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASCharacter::stopFire);

	//weapon reload binding
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ASCharacter::reload);
}

FVector ASCharacter::GetPawnViewLocation() const
{
	if(camera)
	{
		return camera->GetComponentLocation();
	}
	return Super::GetPawnViewLocation();
}

void ASCharacter::onHealthChanged(USHealthComponent* trigger, float health, float healthDelta,
									const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if(health <= 0 && !bHasDied)
	{
		//die motherfucker
		bHasDied = true;
		//we have to stop movement immediately
		GetMovementComponent()->StopMovementImmediately();
		//we have to stop interacting with collisions
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//playDeathAnimation

		//leave the character's body
		DetachFromControllerPendingDestroy();
		//destroy the body
		stopFire();
		SetLifeSpan(5.0f);
	}
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

void ASCharacter::jump()
{
	Jump();
}

void ASCharacter::reload()
{
	if(isHoldingAWeapon())
	{
		heldWeapon->reload();
	}
}

void ASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASCharacter, heldWeapon);
	DOREPLIFETIME(ASCharacter, bHasDied);
}
