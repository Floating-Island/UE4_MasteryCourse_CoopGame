// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRifle() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASRifle_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASRifle();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void ASRifle::StaticRegisterNativesASRifle()
	{
	}
	UClass* Z_Construct_UClass_ASRifle_NoRegister()
	{
		return ASRifle::StaticClass();
	}
	struct Z_Construct_UClass_ASRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tracerTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitImpactEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitImpactEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SRifle.h" },
		{ "ModuleRelativePath", "Public/SRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRifle_Statics::NewProp_tracerEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SRifle.h" },
		{ "ToolTip", "secure way to expose it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRifle_Statics::NewProp_tracerEffect = { "tracerEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRifle, tracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRifle_Statics::NewProp_tracerEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRifle_Statics::NewProp_tracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRifle_Statics::NewProp_tracerTarget_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SRifle.h" },
		{ "ToolTip", "no need to edit it" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASRifle_Statics::NewProp_tracerTarget = { "tracerTarget", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRifle, tracerTarget), METADATA_PARAMS(Z_Construct_UClass_ASRifle_Statics::NewProp_tracerTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRifle_Statics::NewProp_tracerTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRifle_Statics::NewProp_hitImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/SRifle.h" },
		{ "ToolTip", "secure way to expose it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRifle_Statics::NewProp_hitImpactEffect = { "hitImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASRifle, hitImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRifle_Statics::NewProp_hitImpactEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASRifle_Statics::NewProp_hitImpactEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRifle_Statics::NewProp_tracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRifle_Statics::NewProp_tracerTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRifle_Statics::NewProp_hitImpactEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASRifle_Statics::ClassParams = {
		&ASRifle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASRifle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASRifle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASRifle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASRifle, 1596267871);
	template<> COOPGAME_API UClass* StaticClass<ASRifle>()
	{
		return ASRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASRifle(Z_Construct_UClass_ASRifle, &ASRifle::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
