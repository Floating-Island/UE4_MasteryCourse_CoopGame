// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPGAME_SWeapon_generated_h

#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon)


#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(ASWeapon, mesh); } \
	FORCEINLINE static uint32 __PPO__typeOfDamage() { return STRUCT_OFFSET(ASWeapon, typeOfDamage); } \
	FORCEINLINE static uint32 __PPO__baseDamage() { return STRUCT_OFFSET(ASWeapon, baseDamage); } \
	FORCEINLINE static uint32 __PPO__bonusDamage() { return STRUCT_OFFSET(ASWeapon, bonusDamage); } \
	FORCEINLINE static uint32 __PPO__muzzleSocket() { return STRUCT_OFFSET(ASWeapon, muzzleSocket); } \
	FORCEINLINE static uint32 __PPO__muzzleEffect() { return STRUCT_OFFSET(ASWeapon, muzzleEffect); } \
	FORCEINLINE static uint32 __PPO__recoilCameraShake() { return STRUCT_OFFSET(ASWeapon, recoilCameraShake); } \
	FORCEINLINE static uint32 __PPO__DefaultHitImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultHitImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__fireRate() { return STRUCT_OFFSET(ASWeapon, fireRate); }


#define CoopGame_Source_CoopGame_Public_SWeapon_h_15_PROLOG
#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_INCLASS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
