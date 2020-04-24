// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_STracerWeapon_generated_h
#error "STracerWeapon.generated.h already included, missing '#pragma once' in STracerWeapon.h"
#endif
#define COOPGAME_STracerWeapon_generated_h

#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	COOPGAME_API static class UScriptStruct* StaticStruct();


template<> COOPGAME_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execphysicalMaterialReactionReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->physicalMaterialReactionReplication(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsingleTraceEffectReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->singleTraceEffectReplication(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execphysicalMaterialReactionReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->physicalMaterialReactionReplication(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsingleTraceEffectReplication) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->singleTraceEffectReplication(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracerWeapon(); \
	friend struct Z_Construct_UClass_ASTracerWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTracerWeapon, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_INCLASS \
private: \
	static void StaticRegisterNativesASTracerWeapon(); \
	friend struct Z_Construct_UClass_ASTracerWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTracerWeapon, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracerWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerWeapon(ASTracerWeapon&&); \
	NO_API ASTracerWeapon(const ASTracerWeapon&); \
public:


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerWeapon(ASTracerWeapon&&); \
	NO_API ASTracerWeapon(const ASTracerWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracerWeapon)


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__tracerTarget() { return STRUCT_OFFSET(ASTracerWeapon, tracerTarget); } \
	FORCEINLINE static uint32 __PPO__tracerEffect() { return STRUCT_OFFSET(ASTracerWeapon, tracerEffect); } \
	FORCEINLINE static uint32 __PPO__rangeMultiplier() { return STRUCT_OFFSET(ASTracerWeapon, rangeMultiplier); } \
	FORCEINLINE static uint32 __PPO__traceNetInfo() { return STRUCT_OFFSET(ASTracerWeapon, traceNetInfo); } \
	FORCEINLINE static uint32 __PPO__surfaceToReplicate() { return STRUCT_OFFSET(ASTracerWeapon, surfaceToReplicate); }


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_26_PROLOG
#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_INCLASS \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerWeapon_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTracerWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_STracerWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
