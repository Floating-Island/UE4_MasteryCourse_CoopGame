// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SContentSelectionBoxWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSContentSelectionBoxWidget() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_USContentSelectionBoxWidget_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USContentSelectionBoxWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	void USContentSelectionBoxWidget::StaticRegisterNativesUSContentSelectionBoxWidget()
	{
	}
	UClass* Z_Construct_UClass_USContentSelectionBoxWidget_NoRegister()
	{
		return USContentSelectionBoxWidget::StaticClass();
	}
	struct Z_Construct_UClass_USContentSelectionBoxWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USContentSelectionBoxWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USContentSelectionBoxWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SContentSelectionBoxWidget.h" },
		{ "ModuleRelativePath", "Public/SContentSelectionBoxWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USContentSelectionBoxWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USContentSelectionBoxWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USContentSelectionBoxWidget_Statics::ClassParams = {
		&USContentSelectionBoxWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USContentSelectionBoxWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USContentSelectionBoxWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USContentSelectionBoxWidget, 1005135357);
	template<> COOPGAME_API UClass* StaticClass<USContentSelectionBoxWidget>()
	{
		return USContentSelectionBoxWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USContentSelectionBoxWidget(Z_Construct_UClass_USContentSelectionBoxWidget, &USContentSelectionBoxWidget::StaticClass, TEXT("/Script/CoopGame"), TEXT("USContentSelectionBoxWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USContentSelectionBoxWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
