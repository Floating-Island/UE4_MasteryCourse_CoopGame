// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameInstance() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_USGameInstance_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void USGameInstance::StaticRegisterNativesUSGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USGameInstance_NoRegister()
	{
		return USGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGameInstance.h" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameInstance_Statics::ClassParams = {
		&USGameInstance::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGameInstance, 3172025746);
	template<> COOPGAME_API UClass* StaticClass<USGameInstance>()
	{
		return USGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGameInstance(Z_Construct_UClass_USGameInstance, &USGameInstance::StaticClass, TEXT("/Script/CoopGame"), TEXT("USGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
