// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthComponent.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	maxHealth = 100;
	SetIsReplicated(true);
}


void USHealthComponent::serverAddDamageToHandle()
{
	AActor* componentOwner = GetOwner();
	if(componentOwner && componentOwner->Role.GetValue() == ROLE_Authority)
	{
		componentOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::damageTakerHandle);
	}
}

// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	currentHealth = maxHealth;
	serverAddDamageToHandle();
	
}

void USHealthComponent::damageTakerHandle(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
	if(Damage <= 0.0f)
	{
		return;
	}

	currentHealth = FMath::Clamp(currentHealth - Damage, 0.0f, maxHealth);//update health clamped.

	UE_LOG(LogTemp, Log, TEXT("taken %s damage. Current health: %s"), *FString::SanitizeFloat(Damage), *FString::SanitizeFloat(currentHealth));

	onHealthChanged.Broadcast(this, currentHealth, Damage, DamageType, InstigatedBy, DamageCauser); 
}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComponent, currentHealth);
}