// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthComponent.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	health = 100;
	currentHealth = health;
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* componentOwner = GetOwner();
	if(componentOwner)
	{
		componentOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::damageTakerHandle);
	}
	
}

void USHealthComponent::damageTakerHandle(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
	if(Damage <= 0.0f)
	{
		return;
	}

	currentHealth = FMath::Clamp(currentHealth - Damage, 0.0f, health);//update health clamped.

	UE_LOG(LogTemp, Log, TEXT("taken %s damage. Current health: %s"), *FString::SanitizeFloat(Damage), *FString::SanitizeFloat(currentHealth));

	onHealthChanged.Broadcast(this, currentHealth, Damage, DamageType, InstigatedBy, DamageCauser); 
}

