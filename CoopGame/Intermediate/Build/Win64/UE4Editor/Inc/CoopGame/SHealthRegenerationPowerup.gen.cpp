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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healingAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healingAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::NewProp_healingAmount_MetaData[] = {
		{ "Category", "Powerup Effect" },
		{ "ModuleRelativePath", "Public/SHealthRegenerationPowerup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::NewProp_healingAmount = { "healingAmount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHealthRegenerationPowerup, healingAmount), METADATA_PARAMS(Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::NewProp_healingAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::NewProp_healingAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::NewProp_healingAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHealthRegenerationPowerup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::ClassParams = {
		&ASHealthRegenerationPowerup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASHealthRegenerationPowerup_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ASHealthRegenerationPowerup, 2040310846);
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
