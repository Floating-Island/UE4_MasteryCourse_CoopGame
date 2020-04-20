// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeLauncher.h"

void ASGrenadeLauncher::startFire()
{
	
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon
	
	if (weaponOwner)
	{
		if (hasAmmoInMagazine())
		{
			fireAtRate<ASGrenadeLauncher, &ASGrenadeLauncher::fire>(this);
		}
		else
		{
			reload();
		}
	}
}

void ASGrenadeLauncher::fire()
{
	FireSingleProjectile();
	reduceMagazineAmmo();
}
