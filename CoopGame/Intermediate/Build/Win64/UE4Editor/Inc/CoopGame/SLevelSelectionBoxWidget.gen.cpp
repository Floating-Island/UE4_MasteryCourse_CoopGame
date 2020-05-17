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
	COOPGAME_API UFunction* Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames();
// End Cross Module References
	void USLevelSelectionBoxWidget::StaticRegisterNativesUSLevelSelectionBoxWidget()
	{
		UClass* Class = USLevelSelectionBoxWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllMapNames", &USLevelSelectionBoxWidget::execGetAllMapNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics
	{
		struct SLevelSelectionBoxWidget_eventGetAllMapNames_Parms
		{
			FString levelsFolder;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_levelsFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SLevelSelectionBoxWidget_eventGetAllMapNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_levelsFolder = { "levelsFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SLevelSelectionBoxWidget_eventGetAllMapNames_Parms, levelsFolder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::NewProp_levelsFolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/SLevelSelectionBoxWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USLevelSelectionBoxWidget, nullptr, "GetAllMapNames", sizeof(SLevelSelectionBoxWidget_eventGetAllMapNames_Parms), Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USLevelSelectionBoxWidget_NoRegister()
	{
		return USLevelSelectionBoxWidget::StaticClass();
	}
	struct Z_Construct_UClass_USLevelSelectionBoxWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SelectedLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USLevelSelectionBoxWidget_GetAllMapNames, "GetAllMapNames" }, // 2454596207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLevelSelectionBoxWidget.h" },
		{ "ModuleRelativePath", "Public/SLevelSelectionBoxWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::NewProp_SelectedLevel_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/SLevelSelectionBoxWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::NewProp_SelectedLevel = { "SelectedLevel", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USLevelSelectionBoxWidget, SelectedLevel), METADATA_PARAMS(Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::NewProp_SelectedLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::NewProp_SelectedLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::NewProp_SelectedLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USLevelSelectionBoxWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::ClassParams = {
		&USLevelSelectionBoxWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USLevelSelectionBoxWidget_Statics::PropPointers),
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
	IMPLEMENT_CLASS(USLevelSelectionBoxWidget, 4064156348);
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
