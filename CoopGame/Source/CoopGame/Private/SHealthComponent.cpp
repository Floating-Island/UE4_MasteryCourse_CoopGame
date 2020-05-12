// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"

#include "SGameMode.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	maxHealth = 100;
	isDead = false;
	SetIsReplicated(true);

	teamNumber = 255;
	bFriendlyFireEnabled = false;
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

void USHealthComponent::currentHealthReplication(float oldHealth)
{
	float damage = oldHealth - currentHealth;

	onHealthChanged.Broadcast(this, currentHealth, damage, nullptr, nullptr, nullptr);
}

void USHealthComponent::damageTakerHandle(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
                                          AController* InstigatedBy, AActor* DamageCauser)
{
	if(Damage <= 0.0f || isDead)
	{
		return;
	}

	if (DamageCauser != DamagedActor && isFriendly(DamageCauser, DamagedActor) && !bFriendlyFireEnabled)
	{
		return;	
	}

	currentHealth = FMath::Clamp(currentHealth - Damage, 0.0f, maxHealth);//update health clamped.

	UE_LOG(LogTemp, Log, TEXT("taken %s damage. Current health: %s"), *FString::SanitizeFloat(Damage), *FString::SanitizeFloat(currentHealth));

	onHealthChanged.Broadcast(this, currentHealth, Damage, DamageType, InstigatedBy, DamageCauser);

	isDead = currentHealth <= 0.0f;
	
	ASGameMode* gameMode = Cast<ASGameMode,AGameModeBase>(GetWorld()->GetAuthGameMode());
	if(gameMode && isDead)
	{
		gameMode->onActorKilled.Broadcast(DamagedActor, DamageCauser, InstigatedBy);
	}
}

void USHealthComponent::heal(float healingAmount)
{
	if(healingAmount <= 0.0f || currentHealth <= 0.0f)
	{
		return;
	}

	currentHealth = FMath::Clamp(currentHealth + healingAmount, 0.0f, maxHealth);

	UE_LOG(LogTemp, Log, TEXT("Healed, current health: %s. healing amount applied: %s"), *FString::SanitizeFloat(currentHealth), *FString::SanitizeFloat(healingAmount));

	onHealthChanged.Broadcast(this, currentHealth, -healingAmount, nullptr, nullptr, nullptr);
}

bool USHealthComponent::isFriendly(AActor* aTeamMember, AActor* anotherTeamMember)
{
	
	if(aTeamMember == nullptr || anotherTeamMember == nullptr)
	{
		return true;
	}
	
	USHealthComponent* aHealthComponent = Cast<USHealthComponent, UActorComponent>(aTeamMember->GetComponentByClass(USHealthComponent::StaticClass()));
	USHealthComponent* anotherHealthComponent = Cast<USHealthComponent, UActorComponent>(anotherTeamMember->GetComponentByClass(USHealthComponent::StaticClass()));

	if(aHealthComponent == nullptr || anotherHealthComponent == nullptr)
	{
		return true;
	}
	
	return aHealthComponent->teamNumber == anotherHealthComponent->teamNumber;
}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComponent, currentHealth);
}
