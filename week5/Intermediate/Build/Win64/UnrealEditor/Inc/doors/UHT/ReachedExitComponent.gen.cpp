// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "doors/Public/ReachedExitComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReachedExitComponent() {}
// Cross Module References
	DOORS_API UClass* Z_Construct_UClass_UReachedExitComponent();
	DOORS_API UClass* Z_Construct_UClass_UReachedExitComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_doors();
// End Cross Module References
	void UReachedExitComponent::StaticRegisterNativesUReachedExitComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReachedExitComponent);
	UClass* Z_Construct_UClass_UReachedExitComponent_NoRegister()
	{
		return UReachedExitComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReachedExitComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReachedExitComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_doors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReachedExitComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReachedExitComponent.h" },
		{ "ModuleRelativePath", "Public/ReachedExitComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReachedExitComponent_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "ReachedExitComponent" },
		{ "ModuleRelativePath", "Public/ReachedExitComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReachedExitComponent_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReachedExitComponent, TriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReachedExitComponent_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReachedExitComponent_Statics::NewProp_TriggerBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReachedExitComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReachedExitComponent_Statics::NewProp_TriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReachedExitComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReachedExitComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReachedExitComponent_Statics::ClassParams = {
		&UReachedExitComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReachedExitComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReachedExitComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReachedExitComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReachedExitComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReachedExitComponent()
	{
		if (!Z_Registration_Info_UClass_UReachedExitComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReachedExitComponent.OuterSingleton, Z_Construct_UClass_UReachedExitComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReachedExitComponent.OuterSingleton;
	}
	template<> DOORS_API UClass* StaticClass<UReachedExitComponent>()
	{
		return UReachedExitComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReachedExitComponent);
	UReachedExitComponent::~UReachedExitComponent() {}
	struct Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ReachedExitComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ReachedExitComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReachedExitComponent, UReachedExitComponent::StaticClass, TEXT("UReachedExitComponent"), &Z_Registration_Info_UClass_UReachedExitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReachedExitComponent), 2654064756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ReachedExitComponent_h_3343796479(TEXT("/Script/doors"),
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ReachedExitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ReachedExitComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
