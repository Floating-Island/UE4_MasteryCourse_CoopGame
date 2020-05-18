// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGrenadeLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGrenadeLauncher() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeLauncher_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeLauncher();
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectileWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASGrenadeLauncher::StaticRegisterNativesASGrenadeLauncher()
	{
	}
	UClass* Z_Construct_UClass_ASGrenadeLauncher_NoRegister()
	{
		return ASGrenadeLauncher::StaticClass();
	}
	struct Z_Construct_UClass_ASGrenadeLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGrenadeLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASProjectileWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGrenadeLauncher.h" },
		{ "ModuleRelativePath", "Public/SGrenadeLauncher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGrenadeLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGrenadeLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGrenadeLauncher_Statics::ClassParams = {
		&ASGrenadeLauncher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASGrenadeLauncher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGrenadeLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGrenadeLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGrenadeLauncher, 4218196477);
	template<> COOPGAME_API UClass* StaticClass<ASGrenadeLauncher>()
	{
		return ASGrenadeLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGrenadeLauncher(Z_Construct_UClass_ASGrenadeLauncher, &ASGrenadeLauncher::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGrenadeLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGrenadeLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
