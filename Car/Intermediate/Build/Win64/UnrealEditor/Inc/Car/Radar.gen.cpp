// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Car/Sensor/Radar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadar() {}
// Cross Module References
	CAR_API UClass* Z_Construct_UClass_ARadar_NoRegister();
	CAR_API UClass* Z_Construct_UClass_ARadar();
	CAR_API UClass* Z_Construct_UClass_ASensor();
	UPackage* Z_Construct_UPackage__Script_Car();
// End Cross Module References
	DEFINE_FUNCTION(ARadar::execToJsonString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToJsonString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execCalculateCurrentVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateCurrentVelocity(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execSendLineTraces)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendLineTraces(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execSetPointsPerSecond)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPointsPerSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointsPerSecond(Z_Param_NewPointsPerSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execSetRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRange(Z_Param_NewRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execSetVerticalFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVerticalFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalFOV(Z_Param_NewVerticalFOV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadar::execSetHorizontalFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHorizontalFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalFOV(Z_Param_NewHorizontalFOV);
		P_NATIVE_END;
	}
	void ARadar::StaticRegisterNativesARadar()
	{
		UClass* Class = ARadar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateCurrentVelocity", &ARadar::execCalculateCurrentVelocity },
			{ "SendLineTraces", &ARadar::execSendLineTraces },
			{ "SetHorizontalFOV", &ARadar::execSetHorizontalFOV },
			{ "SetPointsPerSecond", &ARadar::execSetPointsPerSecond },
			{ "SetRange", &ARadar::execSetRange },
			{ "SetVerticalFOV", &ARadar::execSetVerticalFOV },
			{ "ToJsonString", &ARadar::execToJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics
	{
		struct Radar_eventCalculateCurrentVelocity_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventCalculateCurrentVelocity_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "CalculateCurrentVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::Radar_eventCalculateCurrentVelocity_Parms), Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_CalculateCurrentVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_CalculateCurrentVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_SendLineTraces_Statics
	{
		struct Radar_eventSendLineTraces_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARadar_SendLineTraces_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventSendLineTraces_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_SendLineTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_SendLineTraces_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_SendLineTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_SendLineTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "SendLineTraces", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_SendLineTraces_Statics::Radar_eventSendLineTraces_Parms), Z_Construct_UFunction_ARadar_SendLineTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SendLineTraces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_SendLineTraces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SendLineTraces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_SendLineTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_SendLineTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics
	{
		struct Radar_eventSetHorizontalFOV_Parms
		{
			float NewHorizontalFOV;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHorizontalFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::NewProp_NewHorizontalFOV = { "NewHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventSetHorizontalFOV_Parms, NewHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::NewProp_NewHorizontalFOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "Comment", "//void Set(const FActorDescription& Description) override;\n" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
		{ "ToolTip", "void Set(const FActorDescription& Description) override;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "SetHorizontalFOV", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::Radar_eventSetHorizontalFOV_Parms), Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_SetHorizontalFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_SetHorizontalFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics
	{
		struct Radar_eventSetPointsPerSecond_Parms
		{
			int32 NewPointsPerSecond;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewPointsPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::NewProp_NewPointsPerSecond = { "NewPointsPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventSetPointsPerSecond_Parms, NewPointsPerSecond), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::NewProp_NewPointsPerSecond,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "SetPointsPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::Radar_eventSetPointsPerSecond_Parms), Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_SetPointsPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_SetPointsPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_SetRange_Statics
	{
		struct Radar_eventSetRange_Parms
		{
			float NewRange;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARadar_SetRange_Statics::NewProp_NewRange = { "NewRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventSetRange_Parms, NewRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_SetRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_SetRange_Statics::NewProp_NewRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_SetRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_SetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "SetRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_SetRange_Statics::Radar_eventSetRange_Parms), Z_Construct_UFunction_ARadar_SetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_SetRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_SetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_SetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics
	{
		struct Radar_eventSetVerticalFOV_Parms
		{
			float NewVerticalFOV;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVerticalFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::NewProp_NewVerticalFOV = { "NewVerticalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventSetVerticalFOV_Parms, NewVerticalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::NewProp_NewVerticalFOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "SetVerticalFOV", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::Radar_eventSetVerticalFOV_Parms), Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_SetVerticalFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_SetVerticalFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadar_ToJsonString_Statics
	{
		struct Radar_eventToJsonString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARadar_ToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Radar_eventToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadar_ToJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadar_ToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadar_ToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadar_ToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadar, nullptr, "ToJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARadar_ToJsonString_Statics::Radar_eventToJsonString_Parms), Z_Construct_UFunction_ARadar_ToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_ToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadar_ToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadar_ToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadar_ToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARadar_ToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARadar);
	UClass* Z_Construct_UClass_ARadar_NoRegister()
	{
		return ARadar::StaticClass();
	}
	struct Z_Construct_UClass_ARadar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVehicleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentVehicleSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASensor,
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARadar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARadar_CalculateCurrentVelocity, "CalculateCurrentVelocity" }, // 1638933148
		{ &Z_Construct_UFunction_ARadar_SendLineTraces, "SendLineTraces" }, // 520759134
		{ &Z_Construct_UFunction_ARadar_SetHorizontalFOV, "SetHorizontalFOV" }, // 362615516
		{ &Z_Construct_UFunction_ARadar_SetPointsPerSecond, "SetPointsPerSecond" }, // 3684560103
		{ &Z_Construct_UFunction_ARadar_SetRange, "SetRange" }, // 4020629840
		{ &Z_Construct_UFunction_ARadar_SetVerticalFOV, "SetVerticalFOV" }, // 495984037
		{ &Z_Construct_UFunction_ARadar_ToJsonString, "ToJsonString" }, // 682008333
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sensor/Radar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARadar_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadar, Range), METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARadar_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadar, HorizontalFOV), METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::NewProp_HorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::NewProp_HorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARadar_Statics::NewProp_VerticalFOV = { "VerticalFOV", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadar, VerticalFOV), METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::NewProp_VerticalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::NewProp_VerticalFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::NewProp_PointsPerSecond_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARadar_Statics::NewProp_PointsPerSecond = { "PointsPerSecond", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadar, PointsPerSecond), METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::NewProp_PointsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::NewProp_PointsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::NewProp_CurrentVehicleSpeed_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Sensor/Radar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARadar_Statics::NewProp_CurrentVehicleSpeed = { "CurrentVehicleSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadar, CurrentVehicleSpeed), METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::NewProp_CurrentVehicleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::NewProp_CurrentVehicleSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARadar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadar_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadar_Statics::NewProp_HorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadar_Statics::NewProp_VerticalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadar_Statics::NewProp_PointsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadar_Statics::NewProp_CurrentVehicleSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARadar_Statics::ClassParams = {
		&ARadar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARadar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadar()
	{
		if (!Z_Registration_Info_UClass_ARadar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARadar.OuterSingleton, Z_Construct_UClass_ARadar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARadar.OuterSingleton;
	}
	template<> CAR_API UClass* StaticClass<ARadar>()
	{
		return ARadar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadar);
	struct Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Radar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Radar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARadar, ARadar::StaticClass, TEXT("ARadar"), &Z_Registration_Info_UClass_ARadar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARadar), 1992951025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Radar_h_641377428(TEXT("/Script/Car"),
		Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Radar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_Sensor_Radar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
