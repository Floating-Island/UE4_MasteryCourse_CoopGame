// Fill out your copyright notice in the Description page of Project Settings.


#include "SGrenadeLauncher.h"

void ASGrenadeLauncher::startFire()
{
	fireAtRate<ASGrenadeLauncher, &ASGrenadeLauncher::fire>(this);
}

void ASGrenadeLauncher::fire()
{
	AActor* weaponOwner = GetOwner();//it's necessary to know who's holding the weapon

	FireSingleProjectile(weaponOwner);
}
