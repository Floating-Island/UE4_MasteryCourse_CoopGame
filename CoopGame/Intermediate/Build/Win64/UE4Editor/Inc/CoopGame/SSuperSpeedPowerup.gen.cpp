// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SSuperSpeedPowerup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSuperSpeedPowerup() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASSuperSpeedPowerup_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASSuperSpeedPowerup();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASSuperSpeedPowerup::StaticRegisterNativesASSuperSpeedPowerup()
	{
	}
	UClass* Z_Construct_UClass_ASSuperSpeedPowerup_NoRegister()
	{
		return ASSuperSpeedPowerup::StaticClass();
	}
	struct Z_Construct_UClass_ASSuperSpeedPowerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASSuperSpeedPowerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPowerupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSuperSpeedPowerup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SSuperSpeedPowerup.h" },
		{ "ModuleRelativePath", "Public/SSuperSpeedPowerup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASSuperSpeedPowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSuperSpeedPowerup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASSuperSpeedPowerup_Statics::ClassParams = {
		&ASSuperSpeedPowerup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASSuperSpeedPowerup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASSuperSpeedPowerup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASSuperSpeedPowerup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASSuperSpeedPowerup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASSuperSpeedPowerup, 2124168865);
	template<> COOPGAME_API UClass* StaticClass<ASSuperSpeedPowerup>()
	{
		return ASSuperSpeedPowerup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASSuperSpeedPowerup(Z_Construct_UClass_ASSuperSpeedPowerup, &ASSuperSpeedPowerup::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASSuperSpeedPowerup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASSuperSpeedPowerup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
