// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SPowerupActor_generated_h
#error "SPowerupActor.generated.h already included, missing '#pragma once' in SPowerupActor.h"
#endif
#define COOPGAME_SPowerupActor_generated_h

#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonExpired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onExpired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpowerupTicking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->powerupTicking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonActivated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onActivated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonStateChanged) \
	{ \
		P_GET_UBOOL(Z_Param_bIsStateActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onStateChanged(Z_Param_bIsStateActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonPowerUpActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onPowerUpActivation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonExpired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onExpired(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpowerupTicking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->powerupTicking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonActivated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onActivated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonStateChanged) \
	{ \
		P_GET_UBOOL(Z_Param_bIsStateActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onStateChanged(Z_Param_bIsStateActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonPowerUpActivation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onPowerUpActivation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public:


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupActor)


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(ASPowerupActor, mesh); } \
	FORCEINLINE static uint32 __PPO__pointLight() { return STRUCT_OFFSET(ASPowerupActor, pointLight); } \
	FORCEINLINE static uint32 __PPO__rotationComponent() { return STRUCT_OFFSET(ASPowerupActor, rotationComponent); } \
	FORCEINLINE static uint32 __PPO__powerupDuration() { return STRUCT_OFFSET(ASPowerupActor, powerupDuration); } \
	FORCEINLINE static uint32 __PPO__ticksQuantity() { return STRUCT_OFFSET(ASPowerupActor, ticksQuantity); } \
	FORCEINLINE static uint32 __PPO__bIsActivated() { return STRUCT_OFFSET(ASPowerupActor, bIsActivated); }


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SPowerupActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASPowerupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
