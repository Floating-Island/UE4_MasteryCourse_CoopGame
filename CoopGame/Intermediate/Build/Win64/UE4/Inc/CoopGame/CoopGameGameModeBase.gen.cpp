// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/CoopGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopGameGameModeBase() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ACoopGameGameModeBase_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ACoopGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ACoopGameGameModeBase::StaticRegisterNativesACoopGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACoopGameGameModeBase_NoRegister()
	{
		return ACoopGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACoopGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoopGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CoopGameGameModeBase.h" },
		{ "ModuleRelativePath", "CoopGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoopGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoopGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoopGameGameModeBase_Statics::ClassParams = {
		&ACoopGameGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACoopGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoopGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoopGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoopGameGameModeBase, 499931138);
	template<> COOPGAME_API UClass* StaticClass<ACoopGameGameModeBase>()
	{
		return ACoopGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoopGameGameModeBase(Z_Construct_UClass_ACoopGameGameModeBase, &ACoopGameGameModeBase::StaticClass, TEXT("/Script/CoopGame"), TEXT("ACoopGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
