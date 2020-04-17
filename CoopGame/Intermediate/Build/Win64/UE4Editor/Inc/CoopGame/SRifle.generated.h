// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SRifle_generated_h
#error "SRifle.generated.h already included, missing '#pragma once' in SRifle.h"
#endif
#define COOPGAME_SRifle_generated_h

#define CoopGame_Source_CoopGame_Public_SRifle_h_16_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SRifle_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SRifle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASRifle(); \
	friend struct Z_Construct_UClass_ASRifle_Statics; \
public: \
	DECLARE_CLASS(ASRifle, ASWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASRifle)


#define CoopGame_Source_CoopGame_Public_SRifle_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASRifle(); \
	friend struct Z_Construct_UClass_ASRifle_Statics; \
public: \
	DECLARE_CLASS(ASRifle, ASWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASRifle)


#define CoopGame_Source_CoopGame_Public_SRifle_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASRifle(ASRifle&&); \
	NO_API ASRifle(const ASRifle&); \
public:


#define CoopGame_Source_CoopGame_Public_SRifle_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASRifle(ASRifle&&); \
	NO_API ASRifle(const ASRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASRifle)


#define CoopGame_Source_CoopGame_Public_SRifle_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__hitImpactEffect() { return STRUCT_OFFSET(ASRifle, hitImpactEffect); } \
	FORCEINLINE static uint32 __PPO__tracerTarget() { return STRUCT_OFFSET(ASRifle, tracerTarget); } \
	FORCEINLINE static uint32 __PPO__tracerEffect() { return STRUCT_OFFSET(ASRifle, tracerEffect); }


#define CoopGame_Source_CoopGame_Public_SRifle_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SRifle_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SRifle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SRifle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
