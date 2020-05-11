// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SExplosiveBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSExplosiveBarrel() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASExplosiveBarrel::StaticRegisterNativesASExplosiveBarrel()
	{
		UClass* Class = ASExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onHealthChanged", &ASExplosiveBarrel::execonHealthChanged },
			{ "serverImitateExplosionReplication", &ASExplosiveBarrel::execserverImitateExplosionReplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics
	{
		struct SExplosiveBarrel_eventonHealthChanged_Parms
		{
			USHealthComponent* trigger;
			float health;
			float healthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_healthDelta = { "healthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, healthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_trigger_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SExplosiveBarrel_eventonHealthChanged_Parms, trigger), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_trigger_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_healthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::NewProp_trigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASExplosiveBarrel, nullptr, "onHealthChanged", sizeof(SExplosiveBarrel_eventonHealthChanged_Parms), Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASExplosiveBarrel, nullptr, "serverImitateExplosionReplication", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister()
	{
		return ASExplosiveBarrel::StaticClass();
	}
	struct Z_Construct_UClass_ASExplosiveBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionReactionImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_explosionReactionImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodeParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explodeParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explodedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasExploded_MetaData[];
#endif
		static void NewProp_bHasExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forceComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forceComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASExplosiveBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASExplosiveBarrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASExplosiveBarrel_onHealthChanged, "onHealthChanged" }, // 1998282331
		{ &Z_Construct_UFunction_ASExplosiveBarrel_serverImitateExplosionReplication, "serverImitateExplosionReplication" }, // 4176162827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SExplosiveBarrel.h" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionSound_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionSound = { "explosionSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionReactionImpulse_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionReactionImpulse = { "explosionReactionImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explosionReactionImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionReactionImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionReactionImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_damageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionRadius_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionRadius = { "explosionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionDamage_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionDamage = { "explosionDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodeParticle_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodeParticle = { "explodeParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explodeParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodeParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodeParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodedMaterial_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodedMaterial = { "explodedMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, explodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded_MetaData[] = {
		{ "Category", "Barrel" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	void Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded_SetBit(void* Obj)
	{
		((ASExplosiveBarrel*)Obj)->bHasExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded = { "bHasExploded", "serverImitateExplosionReplication", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASExplosiveBarrel), &Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_healthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
		{ "ToolTip", "health component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_healthComp = { "healthComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, healthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_healthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_healthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_forceComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_forceComp = { "forceComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, forceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_forceComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_forceComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASExplosiveBarrel, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionReactionImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodeParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_explodedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bHasExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_healthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_forceComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASExplosiveBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASExplosiveBarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASExplosiveBarrel_Statics::ClassParams = {
		&ASExplosiveBarrel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASExplosiveBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASExplosiveBarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASExplosiveBarrel, 3066222278);
	template<> COOPGAME_API UClass* StaticClass<ASExplosiveBarrel>()
	{
		return ASExplosiveBarrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASExplosiveBarrel(Z_Construct_UClass_ASExplosiveBarrel, &ASExplosiveBarrel::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASExplosiveBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASExplosiveBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
