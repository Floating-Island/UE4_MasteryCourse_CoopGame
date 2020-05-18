// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGrenadeProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGrenadeProjectile() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeProjectile_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeProjectile();
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGrenadeProjectile_serverVanish();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void ASGrenadeProjectile::StaticRegisterNativesASGrenadeProjectile()
	{
		UClass* Class = ASGrenadeProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "serverImitateExplosionReplication", &ASGrenadeProjectile::execserverImitateExplosionReplication },
			{ "serverVanish", &ASGrenadeProjectile::execserverVanish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGrenadeProjectile, nullptr, "serverImitateExplosionReplication", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGrenadeProjectile, nullptr, "serverVanish", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGrenadeProjectile_serverVanish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGrenadeProjectile_serverVanish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGrenadeProjectile_NoRegister()
	{
		return ASGrenadeProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASGrenadeProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExploding_MetaData[];
#endif
		static void NewProp_bIsExploding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExploding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionCountdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionCountdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGrenadeProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGrenadeProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGrenadeProjectile_serverImitateExplosionReplication, "serverImitateExplosionReplication" }, // 808127556
		{ &Z_Construct_UFunction_ASGrenadeProjectile_serverVanish, "serverVanish" }, // 1851876460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGrenadeProjectile.h" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionSound_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionSound = { "explosionSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, explosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding_SetBit(void* Obj)
	{
		((ASGrenadeProjectile*)Obj)->bIsExploding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding = { "bIsExploding", "serverImitateExplosionReplication", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASGrenadeProjectile), &Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionDamage = { "explosionDamage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, explosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageRadius_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
		{ "ToolTip", "timer for explosion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageRadius = { "damageRadius", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, damageRadius), METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown = { "explosionCountdown", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, explosionCountdown), METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_bIsExploding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_damageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGrenadeProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGrenadeProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGrenadeProjectile_Statics::ClassParams = {
		&ASGrenadeProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGrenadeProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGrenadeProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGrenadeProjectile, 2778249937);
	template<> COOPGAME_API UClass* StaticClass<ASGrenadeProjectile>()
	{
		return ASGrenadeProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGrenadeProjectile(Z_Construct_UClass_ASGrenadeProjectile, &ASGrenadeProjectile::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGrenadeProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGrenadeProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
