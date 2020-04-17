// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SGrenadeLauncher_generated_h
#error "SGrenadeLauncher.generated.h already included, missing '#pragma once' in SGrenadeLauncher.h"
#endif
#define COOPGAME_SGrenadeLauncher_generated_h

#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGrenadeLauncher(); \
	friend struct Z_Construct_UClass_ASGrenadeLauncher_Statics; \
public: \
	DECLARE_CLASS(ASGrenadeLauncher, ASWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASGrenadeLauncher(); \
	friend struct Z_Construct_UClass_ASGrenadeLauncher_Statics; \
public: \
	DECLARE_CLASS(ASGrenadeLauncher, ASWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGrenadeLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGrenadeLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGrenadeLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGrenadeLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGrenadeLauncher(ASGrenadeLauncher&&); \
	NO_API ASGrenadeLauncher(const ASGrenadeLauncher&); \
public:


#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGrenadeLauncher(ASGrenadeLauncher&&); \
	NO_API ASGrenadeLauncher(const ASGrenadeLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGrenadeLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGrenadeLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGrenadeLauncher)


#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASGrenadeLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGrenadeLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
