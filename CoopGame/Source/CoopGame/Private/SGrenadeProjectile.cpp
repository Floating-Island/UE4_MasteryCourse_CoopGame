// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeProjectile.h"

#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"



ASGrenadeProjectile::ASGrenadeProjectile()
{
	explosionCountdown = 1.0f;
	explosionDamage = 80.0f;
	damageRadius = 200.0f;
	bIsExploding = false;
}

void ASGrenadeProjectile::BeginPlay()
{
	Super::BeginPlay();
	startExplosionCountdown();
}

void ASGrenadeProjectile::startExplosionCountdown()
{
	GetWorldTimerManager().ClearTimer(explodeTimer);
	GetWorldTimerManager().SetTimer(explodeTimer, this, &ASGrenadeProjectile::generateExplosion, explosionCountdown, false);
}

void ASGrenadeProjectile::serverImitateExplosionReplication()
{
	explosionEffects();
}

void ASGrenadeProjectile::explosionEffects()
{
	if (hitEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitEffect, this->GetActorLocation(), this->GetActorRotation());
		//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
	}
}

void ASGrenadeProjectile::provokeRadialDamage(const FHitResult& hit)
{
	//process baseDamage
	AActor* hitActor = hit.GetActor();

	TArray<AActor*> ignoredActors = TArray<AActor*>();

	UGameplayStatics::ApplyRadialDamage(this, explosionDamage, this->GetActorLocation(), damageRadius, damageType,
		ignoredActors, this, this->GetInstigatorController(), true, ECC_Visibility);

	bIsExploding = true;
	explosionEffects();
	SetLifeSpan(0.3f);
}

void ASGrenadeProjectile::serverVanish()
{
	Destroy();
}

void ASGrenadeProjectile::generateExplosion()
{
	FHitResult hit;
	provokeRadialDamage(hit);
}

//void ASProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//                         FVector NormalImpulse, const FHitResult& hit)
//{
//	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
//	{
//		provokeRadialDamage(hit);
//	}
//	MakeNoise(1.0f, Instigator);//instigator is the one responsible for baseDamage deal. In this case is used to make noise.
//	//Instigator has a UNoiseEmitterComponent so it's nice to use.
//	Destroy();//only the server has the authority to destroy it.
//}


void ASGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ASGrenadeProjectile, bIsExploding, COND_SkipOwner);
}