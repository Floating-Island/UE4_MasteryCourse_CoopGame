// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/STracerWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerWeapon() {}
// Cross Module References
	COOPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerWeapon_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerWeapon();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOPGAME_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_CoopGame(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash());
	}
	return Singleton;
}
template<> COOPGAME_API UScriptStruct* StaticStruct<FHitScanTrace>()
{
	return FHitScanTrace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/CoopGame"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_CoopGame_StaticRegisterNativesFHitScanTrace;
	struct Z_Construct_UScriptStruct_FHitScanTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_traceTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
		{ "ToolTip", "contains the information of a single trace. It could've been a single variable, but it's there to show that you can send a struct to server.\nin this case, it shouldn't be necessary" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_traceTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_traceTo = { "traceTo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanTrace, traceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_traceTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_traceTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanTrace_Statics::NewProp_traceTo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
		nullptr,
		&NewStructOps,
		"HitScanTrace",
		sizeof(FHitScanTrace),
		alignof(FHitScanTrace),
		Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_Hash() { return 2121476360U; }
	void ASTracerWeapon::StaticRegisterNativesASTracerWeapon()
	{
		UClass* Class = ASTracerWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "physicalMaterialReactionReplication", &ASTracerWeapon::execphysicalMaterialReactionReplication },
			{ "singleTraceEffectReplication", &ASTracerWeapon::execsingleTraceEffectReplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTracerWeapon, nullptr, "physicalMaterialReactionReplication", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTracerWeapon, nullptr, "singleTraceEffectReplication", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTracerWeapon_NoRegister()
	{
		return ASTracerWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_surfaceToReplicate_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_surfaceToReplicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traceNetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_traceNetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rangeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rangeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tracerTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTracerWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTracerWeapon_physicalMaterialReactionReplication, "physicalMaterialReactionReplication" }, // 3926872306
		{ &Z_Construct_UFunction_ASTracerWeapon_singleTraceEffectReplication, "singleTraceEffectReplication" }, // 3248329969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STracerWeapon.h" },
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_surfaceToReplicate_MetaData[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
		{ "ToolTip", "replicates physical material hit effect" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_surfaceToReplicate = { "surfaceToReplicate", "physicalMaterialReactionReplication", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerWeapon, surfaceToReplicate), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_surfaceToReplicate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_surfaceToReplicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_traceNetInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
		{ "ToolTip", "replicates trace effects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_traceNetInfo = { "traceNetInfo", "singleTraceEffectReplication", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerWeapon, traceNetInfo), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_traceNetInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_traceNetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_rangeMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_rangeMultiplier = { "rangeMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerWeapon, rangeMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_rangeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_rangeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
		{ "ToolTip", "secure way to expose it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerEffect = { "tracerEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerWeapon, tracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerTarget_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STracerWeapon.h" },
		{ "ToolTip", "no need to edit it" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerTarget = { "tracerTarget", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerWeapon, tracerTarget), METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTracerWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_surfaceToReplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_traceNetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_rangeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerWeapon_Statics::NewProp_tracerTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTracerWeapon_Statics::ClassParams = {
		&ASTracerWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTracerWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ASTracerWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASTracerWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTracerWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTracerWeapon, 1643506462);
	template<> COOPGAME_API UClass* StaticClass<ASTracerWeapon>()
	{
		return ASTracerWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTracerWeapon(Z_Construct_UClass_ASTracerWeapon, &ASTracerWeapon::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTracerWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
