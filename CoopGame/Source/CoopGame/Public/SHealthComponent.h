// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHealthComponent.generated.h"


//this is the onHealthChanged event
DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature,/*name of the event*/
												USHealthComponent*,/*type of who trigger the event*/
												trigger,/*name of the trigger*/
												float,/*type of variable given*/
												health,/*name of the variable given*/
												float,/*type of variable given*/
												healthDelta,
												const class UDamageType*,
												DamageType,
												class AController*,
													InstigatedBy,
													AActor*,
													DamageCauser);

UCLASS( ClassGroup=(COOP), meta=(BlueprintSpawnableComponent) )
class COOPGAME_API USHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHealthComponent();
	void serverAddDamageToHandle();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
	uint8 teamNumber;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
		bool bFriendlyFireEnabled;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="HealthComponent")
		float maxHealth;

	UPROPERTY(ReplicatedUsing = currentHealthReplication, VisibleAnywhere, BlueprintReadOnly, Category = "HealthComponent")
		float currentHealth;

	UFUNCTION()
		void currentHealthReplication(float oldHealth);//when currentHealth is replicated, the current value (before being changed) is sent as parameter, inside oldHealth.

	UFUNCTION()//it's an event handler
		void damageTakerHandle(AActor* DamagedActor,
								float Damage,
								const class UDamageType* DamageType,
								class AController* InstigatedBy,
								AActor* DamageCauser);

	bool isDead;
	
public:
	UPROPERTY(BlueprintAssignable, Category = "Events")
		FOnHealthChangedSignature onHealthChanged;

	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
		void heal(float healingAmount);

	float getCurrentHealth() { return currentHealth; }

	UFUNCTION(BlueprintCallable, BlueprintPure ,Category = "Player")
		bool isFriendly(AActor* aTeamMember, AActor* anotherTeamMember);
};
