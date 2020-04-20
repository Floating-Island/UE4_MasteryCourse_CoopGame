// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeProjectile.h"

#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "CoopGame.h"


ASGrenadeProjectile::ASGrenadeProjectile()
{
	explosionCountdown = 1.0f;
	damageRadius = 200.0f;
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
	//process baseDamage
	AActor* hitActor = hit.GetActor();

	TArray<AActor*> ignoredActors = TArray<AActor*>();
	

	EPhysicalSurface surfaceHit = UPhysicalMaterial::DetermineSurfaceType(hit.PhysMaterial.Get());

	float actualDamage = baseDamage;
	
	if (surfaceHit == SURFACE_FLESH_VULNERABLE)
	{
		actualDamage += bonusDamage;
	}
	bool damagedApplied = false;
	damagedApplied = UGameplayStatics::ApplyRadialDamage(this, actualDamage, this->GetActorLocation(), damageRadius, damageType,
		ignoredActors, this, this->GetInstigatorController(), true, ECC_Visibility);
	
	if (DefaultHitImpactEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DefaultHitImpactEffect, this->GetActorLocation(), this->GetActorRotation());
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
//	MakeNoise(1.0f, Instigator);//instigator is the one responsible for baseDamage deal. In this case is used to make noise.
//	//Instigator has a UNoiseEmitterComponent so it's nice to use.
//	Destroy();//only the server has the authority to destroy it.
//}