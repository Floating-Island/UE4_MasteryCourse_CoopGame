// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameState() {}
// Cross Module References
	COOPGAME_API UEnum* Z_Construct_UEnum_CoopGame_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameState_changeWaveState();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameState_waveStateChanged();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameState_waveStateReplication();
// End Cross Module References
	static UEnum* EWaveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopGame_EWaveState, Z_Construct_UPackage__Script_CoopGame(), TEXT("EWaveState"));
		}
		return Singleton;
	}
	template<> COOPGAME_API UEnum* StaticEnum<EWaveState>()
	{
		return EWaveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CoopGame"), TEXT("EWaveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash() { return 446355013U; }
	UEnum* Z_Construct_UEnum_CoopGame_EWaveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveState::preparingNextWave", (int64)EWaveState::preparingNextWave },
				{ "EWaveState::playingWave", (int64)EWaveState::playingWave },
				{ "EWaveState::waitingWaveCompletion", (int64)EWaveState::waitingWaveCompletion },
				{ "EWaveState::waveCompleted", (int64)EWaveState::waveCompleted },
				{ "EWaveState::gameOver", (int64)EWaveState::gameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopGame,
				nullptr,
				"EWaveState",
				"EWaveState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ASGameState_waveStateChanged = FName(TEXT("waveStateChanged"));
	void ASGameState::waveStateChanged(EWaveState newWaveState, EWaveState oldWaveState)
	{
		SGameState_eventwaveStateChanged_Parms Parms;
		Parms.newWaveState=newWaveState;
		Parms.oldWaveState=oldWaveState;
		ProcessEvent(FindFunctionChecked(NAME_ASGameState_waveStateChanged),&Parms);
	}
	void ASGameState::StaticRegisterNativesASGameState()
	{
		UClass* Class = ASGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeWaveState", &ASGameState::execchangeWaveState },
			{ "waveStateReplication", &ASGameState::execwaveStateReplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameState_changeWaveState_Statics
	{
		struct SGameState_eventchangeWaveState_Parms
		{
			EWaveState newState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_changeWaveState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventchangeWaveState_Parms, newState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_changeWaveState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_changeWaveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_changeWaveState_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_changeWaveState_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_changeWaveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ToolTip", "Only a server uses it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_changeWaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "changeWaveState", sizeof(SGameState_eventchangeWaveState_Parms), Z_Construct_UFunction_ASGameState_changeWaveState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_changeWaveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_changeWaveState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_changeWaveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_changeWaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_changeWaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_waveStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldWaveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldWaveState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newWaveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newWaveState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_oldWaveState = { "oldWaveState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventwaveStateChanged_Parms, oldWaveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_oldWaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_newWaveState = { "newWaveState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventwaveStateChanged_Parms, newWaveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_newWaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_oldWaveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_oldWaveState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_newWaveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::NewProp_newWaveState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "waveStateChanged", sizeof(SGameState_eventwaveStateChanged_Parms), Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_waveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_waveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_waveStateReplication_Statics
	{
		struct SGameState_eventwaveStateReplication_Parms
		{
			EWaveState oldWaveState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldWaveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldWaveState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::NewProp_oldWaveState = { "oldWaveState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventwaveStateReplication_Parms, oldWaveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::NewProp_oldWaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::NewProp_oldWaveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::NewProp_oldWaveState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "waveStateReplication", sizeof(SGameState_eventwaveStateReplication_Parms), Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_waveStateReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_waveStateReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameState_NoRegister()
	{
		return ASGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_waveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_waveState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameState_changeWaveState, "changeWaveState" }, // 40149989
		{ &Z_Construct_UFunction_ASGameState_waveStateChanged, "waveStateChanged" }, // 3735086933
		{ &Z_Construct_UFunction_ASGameState_waveStateReplication, "waveStateReplication" }, // 342918491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameState.h" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_waveState_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_waveState = { "waveState", "waveStateReplication", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, waveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_waveState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_waveState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_waveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_waveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_waveState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameState_Statics::ClassParams = {
		&ASGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameState, 3461678419);
	template<> COOPGAME_API UClass* StaticClass<ASGameState>()
	{
		return ASGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameState(Z_Construct_UClass_ASGameState, &ASGameState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
