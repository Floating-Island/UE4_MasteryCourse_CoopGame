// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SLevelSelectionBoxWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLevelSelectionBoxWidget() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_USLevelSelectionBoxWidget_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USLevelSelectionBoxWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void USLevelSelectionBoxWidget::StaticRegisterNativesUSLevelSelectionBoxWidget()
	{
	}
	UClass* Z_Construct_UClass_USLevelSelectionBoxWidget_NoRegister()
	{
		return USLevelSelectionBoxWidget::StaticClass();
	}
	struct Z_Construct_UClass_USLevelSelectionBoxWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLevelSelectionBoxWidget.h" },
		{ "ModuleRelativePath", "Public/SLevelSelectionBoxWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USLevelSelectionBoxWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::ClassParams = {
		&USLevelSelectionBoxWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USLevelSelectionBoxWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USLevelSelectionBoxWidget, 3336519194);
	template<> COOPGAME_API UClass* StaticClass<USLevelSelectionBoxWidget>()
	{
		return USLevelSelectionBoxWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USLevelSelectionBoxWidget(Z_Construct_UClass_USLevelSelectionBoxWidget, &USLevelSelectionBoxWidget::StaticClass, TEXT("/Script/CoopGame"), TEXT("USLevelSelectionBoxWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USLevelSelectionBoxWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
