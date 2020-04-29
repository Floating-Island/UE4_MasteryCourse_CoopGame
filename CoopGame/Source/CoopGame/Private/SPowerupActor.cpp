// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerupActor.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
ASPowerupActor::ASPowerupActor()
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	RootComponent = mesh;

	pointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light Component"));
	pointLight->SetupAttachment(mesh);

	rotationComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotating Movement Component"));
	rotationComponent->SetUpdatedComponent(RootComponent);
	
	
	powerupDuration = 0;
	ticksQuantity = 0;
	processedTicks = 0;

	bIsActivated = false;
	
	SetReplicates(true);
}

void ASPowerupActor::activatePowerup()
{
	onActivated();

	bIsActivated = true;
	onPowerUpActivation();//we are always server here, so it has to be called.

	if (powerupDuration > 0)
	{
		GetWorldTimerManager().SetTimer(powerupTickTimer, this, &ASPowerupActor::onTickPowerup, powerupDuration, true);
	}
	else
	{
		onTickPowerup();
	}
}

void ASPowerupActor::onExpired()
{
	Destroy();
}

void ASPowerupActor::onTickPowerup()//if it's blueprint implementable, all methods inside it have to be UFUNCTION
{
	processedTicks++;

	powerupTicking();
	
	if(processedTicks >= ticksQuantity)
	{
		onExpired();

		bIsActivated = true;
		onPowerUpActivation();//we are always server here, so it has to be called.

		GetWorldTimerManager().ClearTimer(powerupTickTimer);
	}
}

void ASPowerupActor::onPowerUpActivation()
{
	onStateChanged(bIsActivated);
}

void ASPowerupActor::onStateChanged(bool bIsStateActive)
{
	mesh->SetVisibility(!bIsStateActive, true );//sets visibility to state activity and propagates to children.
	mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
}

void ASPowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPowerupActor, bIsActivated);
}