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
#ifdef COOPGAME_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define COOPGAME_STrackerBot_generated_h

#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exechandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_trigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->handleTakeDamage(Z_Param_trigger,Z_Param_health,Z_Param_healthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exechandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_trigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->handleTakeDamage(Z_Param_trigger,Z_Param_health,Z_Param_healthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComp() { return STRUCT_OFFSET(ASTrackerBot, meshComp); } \
	FORCEINLINE static uint32 __PPO__healthComp() { return STRUCT_OFFSET(ASTrackerBot, healthComp); } \
	FORCEINLINE static uint32 __PPO__overlapSphere() { return STRUCT_OFFSET(ASTrackerBot, overlapSphere); } \
	FORCEINLINE static uint32 __PPO__forceMagnitude() { return STRUCT_OFFSET(ASTrackerBot, forceMagnitude); } \
	FORCEINLINE static uint32 __PPO__bVelocityChanges() { return STRUCT_OFFSET(ASTrackerBot, bVelocityChanges); } \
	FORCEINLINE static uint32 __PPO__minimumEndSeekDistance() { return STRUCT_OFFSET(ASTrackerBot, minimumEndSeekDistance); } \
	FORCEINLINE static uint32 __PPO__explosionParticle() { return STRUCT_OFFSET(ASTrackerBot, explosionParticle); } \
	FORCEINLINE static uint32 __PPO__explosionDamage() { return STRUCT_OFFSET(ASTrackerBot, explosionDamage); } \
	FORCEINLINE static uint32 __PPO__explosionRadius() { return STRUCT_OFFSET(ASTrackerBot, explosionRadius); } \
	FORCEINLINE static uint32 __PPO__explosionDamageType() { return STRUCT_OFFSET(ASTrackerBot, explosionDamageType); } \
	FORCEINLINE static uint32 __PPO__selfInflictedDamage() { return STRUCT_OFFSET(ASTrackerBot, selfInflictedDamage); } \
	FORCEINLINE static uint32 __PPO__destructionSequenceInitiatedSound() { return STRUCT_OFFSET(ASTrackerBot, destructionSequenceInitiatedSound); } \
	FORCEINLINE static uint32 __PPO__destructionSound() { return STRUCT_OFFSET(ASTrackerBot, destructionSound); }


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_15_PROLOG
#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_INCLASS \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Ai_STrackerBot_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTrackerBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Ai_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
