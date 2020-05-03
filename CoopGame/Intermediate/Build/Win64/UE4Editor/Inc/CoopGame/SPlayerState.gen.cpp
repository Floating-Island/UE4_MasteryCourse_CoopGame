// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerState() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPlayerState_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPlayerState_addScore();
// End Cross Module References
	void ASPlayerState::StaticRegisterNativesASPlayerState()
	{
		UClass* Class = ASPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addScore", &ASPlayerState::execaddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerState_addScore_Statics
	{
		struct SPlayerState_eventaddScore_Parms
		{
			float scoreToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scoreToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerState_addScore_Statics::NewProp_scoreToAdd = { "scoreToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventaddScore_Parms, scoreToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_addScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_addScore_Statics::NewProp_scoreToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_addScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_addScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "addScore", sizeof(SPlayerState_eventaddScore_Parms), Z_Construct_UFunction_ASPlayerState_addScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_addScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_addScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_addScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_addScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_addScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerState_NoRegister()
	{
		return ASPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerState_addScore, "addScore" }, // 2975354810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SPlayerState.h" },
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerState_Statics::ClassParams = {
		&ASPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerState, 847533265);
	template<> COOPGAME_API UClass* StaticClass<ASPlayerState>()
	{
		return ASPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerState(Z_Construct_UClass_ASPlayerState, &ASPlayerState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
