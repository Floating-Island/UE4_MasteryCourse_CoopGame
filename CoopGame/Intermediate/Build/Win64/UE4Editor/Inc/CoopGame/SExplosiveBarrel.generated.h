// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define COOPGAME_SExplosiveBarrel_generated_h

#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_trigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_trigger,Z_Param_health,Z_Param_healthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_trigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_trigger,Z_Param_health,Z_Param_healthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(ASExplosiveBarrel, mesh); } \
	FORCEINLINE static uint32 __PPO__healthComp() { return STRUCT_OFFSET(ASExplosiveBarrel, healthComp); } \
	FORCEINLINE static uint32 __PPO__bHasExploded() { return STRUCT_OFFSET(ASExplosiveBarrel, bHasExploded); } \
	FORCEINLINE static uint32 __PPO__explodedMaterial() { return STRUCT_OFFSET(ASExplosiveBarrel, explodedMaterial); } \
	FORCEINLINE static uint32 __PPO__explodeParticle() { return STRUCT_OFFSET(ASExplosiveBarrel, explodeParticle); } \
	FORCEINLINE static uint32 __PPO__explosionDamage() { return STRUCT_OFFSET(ASExplosiveBarrel, explosionDamage); } \
	FORCEINLINE static uint32 __PPO__explosionRadius() { return STRUCT_OFFSET(ASExplosiveBarrel, explosionRadius); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(ASExplosiveBarrel, damageType); }


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
