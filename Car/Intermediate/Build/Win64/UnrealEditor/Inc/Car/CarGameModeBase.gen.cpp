// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Car/CarGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarGameModeBase() {}
// Cross Module References
	CAR_API UClass* Z_Construct_UClass_ACarGameModeBase_NoRegister();
	CAR_API UClass* Z_Construct_UClass_ACarGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Car();
// End Cross Module References
	void ACarGameModeBase::StaticRegisterNativesACarGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarGameModeBase);
	UClass* Z_Construct_UClass_ACarGameModeBase_NoRegister()
	{
		return ACarGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACarGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CarGameModeBase.h" },
		{ "ModuleRelativePath", "CarGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarGameModeBase_Statics::ClassParams = {
		&ACarGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACarGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACarGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarGameModeBase.OuterSingleton, Z_Construct_UClass_ACarGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarGameModeBase.OuterSingleton;
	}
	template<> CAR_API UClass* StaticClass<ACarGameModeBase>()
	{
		return ACarGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarGameModeBase);
	struct Z_CompiledInDeferFile_FID_Car_Source_Car_CarGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_CarGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarGameModeBase, ACarGameModeBase::StaticClass, TEXT("ACarGameModeBase"), &Z_Registration_Info_UClass_ACarGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarGameModeBase), 3665467593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_CarGameModeBase_h_3712046617(TEXT("/Script/Car"),
		Z_CompiledInDeferFile_FID_Car_Source_Car_CarGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_CarGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
