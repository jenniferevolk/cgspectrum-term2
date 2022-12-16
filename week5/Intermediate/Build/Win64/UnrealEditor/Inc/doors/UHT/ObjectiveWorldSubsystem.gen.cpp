// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "doors/Public/ObjectiveWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWorldSubsystem() {}
// Cross Module References
	DOORS_API UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister();
	DOORS_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem();
	DOORS_API UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_doors();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execRemoveObjective)
	{
		P_GET_OBJECT(UObjectiveComponent,Z_Param_ObjectiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjective(Z_Param_ObjectiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execAddObjective)
	{
		P_GET_OBJECT(UObjectiveComponent,Z_Param_ObjectiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_ObjectiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveWorldSubsystem::execGetCurrentObjectiveDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentObjectiveDescription();
		P_NATIVE_END;
	}
	void UObjectiveWorldSubsystem::StaticRegisterNativesUObjectiveWorldSubsystem()
	{
		UClass* Class = UObjectiveWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjective", &UObjectiveWorldSubsystem::execAddObjective },
			{ "GetCurrentObjectiveDescription", &UObjectiveWorldSubsystem::execGetCurrentObjectiveDescription },
			{ "RemoveObjective", &UObjectiveWorldSubsystem::execRemoveObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics
	{
		struct ObjectiveWorldSubsystem_eventAddObjective_Parms
		{
			UObjectiveComponent* ObjectiveComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent = { "ObjectiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventAddObjective_Parms, ObjectiveComponent), Z_Construct_UClass_UObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::NewProp_ObjectiveComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "AddObjective", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::ObjectiveWorldSubsystem_eventAddObjective_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics
	{
		struct ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "GetCurrentObjectiveDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::ObjectiveWorldSubsystem_eventGetCurrentObjectiveDescription_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics
	{
		struct ObjectiveWorldSubsystem_eventRemoveObjective_Parms
		{
			UObjectiveComponent* ObjectiveComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent = { "ObjectiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectiveWorldSubsystem_eventRemoveObjective_Parms, ObjectiveComponent), Z_Construct_UClass_UObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::NewProp_ObjectiveComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveWorldSubsystem, nullptr, "RemoveObjective", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::ObjectiveWorldSubsystem_eventRemoveObjective_Parms), Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectiveWorldSubsystem);
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem_NoRegister()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_doors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_AddObjective, "AddObjective" }, // 870180247
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_GetCurrentObjectiveDescription, "GetCurrentObjectiveDescription" }, // 50543095
		{ &Z_Construct_UFunction_UObjectiveWorldSubsystem_RemoveObjective, "RemoveObjective" }, // 2247752804
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectiveWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/ObjectiveWorldSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams = {
		&UObjectiveWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton, Z_Construct_UClass_UObjectiveWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectiveWorldSubsystem.OuterSingleton;
	}
	template<> DOORS_API UClass* StaticClass<UObjectiveWorldSubsystem>()
	{
		return UObjectiveWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveWorldSubsystem);
	UObjectiveWorldSubsystem::~UObjectiveWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectiveWorldSubsystem, UObjectiveWorldSubsystem::StaticClass, TEXT("UObjectiveWorldSubsystem"), &Z_Registration_Info_UClass_UObjectiveWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectiveWorldSubsystem), 1522293322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveWorldSubsystem_h_3934194261(TEXT("/Script/doors"),
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
