// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SHealthRegenerationPowerup_generated_h
#error "SHealthRegenerationPowerup.generated.h already included, missing '#pragma once' in SHealthRegenerationPowerup.h"
#endif
#define COOPGAME_SHealthRegenerationPowerup_generated_h

#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHealthRegenerationPowerup(); \
	friend struct Z_Construct_UClass_ASHealthRegenerationPowerup_Statics; \
public: \
	DECLARE_CLASS(ASHealthRegenerationPowerup, ASPowerupActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASHealthRegenerationPowerup)


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASHealthRegenerationPowerup(); \
	friend struct Z_Construct_UClass_ASHealthRegenerationPowerup_Statics; \
public: \
	DECLARE_CLASS(ASHealthRegenerationPowerup, ASPowerupActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASHealthRegenerationPowerup)


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHealthRegenerationPowerup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHealthRegenerationPowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHealthRegenerationPowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHealthRegenerationPowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHealthRegenerationPowerup(ASHealthRegenerationPowerup&&); \
	NO_API ASHealthRegenerationPowerup(const ASHealthRegenerationPowerup&); \
public:


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHealthRegenerationPowerup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHealthRegenerationPowerup(ASHealthRegenerationPowerup&&); \
	NO_API ASHealthRegenerationPowerup(const ASHealthRegenerationPowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHealthRegenerationPowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHealthRegenerationPowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASHealthRegenerationPowerup)


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__healingAmount() { return STRUCT_OFFSET(ASHealthRegenerationPowerup, healingAmount); }


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_12_PROLOG
#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_INCLASS \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASHealthRegenerationPowerup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SHealthRegenerationPowerup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
