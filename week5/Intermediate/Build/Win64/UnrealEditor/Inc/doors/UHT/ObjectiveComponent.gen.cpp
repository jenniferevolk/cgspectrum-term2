// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "doors/Public/ObjectiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveComponent() {}
// Cross Module References
	DOORS_API UClass* Z_Construct_UClass_UObjectiveComponent();
	DOORS_API UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister();
	DOORS_API UEnum* Z_Construct_UEnum_doors_EObjectiveState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_doors();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectiveState;
	static UEnum* EObjectiveState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectiveState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectiveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_doors_EObjectiveState, Z_Construct_UPackage__Script_doors(), TEXT("EObjectiveState"));
		}
		return Z_Registration_Info_UEnum_EObjectiveState.OuterSingleton;
	}
	template<> DOORS_API UEnum* StaticEnum<EObjectiveState>()
	{
		return EObjectiveState_StaticEnum();
	}
	struct Z_Construct_UEnum_doors_EObjectiveState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_doors_EObjectiveState_Statics::Enumerators[] = {
		{ "EObjectiveState::OS_Inactive", (int64)EObjectiveState::OS_Inactive },
		{ "EObjectiveState::OS_Active", (int64)EObjectiveState::OS_Active },
		{ "EObjectiveState::OS_Completed", (int64)EObjectiveState::OS_Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_doors_EObjectiveState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
		{ "OS_Active.DisplayName", "Active" },
		{ "OS_Active.Name", "EObjectiveState::OS_Active" },
		{ "OS_Completed.DisplayName", "Completed" },
		{ "OS_Completed.Name", "EObjectiveState::OS_Completed" },
		{ "OS_Inactive.DisplayName", "Inactive" },
		{ "OS_Inactive.Name", "EObjectiveState::OS_Inactive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_doors_EObjectiveState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_doors,
		nullptr,
		"EObjectiveState",
		"EObjectiveState",
		Z_Construct_UEnum_doors_EObjectiveState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_doors_EObjectiveState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_doors_EObjectiveState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_doors_EObjectiveState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_doors_EObjectiveState()
	{
		if (!Z_Registration_Info_UEnum_EObjectiveState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectiveState.InnerSingleton, Z_Construct_UEnum_doors_EObjectiveState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectiveState.InnerSingleton;
	}
	DEFINE_FUNCTION(UObjectiveComponent::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EObjectiveState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveComponent::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	void UObjectiveComponent::StaticRegisterNativesUObjectiveComponent()
	{
		UClass* Class = UObjectiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &UObjectiveComponent::execGetDescription },
			{ "GetState", &UObjectiveComponent::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics
	{
		struct ObjectiveComponent_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectiveComponent_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveComponent, nullptr, "GetDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::ObjectiveComponent_eventGetDescription_Parms), Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveComponent_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveComponent_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveComponent_GetState_Statics
	{
		struct ObjectiveComponent_eventGetState_Parms
		{
			EObjectiveState ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectiveComponent_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_doors_EObjectiveState, METADATA_PARAMS(nullptr, 0) }; // 2396181738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveComponent, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::ObjectiveComponent_eventGetState_Parms), Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveComponent_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectiveComponent_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectiveComponent);
	UClass* Z_Construct_UClass_UObjectiveComponent_NoRegister()
	{
		return UObjectiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_doors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveComponent_GetDescription, "GetDescription" }, // 3985540512
		{ &Z_Construct_UFunction_UObjectiveComponent_GetState, "GetState" }, // 3815385725
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectiveComponent.h" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ObjectiveComponent" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectiveComponent, Description), METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ObjectiveComponent" },
		{ "ModuleRelativePath", "Public/ObjectiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectiveComponent, State), Z_Construct_UEnum_doors_EObjectiveState, METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_MetaData)) }; // 2396181738
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveComponent_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveComponent_Statics::ClassParams = {
		&UObjectiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveComponent()
	{
		if (!Z_Registration_Info_UClass_UObjectiveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectiveComponent.OuterSingleton, Z_Construct_UClass_UObjectiveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectiveComponent.OuterSingleton;
	}
	template<> DOORS_API UClass* StaticClass<UObjectiveComponent>()
	{
		return UObjectiveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveComponent);
	UObjectiveComponent::~UObjectiveComponent() {}
	struct Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::EnumInfo[] = {
		{ EObjectiveState_StaticEnum, TEXT("EObjectiveState"), &Z_Registration_Info_UEnum_EObjectiveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2396181738U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectiveComponent, UObjectiveComponent::StaticClass, TEXT("UObjectiveComponent"), &Z_Registration_Info_UClass_UObjectiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectiveComponent), 1451635538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_3193913230(TEXT("/Script/doors"),
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
