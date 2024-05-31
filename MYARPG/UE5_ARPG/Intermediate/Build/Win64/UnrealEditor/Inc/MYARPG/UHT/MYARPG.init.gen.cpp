// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMYARPG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MYARPG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MYARPG()
	{
		if (!Z_Registration_Info_UPackage__Script_MYARPG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MYARPG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x764EB00C,
				0xEBFE7295,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MYARPG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MYARPG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MYARPG(Z_Construct_UPackage__Script_MYARPG, TEXT("/Script/MYARPG"), Z_Registration_Info_UPackage__Script_MYARPG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x764EB00C, 0xEBFE7295));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
