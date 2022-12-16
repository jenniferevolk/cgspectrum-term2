// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "doors/Public/AbstractionGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractionGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DOORS_API UClass* Z_Construct_UClass_AAbstractionGameModeBase();
	DOORS_API UClass* Z_Construct_UClass_AAbstractionGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_doors();
// End Cross Module References
	void AAbstractionGameModeBase::StaticRegisterNativesAAbstractionGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbstractionGameModeBase);
	UClass* Z_Construct_UClass_AAbstractionGameModeBase_NoRegister()
	{
		return AAbstractionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAbstractionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstractionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_doors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AbstractionGameModeBase.h" },
		{ "ModuleRelativePath", "Public/AbstractionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractionGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "AbstractionGameModeBase" },
		{ "ModuleRelativePath", "Public/AbstractionGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAbstractionGameModeBase_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAbstractionGameModeBase, ObjectiveWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbstractionGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractionGameModeBase_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbstractionGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbstractionGameModeBase_Statics::NewProp_ObjectiveWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstractionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractionGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbstractionGameModeBase_Statics::ClassParams = {
		&AAbstractionGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAbstractionGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractionGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstractionGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton, Z_Construct_UClass_AAbstractionGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton;
	}
	template<> DOORS_API UClass* StaticClass<AAbstractionGameModeBase>()
	{
		return AAbstractionGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractionGameModeBase);
	AAbstractionGameModeBase::~AAbstractionGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week4_Source_doors_Public_AbstractionGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week4_Source_doors_Public_AbstractionGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAbstractionGameModeBase, AAbstractionGameModeBase::StaticClass, TEXT("AAbstractionGameModeBase"), &Z_Registration_Info_UClass_AAbstractionGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbstractionGameModeBase), 1537569076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week4_Source_doors_Public_AbstractionGameModeBase_h_1328973086(TEXT("/Script/doors"),
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week4_Source_doors_Public_AbstractionGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_week4_Source_doors_Public_AbstractionGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
