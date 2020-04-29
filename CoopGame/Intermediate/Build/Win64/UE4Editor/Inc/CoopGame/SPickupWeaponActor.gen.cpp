// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SPickupWeaponActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupWeaponActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupWeaponActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupWeaponActor();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASPickupWeaponActor::StaticRegisterNativesASPickupWeaponActor()
	{
	}
	UClass* Z_Construct_UClass_ASPickupWeaponActor_NoRegister()
	{
		return ASPickupWeaponActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPickupWeaponActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPickupWeaponActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPickupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPickupWeaponActor.h" },
		{ "ModuleRelativePath", "Public/SPickupWeaponActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPickupWeaponActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPickupWeaponActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPickupWeaponActor_Statics::ClassParams = {
		&ASPickupWeaponActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASPickupWeaponActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASPickupWeaponActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPickupWeaponActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPickupWeaponActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPickupWeaponActor, 1866718831);
	template<> COOPGAME_API UClass* StaticClass<ASPickupWeaponActor>()
	{
		return ASPickupWeaponActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupWeaponActor(Z_Construct_UClass_ASPickupWeaponActor, &ASPickupWeaponActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPickupWeaponActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupWeaponActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
