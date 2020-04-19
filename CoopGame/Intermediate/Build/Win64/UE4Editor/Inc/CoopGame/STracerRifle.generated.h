// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_STracerRifle_generated_h
#error "STracerRifle.generated.h already included, missing '#pragma once' in STracerRifle.h"
#endif
#define COOPGAME_STracerRifle_generated_h

#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracerRifle(); \
	friend struct Z_Construct_UClass_ASTracerRifle_Statics; \
public: \
	DECLARE_CLASS(ASTracerRifle, ASTracerSingle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerRifle)


#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTracerRifle(); \
	friend struct Z_Construct_UClass_ASTracerRifle_Statics; \
public: \
	DECLARE_CLASS(ASTracerRifle, ASTracerSingle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerRifle)


#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracerRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerRifle(ASTracerRifle&&); \
	NO_API ASTracerRifle(const ASTracerRifle&); \
public:


#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerRifle() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerRifle(ASTracerRifle&&); \
	NO_API ASTracerRifle(const ASTracerRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracerRifle)


#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_STracerRifle_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_STracerRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_STracerRifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTracerRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_STracerRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
