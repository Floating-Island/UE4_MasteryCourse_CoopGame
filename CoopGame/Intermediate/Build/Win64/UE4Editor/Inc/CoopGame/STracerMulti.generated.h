// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_STracerMulti_generated_h
#error "STracerMulti.generated.h already included, missing '#pragma once' in STracerMulti.h"
#endif
#define COOPGAME_STracerMulti_generated_h

#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracerMulti(); \
	friend struct Z_Construct_UClass_ASTracerMulti_Statics; \
public: \
	DECLARE_CLASS(ASTracerMulti, ASTracerWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerMulti)


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTracerMulti(); \
	friend struct Z_Construct_UClass_ASTracerMulti_Statics; \
public: \
	DECLARE_CLASS(ASTracerMulti, ASTracerWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerMulti)


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerMulti(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracerMulti) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerMulti); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerMulti); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerMulti(ASTracerMulti&&); \
	NO_API ASTracerMulti(const ASTracerMulti&); \
public:


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerMulti(ASTracerMulti&&); \
	NO_API ASTracerMulti(const ASTracerMulti&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerMulti); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerMulti); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracerMulti)


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__shots() { return STRUCT_OFFSET(ASTracerMulti, shots); } \
	FORCEINLINE static uint32 __PPO__spreadConeHalfAngleRadius() { return STRUCT_OFFSET(ASTracerMulti, spreadConeHalfAngleRadius); }


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_STracerMulti_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerMulti_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTracerMulti>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_STracerMulti_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
