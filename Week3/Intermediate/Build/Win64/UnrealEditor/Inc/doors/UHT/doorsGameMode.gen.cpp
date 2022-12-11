// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "doors/doorsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoorsGameMode() {}
// Cross Module References
	DOORS_API UClass* Z_Construct_UClass_AdoorsGameMode();
	DOORS_API UClass* Z_Construct_UClass_AdoorsGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_doors();
// End Cross Module References
	void AdoorsGameMode::StaticRegisterNativesAdoorsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AdoorsGameMode);
	UClass* Z_Construct_UClass_AdoorsGameMode_NoRegister()
	{
		return AdoorsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AdoorsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AdoorsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_doors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AdoorsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "doorsGameMode.h" },
		{ "ModuleRelativePath", "doorsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AdoorsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AdoorsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AdoorsGameMode_Statics::ClassParams = {
		&AdoorsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AdoorsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AdoorsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AdoorsGameMode()
	{
		if (!Z_Registration_Info_UClass_AdoorsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AdoorsGameMode.OuterSingleton, Z_Construct_UClass_AdoorsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AdoorsGameMode.OuterSingleton;
	}
	template<> DOORS_API UClass* StaticClass<AdoorsGameMode>()
	{
		return AdoorsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdoorsGameMode);
	AdoorsGameMode::~AdoorsGameMode() {}
	struct Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_Week3_Source_doors_doorsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_Week3_Source_doors_doorsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AdoorsGameMode, AdoorsGameMode::StaticClass, TEXT("AdoorsGameMode"), &Z_Registration_Info_UClass_AdoorsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AdoorsGameMode), 2300519439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_Week3_Source_doors_doorsGameMode_h_3360673509(TEXT("/Script/doors"),
		Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_Week3_Source_doors_doorsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgspectrum_term2_projects_cgspectrum_term2_Week3_Source_doors_doorsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
