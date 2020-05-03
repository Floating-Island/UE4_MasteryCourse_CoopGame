// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SPlayerState_generated_h
#error "SPlayerState.generated.h already included, missing '#pragma once' in SPlayerState.h"
#endif
#define COOPGAME_SPlayerState_generated_h

#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execaddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scoreToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addScore(Z_Param_scoreToAdd); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execaddScore) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scoreToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addScore(Z_Param_scoreToAdd); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public:


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState)


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SPlayerState_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
