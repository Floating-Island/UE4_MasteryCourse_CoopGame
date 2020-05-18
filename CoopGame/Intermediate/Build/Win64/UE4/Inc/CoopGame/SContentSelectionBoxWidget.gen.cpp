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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnyButtonSelected_MetaData[];
#endif
		static void NewProp_bIsAnyButtonSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnyButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/SContentSelectionBoxWidget.h" },
	};
#endif
	void Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected_SetBit(void* Obj)
	{
		((USContentSelectionBoxWidget*)Obj)->bIsAnyButtonSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected = { "bIsAnyButtonSelected", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USContentSelectionBoxWidget), &Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/SContentSelectionBoxWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USContentSelectionBoxWidget, SelectedButton), METADATA_PARAMS(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_SelectedButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USContentSelectionBoxWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_bIsAnyButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USContentSelectionBoxWidget_Statics::NewProp_SelectedButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USContentSelectionBoxWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USContentSelectionBoxWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USContentSelectionBoxWidget_Statics::ClassParams = {
		&USContentSelectionBoxWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USContentSelectionBoxWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USContentSelectionBoxWidget_Statics::PropPointers),
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
	IMPLEMENT_CLASS(USContentSelectionBoxWidget, 3578668131);
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
