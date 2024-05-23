// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Car;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Car()
	{
		if (!Z_Registration_Info_UPackage__Script_Car.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Car",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6EE0FD73,
				0x4CD6918D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Car.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Car.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Car(Z_Construct_UPackage__Script_Car, TEXT("/Script/Car"), Z_Registration_Info_UPackage__Script_Car, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6EE0FD73, 0x4CD6918D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
