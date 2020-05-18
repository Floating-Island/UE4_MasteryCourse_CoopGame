// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"//used to help seeing the trace
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"
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

	ammoInMagazine = 15;
	magazineCapacity = 20;
	availableBackupAmmo = 30;
	backupAmmoCapacity = 100;

	SetReplicates(true);
	NetUpdateFrequency = 66.0f;
	MinNetUpdateFrequency = 33.0f;
}

void ASWeapon::BeginPlay()
{
	Super::BeginPlay();

	timeBetweenShots = 60 / fireRate;//in seconds
	limitAmmoToCapacitiesSet();
}

void ASWeapon::limitAmmoToCapacitiesSet()
{
	if(ammoInMagazine > magazineCapacity)
	{
		ammoInMagazine = magazineCapacity;
	}
	if(availableBackupAmmo > backupAmmoCapacity)
	{
		availableBackupAmmo = backupAmmoCapacity;
	}
}

void ASWeapon::startFire()
{
	fireAtRate<ASWeapon, &ASWeapon::fire>(this);
}

void ASWeapon::stopFire()
{
	GetWorldTimerManager().ClearTimer(timeBetweenShotsTimer);
}

bool ASWeapon::hasAmmoInMagazine()
{
	if(ammoInMagazine > 0)
	{
		return true;
	}
	return false;
}

void ASWeapon::reduceMagazineAmmo()
{
	if(ammoInMagazine > 0)
	{
		--ammoInMagazine;
	}
}

int ASWeapon::magAmmo()
{
	return ammoInMagazine;
}

int ASWeapon::backupAmmo()
{
	return availableBackupAmmo;
}





void ASWeapon::muzzleFireFlash()
{
	if(muzzleEffect)//only if a muzzle effect was assigned
	{
		UGameplayStatics::SpawnEmitterAttached(muzzleEffect, mesh, muzzleSocket);//emits the muzzle effect when firing the weapon
	}
}

void ASWeapon::reactAtPhysicsMaterial(FVector hitImpactPoint, EPhysicalSurface surfaceHit)
{

	UParticleSystem* selectedHitImpactEffect = *(*(physicalMaterialsMap.Find(surfaceHit)));

	if (!selectedHitImpactEffect)
	{
		selectedHitImpactEffect = DefaultHitImpactEffect;
	}

	if (selectedHitImpactEffect)//if it was assigned
	{
		FVector muzzleLocation = mesh->GetSocketLocation(muzzleSocket);
		FVector shotDirection = hitImpactPoint - muzzleLocation;
		shotDirection.Normalize();
		//spawn impact effect
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), selectedHitImpactEffect, hitImpactPoint, shotDirection.Rotation());
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

void ASWeapon::firingEffects()
{
	muzzleFireFlash();
	emitFireSound();
	AActor* weaponOwner = GetOwner();
	recoilShakingCamera(weaponOwner);
}

void ASWeapon::reload()
{
	checkIfServerReloads();

	if (availableBackupAmmo > 0 && ammoInMagazine < magazineCapacity)
	{
		//start reload animation here.
		int spaceLeftInMagazine = magazineCapacity - ammoInMagazine;
		if (spaceLeftInMagazine < availableBackupAmmo)
		{
			availableBackupAmmo -= spaceLeftInMagazine;
			ammoInMagazine += spaceLeftInMagazine;
		}
		else
		{
			ammoInMagazine += availableBackupAmmo;
			availableBackupAmmo = 0;
		}
		emitReloadSound();
	}
}

void ASWeapon::checkIfServerReloads()
{
	if (Role < ROLE_Authority)
	{
		serverReload();
	}
}




void ASWeapon::serverReload_Implementation()
{
	reload();
}

bool ASWeapon::serverReload_Validate()
{
	return true;
}

void ASWeapon::addAmmo(int ammoAmount)
{
	checkIfServerAddsAmmo(ammoAmount);
	
	int spaceLeftInBackup = backupAmmoCapacity - availableBackupAmmo;
	if (spaceLeftInBackup >= ammoAmount)
	{
		availableBackupAmmo += ammoAmount;
	}
	else
	{
		availableBackupAmmo += spaceLeftInBackup;
	}
}

void ASWeapon::checkIfServerAddsAmmo(int ammoAmount)
{
	if(Role < ROLE_Authority)
	{
		serverAddAmmo(ammoAmount);
	}
}

void ASWeapon::serverAddAmmo_Implementation(int ammoAmount)
{
	addAmmo(ammoAmount);
}

bool ASWeapon::serverAddAmmo_Validate(int ammoAmount)
{
	return true;
}

void ASWeapon::emitFireSound()
{
	if(fireSound)
	{
		UGameplayStatics::SpawnSoundAttached(fireSound, RootComponent);
	}
}

void ASWeapon::emitReloadSound()
{
	if (reloadSound)
	{
		UGameplayStatics::SpawnSoundAttached(reloadSound, RootComponent);
	}
}

void ASWeapon::emitEmptyMagazineSound()
{
	if (magazineEmptySound)
	{
		UGameplayStatics::SpawnSoundAttached(magazineEmptySound, RootComponent);
	}
}

void ASWeapon::checkIfServerIsFiring()
{
	if (Role < ROLE_Authority)
	{
		serverFires();
	}
}

void ASWeapon::serverFires_Implementation()
{
	fire();
}

bool ASWeapon::serverFires_Validate()
{
	return true;
}

void ASWeapon::fire()
{
}

void ASWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ASWeapon, lastFireTime, COND_SkipOwner);
}