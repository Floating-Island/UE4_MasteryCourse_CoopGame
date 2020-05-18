// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SGameInstance_generated_h
#error "SGameInstance.generated.h already included, missing '#pragma once' in SGameInstance.h"
#endif
#define COOPGAME_SGameInstance_generated_h

#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonDestroySessionComplete) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_sessionName); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onDestroySessionComplete(Z_Param_sessionName,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execjoinGamesSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->joinGamesSession(Z_Param_sessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSessionsFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->getSessionsFound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execfindGamesSession) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLANSession); \
		P_GET_UBOOL(Z_Param_bIsPresence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->findGamesSession(Z_Param_bIsLANSession,Z_Param_bIsPresence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcreateSession) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLANSession); \
		P_GET_UBOOL(Z_Param_bIsPresence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerCapacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->createSession(Z_Param_bIsLANSession,Z_Param_bIsPresence,Z_Param_playerCapacity); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonDestroySessionComplete) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_sessionName); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onDestroySessionComplete(Z_Param_sessionName,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execjoinGamesSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->joinGamesSession(Z_Param_sessionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSessionsFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->getSessionsFound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execfindGamesSession) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLANSession); \
		P_GET_UBOOL(Z_Param_bIsPresence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->findGamesSession(Z_Param_bIsLANSession,Z_Param_bIsPresence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcreateSession) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLANSession); \
		P_GET_UBOOL(Z_Param_bIsPresence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerCapacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->createSession(Z_Param_bIsLANSession,Z_Param_bIsPresence,Z_Param_playerCapacity); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public:


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mapName() { return STRUCT_OFFSET(USGameInstance, mapName); } \
	FORCEINLINE static uint32 __PPO__searchesMaxNumber() { return STRUCT_OFFSET(USGameInstance, searchesMaxNumber); } \
	FORCEINLINE static uint32 __PPO__pingSize() { return STRUCT_OFFSET(USGameInstance, pingSize); } \
	FORCEINLINE static uint32 __PPO__bNewSessionsFound() { return STRUCT_OFFSET(USGameInstance, bNewSessionsFound); }


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class USGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
