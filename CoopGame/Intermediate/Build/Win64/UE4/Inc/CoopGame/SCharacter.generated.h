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
#ifdef COOPGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPGAME_SCharacter_generated_h

#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisHoldingAWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isHoldingAWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->reload(); \
		P_NATIVE_END; \
	} \
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
	} \
 \
	DECLARE_FUNCTION(execstopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->startFire(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisHoldingAWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isHoldingAWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->reload(); \
		P_NATIVE_END; \
	} \
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
	} \
 \
	DECLARE_FUNCTION(execstopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->startFire(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_EVENT_PARMS
#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_CALLBACK_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__camera() { return STRUCT_OFFSET(ASCharacter, camera); } \
	FORCEINLINE static uint32 __PPO__springArm() { return STRUCT_OFFSET(ASCharacter, springArm); } \
	FORCEINLINE static uint32 __PPO__audioComponent() { return STRUCT_OFFSET(ASCharacter, audioComponent); } \
	FORCEINLINE static uint32 __PPO__healthComp() { return STRUCT_OFFSET(ASCharacter, healthComp); } \
	FORCEINLINE static uint32 __PPO__bHasDied() { return STRUCT_OFFSET(ASCharacter, bHasDied); } \
	FORCEINLINE static uint32 __PPO__zoomFOV() { return STRUCT_OFFSET(ASCharacter, zoomFOV); } \
	FORCEINLINE static uint32 __PPO__fovTransitionSpeed() { return STRUCT_OFFSET(ASCharacter, fovTransitionSpeed); } \
	FORCEINLINE static uint32 __PPO__heldWeapon() { return STRUCT_OFFSET(ASCharacter, heldWeapon); } \
	FORCEINLINE static uint32 __PPO__heldWeaponClass() { return STRUCT_OFFSET(ASCharacter, heldWeaponClass); } \
	FORCEINLINE static uint32 __PPO__weaponSocket() { return STRUCT_OFFSET(ASCharacter, weaponSocket); }


#define CoopGame_Source_CoopGame_Public_SCharacter_h_15_PROLOG \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_EVENT_PARMS


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_INCLASS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_CALLBACK_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
