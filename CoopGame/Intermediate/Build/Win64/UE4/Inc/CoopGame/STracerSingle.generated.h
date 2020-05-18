// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_STracerSingle_generated_h
#error "STracerSingle.generated.h already included, missing '#pragma once' in STracerSingle.h"
#endif
#define COOPGAME_STracerSingle_generated_h

#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracerSingle(); \
	friend struct Z_Construct_UClass_ASTracerSingle_Statics; \
public: \
	DECLARE_CLASS(ASTracerSingle, ASTracerWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerSingle)


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTracerSingle(); \
	friend struct Z_Construct_UClass_ASTracerSingle_Statics; \
public: \
	DECLARE_CLASS(ASTracerSingle, ASTracerWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerSingle)


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerSingle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracerSingle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerSingle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerSingle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerSingle(ASTracerSingle&&); \
	NO_API ASTracerSingle(const ASTracerSingle&); \
public:


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerSingle(ASTracerSingle&&); \
	NO_API ASTracerSingle(const ASTracerSingle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerSingle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerSingle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracerSingle)


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulletSpread() { return STRUCT_OFFSET(ASTracerSingle, bulletSpread); }


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_STracerSingle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerSingle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTracerSingle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_STracerSingle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
