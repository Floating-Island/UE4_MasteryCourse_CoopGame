// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeProjectile.h"

#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"



ASGrenadeProjectile::ASGrenadeProjectile()
{
	explosionCountdown = 1.0f;
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

void ASGrenadeProjectile::provokeRadialDamage(const FHitResult& hit)
{
	//process damage
	AActor* hitActor = hit.GetActor();

	float damageRadius = 200.0f;
	TArray<AActor*> ignoredActors = TArray<AActor*>();
	UGameplayStatics::ApplyRadialDamage(this, damage, this->GetActorLocation(), damageRadius, damageType,
		ignoredActors, this, this->GetInstigatorController(), true, ECC_Visibility);

	if (hitImpactEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitImpactEffect, this->GetActorLocation(), this->GetActorRotation());
		//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
	}
}

void ASGrenadeProjectile::generateExplosion()
{
	FHitResult hit;
	provokeRadialDamage(hit);
	Destroy();
}

//void ASProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//                         FVector NormalImpulse, const FHitResult& hit)
//{
//	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
//	{
//		provokeRadialDamage(hit);
//	}
//	MakeNoise(1.0f, Instigator);//instigator is the one responsible for damage deal. In this case is used to make noise.
//	//Instigator has a UNoiseEmitterComponent so it's nice to use.
//	Destroy();//only the server has the authority to destroy it.
//}