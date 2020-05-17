// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SLevelSelectionBoxWidget_generated_h
#error "SLevelSelectionBoxWidget.generated.h already included, missing '#pragma once' in SLevelSelectionBoxWidget.h"
#endif
#define COOPGAME_SLevelSelectionBoxWidget_generated_h

#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllMapNames) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_levelsFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USLevelSelectionBoxWidget::GetAllMapNames(Z_Param_levelsFolder); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllMapNames) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_levelsFolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USLevelSelectionBoxWidget::GetAllMapNames(Z_Param_levelsFolder); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSLevelSelectionBoxWidget(); \
	friend struct Z_Construct_UClass_USLevelSelectionBoxWidget_Statics; \
public: \
	DECLARE_CLASS(USLevelSelectionBoxWidget, USContentSelectionBoxWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USLevelSelectionBoxWidget)


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSLevelSelectionBoxWidget(); \
	friend struct Z_Construct_UClass_USLevelSelectionBoxWidget_Statics; \
public: \
	DECLARE_CLASS(USLevelSelectionBoxWidget, USContentSelectionBoxWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(USLevelSelectionBoxWidget)


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USLevelSelectionBoxWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USLevelSelectionBoxWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USLevelSelectionBoxWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USLevelSelectionBoxWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USLevelSelectionBoxWidget(USLevelSelectionBoxWidget&&); \
	NO_API USLevelSelectionBoxWidget(const USLevelSelectionBoxWidget&); \
public:


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USLevelSelectionBoxWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USLevelSelectionBoxWidget(USLevelSelectionBoxWidget&&); \
	NO_API USLevelSelectionBoxWidget(const USLevelSelectionBoxWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USLevelSelectionBoxWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USLevelSelectionBoxWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USLevelSelectionBoxWidget)


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_PRIVATE_PROPERTY_OFFSET
#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class USLevelSelectionBoxWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SLevelSelectionBoxWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
