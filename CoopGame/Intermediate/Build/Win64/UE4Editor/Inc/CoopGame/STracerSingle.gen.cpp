// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/STracerSingle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerSingle() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerSingle_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerSingle();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASTracerSingle::StaticRegisterNativesASTracerSingle()
	{
	}
	UClass* Z_Construct_UClass_ASTracerSingle_NoRegister()
	{
		return ASTracerSingle::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerSingle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bulletSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerSingle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTracerWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerSingle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STracerSingle.h" },
		{ "ModuleRelativePath", "Public/STracerSingle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerSingle_Statics::NewProp_bulletSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/STracerSingle.h" },
		{ "ToolTip", "Half angle in Degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerSingle_Statics::NewProp_bulletSpread = { "bulletSpread", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerSingle, bulletSpread), METADATA_PARAMS(Z_Construct_UClass_ASTracerSingle_Statics::NewProp_bulletSpread_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerSingle_Statics::NewProp_bulletSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTracerSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerSingle_Statics::NewProp_bulletSpread,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerSingle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerSingle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTracerSingle_Statics::ClassParams = {
		&ASTracerSingle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTracerSingle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASTracerSingle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTracerSingle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTracerSingle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerSingle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTracerSingle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTracerSingle, 152498772);
	template<> COOPGAME_API UClass* StaticClass<ASTracerSingle>()
	{
		return ASTracerSingle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTracerSingle(Z_Construct_UClass_ASTracerSingle, &ASTracerSingle::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTracerSingle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerSingle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
