// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGrenadeProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGrenadeProjectile() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeProjectile_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGrenadeProjectile();
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASGrenadeProjectile::StaticRegisterNativesASGrenadeProjectile()
	{
	}
	UClass* Z_Construct_UClass_ASGrenadeProjectile_NoRegister()
	{
		return ASGrenadeProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASGrenadeProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionCountdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionCountdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGrenadeProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGrenadeProjectile.h" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "Public/SGrenadeProjectile.h" },
		{ "ToolTip", "secure way to expose it" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown = { "explosionCountdown", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGrenadeProjectile, explosionCountdown), METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGrenadeProjectile_Statics::NewProp_explosionCountdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGrenadeProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGrenadeProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGrenadeProjectile_Statics::ClassParams = {
		&ASGrenadeProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASGrenadeProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGrenadeProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGrenadeProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGrenadeProjectile, 1419872840);
	template<> COOPGAME_API UClass* StaticClass<ASGrenadeProjectile>()
	{
		return ASGrenadeProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGrenadeProjectile(Z_Construct_UClass_ASGrenadeProjectile, &ASGrenadeProjectile::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGrenadeProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGrenadeProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
