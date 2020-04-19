// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"//used to help seeing the trace
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
//#include "TimerManager.h"//call it when you need to have a fire rate
//#include "Particles/ParticleSystem.h"//used to spawn effects
//#include "Components/SkeletalMeshComponent.h" //used to get the muzzle socket location

#include "CoopGame.h"

//debug variables:
static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef ConsoleDebugWeaponDrawing(
TEXT("COOP.DebugWeapons")/*command used in console*/,
	DebugWeaponDrawing /*variable that holds the value*/,
	TEXT("Draw Debug lines for weapons") /*help information*/,
	ECVF_Cheat /*works only when cheats are enabled*/
);


// Sets default values
ASWeapon::ASWeapon()
{
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));//mesh instantiation
	RootComponent = mesh;//make mesh the root components

	muzzleSocket = "MuzzleSocket";

	physicalMaterialsMap.Add(SurfaceType_Default, &DefaultHitImpactEffect);
	physicalMaterialsMap.Add(SURFACE_FLESH_DEFAULT, &FleshImpactEffect);
	physicalMaterialsMap.Add(SURFACE_FLESH_VULNERABLE, &FleshImpactEffect);

	baseDamage = 20.0f;

	bonusDamage = 30.0f;
	fireRate = 60.0f;
}

void ASWeapon::startFire()
{
	fireAtRate<ASWeapon>(&ASWeapon::fire);
}

void ASWeapon::stopFire()
{
	GetWorldTimerManager().ClearTimer(timeBetweenShotsTimer);
}

void ASWeapon::BeginPlay()
{
	Super::BeginPlay();

	timeBetweenShots = 60 / fireRate;//in seconds
}

void ASWeapon::muzzleFireFlash()
{
	if(muzzleEffect)//only if a muzzle effect was assigned
	{
		UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
	}
}

void ASWeapon::reactAtPhysicsMaterial(FHitResult hit, EPhysicalSurface surfaceHit)
{

	UParticleSystem* selectedHitImpactEffect = *(*(physicalMaterialsMap.Find(surfaceHit)));

	if (!selectedHitImpactEffect)
	{
		selectedHitImpactEffect = DefaultHitImpactEffect;
	}

	if (selectedHitImpactEffect)//if it was assigned
	{
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), selectedHitImpactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());
		//hit.ImpactPoint is the location of the hit and ImpactNormal.Rotation() is the rotation.
	}
}

void ASWeapon::recoilShakingCamera(AActor* weaponOwnerActor)
{
	APawn* weaponOwner = Cast<APawn>(weaponOwnerActor);
	if(weaponOwner && recoilCameraShake)
	{
		APlayerController* playerController = Cast<APlayerController>(weaponOwner->GetController());
		if(playerController)
		{
			playerController->ClientPlayCameraShake(recoilCameraShake);
		}
	}
}

void ASWeapon::fire()
{
	//lastFireTime = GetWorld()->TimeSeconds; needed for weapon fireRate
}
