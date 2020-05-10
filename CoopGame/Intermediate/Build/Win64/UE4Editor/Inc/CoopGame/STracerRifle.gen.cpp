// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/STracerRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerRifle() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerRifle_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerRifle();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerSingle();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASTracerRifle::StaticRegisterNativesASTracerRifle()
	{
	}
	UClass* Z_Construct_UClass_ASTracerRifle_NoRegister()
	{
		return ASTracerRifle::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTracerSingle,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STracerRifle.h" },
		{ "ModuleRelativePath", "Public/STracerRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTracerRifle_Statics::ClassParams = {
		&ASTracerRifle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASTracerRifle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTracerRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTracerRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTracerRifle, 1429777673);
	template<> COOPGAME_API UClass* StaticClass<ASTracerRifle>()
	{
		return ASTracerRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTracerRifle(Z_Construct_UClass_ASTracerRifle, &ASTracerRifle::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTracerRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
