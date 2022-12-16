// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoors_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_doors;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_doors()
	{
		if (!Z_Registration_Info_UPackage__Script_doors.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/doors",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2730F1F5,
				0xF537A4E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_doors.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_doors.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_doors(Z_Construct_UPackage__Script_doors, TEXT("/Script/doors"), Z_Registration_Info_UPackage__Script_doors, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2730F1F5, 0xF537A4E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
