// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_firingEffects();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASWeapon_serverFires();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASWeapon_serverFires = FName(TEXT("serverFires"));
	void ASWeapon::serverFires()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_serverFires),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "firingEffects", &ASWeapon::execfiringEffects },
			{ "serverFires", &ASWeapon::execserverFires },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWeapon_firingEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_firingEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_firingEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "firingEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_firingEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_firingEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_firingEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_firingEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_serverFires_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_serverFires_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "networking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_serverFires_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "serverFires", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_serverFires_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_serverFires_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_serverFires()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_serverFires_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastFireTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lastFireTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHitImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultHitImpactEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_muzzleSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recoilCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recoilCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backupAmmoCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_backupAmmoCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_availableBackupAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_availableBackupAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoInMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoInMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magazineCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magazineCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bonusDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeOfDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_typeOfDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWeapon_firingEffects, "firingEffects" }, // 3404914412
		{ &Z_Construct_UFunction_ASWeapon_serverFires, "serverFires" }, // 127827640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SWeapon.h" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_fireRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "Bullets per minute" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, fireRate), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_fireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_fireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_lastFireTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_lastFireTime = { "lastFireTime", "firingEffects", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, lastFireTime), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_lastFireTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_lastFireTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect = { "FleshImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultHitImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "to map surface types" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultHitImpactEffect = { "DefaultHitImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, DefaultHitImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultHitImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultHitImpactEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "secure way to expose it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleEffect = { "muzzleEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, muzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleSocket_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "no need to edit it" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleSocket = { "muzzleSocket", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, muzzleSocket), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_recoilCameraShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
		{ "ToolTip", "not everything has to be exposed to blueprints" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_recoilCameraShake = { "recoilCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, recoilCameraShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_recoilCameraShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_recoilCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_backupAmmoCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_backupAmmoCapacity = { "backupAmmoCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, backupAmmoCapacity), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_backupAmmoCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_backupAmmoCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_availableBackupAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_availableBackupAmmo = { "availableBackupAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, availableBackupAmmo), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_availableBackupAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_availableBackupAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_ammoInMagazine_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_ammoInMagazine = { "ammoInMagazine", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, ammoInMagazine), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_ammoInMagazine_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_ammoInMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_magazineCapacity_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_magazineCapacity = { "magazineCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, magazineCapacity), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_magazineCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_magazineCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_bonusDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_bonusDamage = { "bonusDamage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, bonusDamage), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_bonusDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_bonusDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_baseDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_baseDamage = { "baseDamage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, baseDamage), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_baseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_baseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_typeOfDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_typeOfDamage = { "typeOfDamage", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, typeOfDamage), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_typeOfDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_typeOfDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_fireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_lastFireTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FleshImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_DefaultHitImpactEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_muzzleSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_recoilCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_backupAmmoCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_availableBackupAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_ammoInMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_magazineCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_bonusDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_baseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_typeOfDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeapon_Statics::ClassParams = {
		&ASWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeapon, 1904065232);
	template<> COOPGAME_API UClass* StaticClass<ASWeapon>()
	{
		return ASWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
