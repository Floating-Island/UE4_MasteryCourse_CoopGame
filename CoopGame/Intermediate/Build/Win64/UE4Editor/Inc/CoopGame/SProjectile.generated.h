// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SProjectile_generated_h
#error "SProjectile.generated.h already included, missing '#pragma once' in SProjectile.h"
#endif
#define COOPGAME_SProjectile_generated_h

#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public:


#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectile)


#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__collisionComponent() { return STRUCT_OFFSET(ASProjectile, collisionComponent); } \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(ASProjectile, mesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__hitEffect() { return STRUCT_OFFSET(ASProjectile, hitEffect); }


#define CoopGame_Source_CoopGame_Public_SProjectile_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
