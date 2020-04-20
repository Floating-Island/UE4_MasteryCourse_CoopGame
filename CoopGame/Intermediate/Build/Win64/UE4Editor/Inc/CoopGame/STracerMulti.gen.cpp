// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/STracerMulti.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerMulti() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerMulti_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerMulti();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASTracerMulti::StaticRegisterNativesASTracerMulti()
	{
	}
	UClass* Z_Construct_UClass_ASTracerMulti_NoRegister()
	{
		return ASTracerMulti::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerMulti_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spreadConeHalfAngleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spreadConeHalfAngleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_shots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerMulti_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTracerWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerMulti_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STracerMulti.h" },
		{ "ModuleRelativePath", "Public/STracerMulti.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerMulti_Statics::NewProp_spreadConeHalfAngleRadius_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMax", "1.5708" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/STracerMulti.h" },
		{ "ToolTip", "90 degrees = 1.5708 radians" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerMulti_Statics::NewProp_spreadConeHalfAngleRadius = { "spreadConeHalfAngleRadius", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerMulti, spreadConeHalfAngleRadius), METADATA_PARAMS(Z_Construct_UClass_ASTracerMulti_Statics::NewProp_spreadConeHalfAngleRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerMulti_Statics::NewProp_spreadConeHalfAngleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerMulti_Statics::NewProp_shots_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/STracerMulti.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASTracerMulti_Statics::NewProp_shots = { "shots", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerMulti, shots), METADATA_PARAMS(Z_Construct_UClass_ASTracerMulti_Statics::NewProp_shots_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerMulti_Statics::NewProp_shots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTracerMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerMulti_Statics::NewProp_spreadConeHalfAngleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerMulti_Statics::NewProp_shots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerMulti_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerMulti>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTracerMulti_Statics::ClassParams = {
		&ASTracerMulti::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTracerMulti_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASTracerMulti_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASTracerMulti_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTracerMulti_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerMulti()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTracerMulti_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTracerMulti, 397754771);
	template<> COOPGAME_API UClass* StaticClass<ASTracerMulti>()
	{
		return ASTracerMulti::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTracerMulti(Z_Construct_UClass_ASTracerMulti, &ASTracerMulti::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTracerMulti"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerMulti);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
