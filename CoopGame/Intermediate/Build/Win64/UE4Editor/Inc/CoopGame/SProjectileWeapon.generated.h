// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SProjectileWeapon_generated_h
#error "SProjectileWeapon.generated.h already included, missing '#pragma once' in SProjectileWeapon.h"
#endif
#define COOPGAME_SProjectileWeapon_generated_h

#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectileWeapon(); \
	friend struct Z_Construct_UClass_ASProjectileWeapon_Statics; \
public: \
	DECLARE_CLASS(ASProjectileWeapon, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileWeapon)


#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASProjectileWeapon(); \
	friend struct Z_Construct_UClass_ASProjectileWeapon_Statics; \
public: \
	DECLARE_CLASS(ASProjectileWeapon, ASWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileWeapon)


#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectileWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectileWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileWeapon(ASProjectileWeapon&&); \
	NO_API ASProjectileWeapon(const ASProjectileWeapon&); \
public:


#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileWeapon(ASProjectileWeapon&&); \
	NO_API ASProjectileWeapon(const ASProjectileWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectileWeapon)


#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SProjectileWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASProjectileWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SProjectileWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
