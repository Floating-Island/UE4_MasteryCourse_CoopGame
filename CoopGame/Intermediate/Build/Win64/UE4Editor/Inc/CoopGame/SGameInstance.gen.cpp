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
	COOPGAME_API UFunction* Z_Construct_UFunction_USGameInstance_createSession();
	COOPGAME_API UFunction* Z_Construct_UFunction_USGameInstance_findGamesSession();
	COOPGAME_API UFunction* Z_Construct_UFunction_USGameInstance_getSessionsFound();
	COOPGAME_API UFunction* Z_Construct_UFunction_USGameInstance_joinGamesSession();
	COOPGAME_API UFunction* Z_Construct_UFunction_USGameInstance_onDestroySessionComplete();
// End Cross Module References
	void USGameInstance::StaticRegisterNativesUSGameInstance()
	{
		UClass* Class = USGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "createSession", &USGameInstance::execcreateSession },
			{ "findGamesSession", &USGameInstance::execfindGamesSession },
			{ "getSessionsFound", &USGameInstance::execgetSessionsFound },
			{ "joinGamesSession", &USGameInstance::execjoinGamesSession },
			{ "onDestroySessionComplete", &USGameInstance::execonDestroySessionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGameInstance_createSession_Statics
	{
		struct SGameInstance_eventcreateSession_Parms
		{
			bool bIsLANSession;
			bool bIsPresence;
			int32 playerCapacity;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerCapacity;
		static void NewProp_bIsPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPresence;
		static void NewProp_bIsLANSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLANSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_playerCapacity = { "playerCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameInstance_eventcreateSession_Parms, playerCapacity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsPresence_SetBit(void* Obj)
	{
		((SGameInstance_eventcreateSession_Parms*)Obj)->bIsPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsPresence = { "bIsPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameInstance_eventcreateSession_Parms), &Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsLANSession_SetBit(void* Obj)
	{
		((SGameInstance_eventcreateSession_Parms*)Obj)->bIsLANSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsLANSession = { "bIsLANSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameInstance_eventcreateSession_Parms), &Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsLANSession_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameInstance_createSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_playerCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_createSession_Statics::NewProp_bIsLANSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameInstance_createSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Creation" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameInstance_createSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameInstance, nullptr, "createSession", sizeof(SGameInstance_eventcreateSession_Parms), Z_Construct_UFunction_USGameInstance_createSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_createSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameInstance_createSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_createSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameInstance_createSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameInstance_createSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameInstance_findGamesSession_Statics
	{
		struct SGameInstance_eventfindGamesSession_Parms
		{
			bool bIsLANSession;
			bool bIsPresence;
		};
		static void NewProp_bIsPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPresence;
		static void NewProp_bIsLANSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLANSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsPresence_SetBit(void* Obj)
	{
		((SGameInstance_eventfindGamesSession_Parms*)Obj)->bIsPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsPresence = { "bIsPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameInstance_eventfindGamesSession_Parms), &Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsLANSession_SetBit(void* Obj)
	{
		((SGameInstance_eventfindGamesSession_Parms*)Obj)->bIsLANSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsLANSession = { "bIsLANSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameInstance_eventfindGamesSession_Parms), &Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsLANSession_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::NewProp_bIsLANSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Search" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "Session Search" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameInstance, nullptr, "findGamesSession", sizeof(SGameInstance_eventfindGamesSession_Parms), Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameInstance_findGamesSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameInstance_findGamesSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics
	{
		struct SGameInstance_eventgetSessionsFound_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameInstance_eventgetSessionsFound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Search" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameInstance, nullptr, "getSessionsFound", sizeof(SGameInstance_eventgetSessionsFound_Parms), Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameInstance_getSessionsFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameInstance_getSessionsFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics
	{
		struct SGameInstance_eventjoinGamesSession_Parms
		{
			FString sessionID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameInstance_eventjoinGamesSession_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::NewProp_sessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Join" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "Session Join" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameInstance, nullptr, "joinGamesSession", sizeof(SGameInstance_eventjoinGamesSession_Parms), Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameInstance_joinGamesSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameInstance_joinGamesSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics
	{
		struct SGameInstance_eventonDestroySessionComplete_Parms
		{
			FName sessionName;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SGameInstance_eventonDestroySessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameInstance_eventonDestroySessionComplete_Parms), &Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameInstance_eventonDestroySessionComplete_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::NewProp_sessionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Session Destruction" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameInstance, nullptr, "onDestroySessionComplete", sizeof(SGameInstance_eventonDestroySessionComplete_Parms), Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameInstance_onDestroySessionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameInstance_onDestroySessionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USGameInstance_NoRegister()
	{
		return USGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewSessionsFound_MetaData[];
#endif
		static void NewProp_bNewSessionsFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSessionsFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pingSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pingSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchesMaxNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_searchesMaxNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameInstance_createSession, "createSession" }, // 460265724
		{ &Z_Construct_UFunction_USGameInstance_findGamesSession, "findGamesSession" }, // 1766658956
		{ &Z_Construct_UFunction_USGameInstance_getSessionsFound, "getSessionsFound" }, // 2090344677
		{ &Z_Construct_UFunction_USGameInstance_joinGamesSession, "joinGamesSession" }, // 1248792960
		{ &Z_Construct_UFunction_USGameInstance_onDestroySessionComplete, "onDestroySessionComplete" }, // 1317703632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGameInstance.h" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound_MetaData[] = {
		{ "Category", "Session Search" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound_SetBit(void* Obj)
	{
		((USGameInstance*)Obj)->bNewSessionsFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound = { "bNewSessionsFound", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USGameInstance), &Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound_MetaData, ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_pingSize_MetaData[] = {
		{ "Category", "Session Search" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_pingSize = { "pingSize", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGameInstance, pingSize), METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_pingSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_pingSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_searchesMaxNumber_MetaData[] = {
		{ "Category", "Session Search" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_searchesMaxNumber = { "searchesMaxNumber", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGameInstance, searchesMaxNumber), METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_searchesMaxNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_searchesMaxNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_mapName_MetaData[] = {
		{ "Category", "Session Creation" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "Session Creation and start" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_mapName = { "mapName", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGameInstance, mapName), METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_mapName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_mapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_bNewSessionsFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_pingSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_searchesMaxNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_mapName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameInstance_Statics::ClassParams = {
		&USGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::PropPointers),
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
	IMPLEMENT_CLASS(USGameInstance, 1486542661);
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
