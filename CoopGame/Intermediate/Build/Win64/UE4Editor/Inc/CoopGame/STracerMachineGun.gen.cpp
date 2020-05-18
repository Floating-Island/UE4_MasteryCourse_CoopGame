// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/STracerMachineGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerMachineGun() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerMachineGun_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerMachineGun();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerSingle();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void ASTracerMachineGun::StaticRegisterNativesASTracerMachineGun()
	{
	}
	UClass* Z_Construct_UClass_ASTracerMachineGun_NoRegister()
	{
		return ASTracerMachineGun::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerMachineGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerMachineGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTracerSingle,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerMachineGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STracerMachineGun.h" },
		{ "ModuleRelativePath", "Public/STracerMachineGun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerMachineGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerMachineGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTracerMachineGun_Statics::ClassParams = {
		&ASTracerMachineGun::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASTracerMachineGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTracerMachineGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerMachineGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTracerMachineGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTracerMachineGun, 3792527912);
	template<> COOPGAME_API UClass* StaticClass<ASTracerMachineGun>()
	{
		return ASTracerMachineGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTracerMachineGun(Z_Construct_UClass_ASTracerMachineGun, &ASTracerMachineGun::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTracerMachineGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerMachineGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
