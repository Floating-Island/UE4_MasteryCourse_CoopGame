// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef COOPGAME_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define COOPGAME_SGameState_generated_h

#define CoopGame_Source_CoopGame_Public_SGameState_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execwaveStateReplication) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_oldWaveState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->waveStateReplication(EWaveState(Z_Param_oldWaveState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchangeWaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->changeWaveState(EWaveState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execwaveStateReplication) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_oldWaveState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->waveStateReplication(EWaveState(Z_Param_oldWaveState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchangeWaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->changeWaveState(EWaveState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_EVENT_PARMS \
	struct SGameState_eventwaveStateChanged_Parms \
	{ \
		EWaveState newWaveState; \
		EWaveState oldWaveState; \
	};


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGameState_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState)


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__waveState() { return STRUCT_OFFSET(ASGameState, waveState); }


#define CoopGame_Source_CoopGame_Public_SGameState_h_23_PROLOG \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_INCLASS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGameState_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameState_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::preparingNextWave) \
	op(EWaveState::playingWave) \
	op(EWaveState::waitingWaveCompletion) \
	op(EWaveState::waveCompleted) \
	op(EWaveState::gameOver) 

enum class EWaveState : uint8;
template<> COOPGAME_API UEnum* StaticEnum<EWaveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
