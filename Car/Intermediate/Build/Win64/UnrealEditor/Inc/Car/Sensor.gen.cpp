// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Car/Sensor/Sensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensor() {}
// Cross Module References
	CAR_API UClass* Z_Construct_UClass_ASensor_NoRegister();
	CAR_API UClass* Z_Construct_UClass_ASensor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Car();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	CAR_API UClass* Z_Construct_UClass_URandomEngine_NoRegister();
// End Cross Module References
	void ASensor::StaticRegisterNativesASensor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASensor);
	UClass* Z_Construct_UClass_ASensor_NoRegister()
	{
		return ASensor::StaticClass();
	}
	struct Z_Construct_UClass_ASensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomEngine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RandomEngine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sensor/Sensor.h" },
		{ "ModuleRelativePath", "Sensor/Sensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sensor/Sensor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASensor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASensor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASensor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::NewProp_RandomEngine_MetaData[] = {
		{ "Comment", "/// Random Engine used to provide noise for sensor output.\n//\x09URandomEngine* RandomEngine = nullptr;\n" },
		{ "ModuleRelativePath", "Sensor/Sensor.h" },
		{ "ToolTip", "Random Engine used to provide noise for sensor output.\n      URandomEngine* RandomEngine = nullptr;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASensor_Statics::NewProp_RandomEngine = { "RandomEngine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASensor, RandomEngine), Z_Construct_UClass_URandomEngine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASensor_Statics::NewProp_RandomEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::NewProp_RandomEngine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensor_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensor_Statics::NewProp_RandomEngine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASensor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASensor_Statics::ClassParams = {
		&ASensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASensor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASensor()
	{
		if (!Z_Registration_Info_UClass_ASensor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASensor.OuterSingleton, Z_Construct_UClass_ASensor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASensor.OuterSingleton;
	}
	template<> CAR_API UClass* StaticClass<ASensor>()
	{
		return ASensor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASensor);
	struct Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Sensor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Sensor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASensor, ASensor::StaticClass, TEXT("ASensor"), &Z_Registration_Info_UClass_ASensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASensor), 3548404139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Sensor_h_223765809(TEXT("/Script/Car"),
		Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Sensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Sensor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
