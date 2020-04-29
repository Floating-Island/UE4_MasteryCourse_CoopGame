// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SPowerupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onActivated();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onExpired();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onStateChanged();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onTickPowerup();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_powerupTicking();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onActivated", &ASPowerupActor::execonActivated },
			{ "onExpired", &ASPowerupActor::execonExpired },
			{ "onPowerUpActivation", &ASPowerupActor::execonPowerUpActivation },
			{ "onStateChanged", &ASPowerupActor::execonStateChanged },
			{ "onTickPowerup", &ASPowerupActor::execonTickPowerup },
			{ "powerupTicking", &ASPowerupActor::execpowerupTicking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerupActor_onActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_onActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_onActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "onActivated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_onActivated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_onActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_onActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_onExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_onExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_onExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "onExpired", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_onExpired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_onExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_onExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "onPowerUpActivation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics
	{
		struct SPowerupActor_eventonStateChanged_Parms
		{
			bool bIsStateActive;
		};
		static void NewProp_bIsStateActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStateActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::NewProp_bIsStateActive_SetBit(void* Obj)
	{
		((SPowerupActor_eventonStateChanged_Parms*)Obj)->bIsStateActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::NewProp_bIsStateActive = { "bIsStateActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPowerupActor_eventonStateChanged_Parms), &Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::NewProp_bIsStateActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::NewProp_bIsStateActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "onStateChanged", sizeof(SPowerupActor_eventonStateChanged_Parms), Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_onStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_onStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "onTickPowerup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_onTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_onTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "powerupTicking", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_powerupTicking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupActor_powerupTicking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[];
#endif
		static void NewProp_bIsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ticksQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ticksQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerupDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_powerupDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rotationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPowerupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPowerupActor_onActivated, "onActivated" }, // 679767613
		{ &Z_Construct_UFunction_ASPowerupActor_onExpired, "onExpired" }, // 1082154830
		{ &Z_Construct_UFunction_ASPowerupActor_onPowerUpActivation, "onPowerUpActivation" }, // 2425544321
		{ &Z_Construct_UFunction_ASPowerupActor_onStateChanged, "onStateChanged" }, // 3801197798
		{ &Z_Construct_UFunction_ASPowerupActor_onTickPowerup, "onTickPowerup" }, // 1025572122
		{ &Z_Construct_UFunction_ASPowerupActor_powerupTicking, "powerupTicking" }, // 1963952791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerupActor.h" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	void Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated_SetBit(void* Obj)
	{
		((ASPowerupActor*)Obj)->bIsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated = { "bIsActivated", "onPowerUpActivation", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPowerupActor), &Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_ticksQuantity_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Number of times the powerup is applied" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_ticksQuantity = { "ticksQuantity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, ticksQuantity), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_ticksQuantity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_ticksQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_powerupDuration_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Time between powerup's application" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_powerupDuration = { "powerupDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, powerupDuration), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_powerupDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_powerupDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_rotationComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_rotationComponent = { "rotationComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, rotationComponent), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_rotationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_rotationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_pointLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_pointLight = { "pointLight", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, pointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_pointLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_pointLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_ticksQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_powerupDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_rotationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_pointLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerupActor_Statics::ClassParams = {
		&ASPowerupActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPowerupActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerupActor, 302175440);
	template<> COOPGAME_API UClass* StaticClass<ASPowerupActor>()
	{
		return ASPowerupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupActor(Z_Construct_UClass_ASPowerupActor, &ASPowerupActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
