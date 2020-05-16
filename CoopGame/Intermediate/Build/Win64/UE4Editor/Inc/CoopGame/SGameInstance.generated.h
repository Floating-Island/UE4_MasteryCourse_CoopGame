// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SGameInstance_generated_h
#error "SGameInstance.generated.h already included, missing '#pragma once' in SGameInstance.h"
#endif
#define COOPGAME_SGameInstance_generated_h

#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS
#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public:


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance)


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SGameInstance_h_14_PROLOG
#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class USGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
