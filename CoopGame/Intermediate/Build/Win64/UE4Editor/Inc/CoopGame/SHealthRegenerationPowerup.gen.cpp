// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SHealthRegenerationPowerup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHealthRegenerationPowerup() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASHealthRegenerationPowerup_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASHealthRegenerationPowerup();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASHealthRegenerationPowerup::StaticRegisterNativesASHealthRegenerationPowerup()
	{
	}
	UClass* Z_Construct_UClass_ASHealthRegenerationPowerup_NoRegister()
	{
		return ASHealthRegenerationPowerup::StaticClass();
	}
	struct Z_Construct_UClass_ASHealthRegenerationPowerup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASPowerupActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SHealthRegenerationPowerup.h" },
		{ "ModuleRelativePath", "Public/SHealthRegenerationPowerup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHealthRegenerationPowerup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::ClassParams = {
		&ASHealthRegenerationPowerup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHealthRegenerationPowerup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHealthRegenerationPowerup, 3775190885);
	template<> COOPGAME_API UClass* StaticClass<ASHealthRegenerationPowerup>()
	{
		return ASHealthRegenerationPowerup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHealthRegenerationPowerup(Z_Construct_UClass_ASHealthRegenerationPowerup, &ASHealthRegenerationPowerup::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASHealthRegenerationPowerup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHealthRegenerationPowerup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
