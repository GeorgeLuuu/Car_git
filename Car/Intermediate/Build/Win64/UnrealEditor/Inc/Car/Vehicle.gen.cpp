// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Car/Vehicle/Vehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle() {}
// Cross Module References
	CAR_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleControlData();
	UPackage* Z_Construct_UPackage__Script_Car();
	CAR_API UClass* Z_Construct_UClass_AVehicle_NoRegister();
	CAR_API UClass* Z_Construct_UClass_AVehicle();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleControlData;
class UScriptStruct* FVehicleControlData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleControlData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleControlData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleControlData, Z_Construct_UPackage__Script_Car(), TEXT("VehicleControlData"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleControlData.OuterSingleton;
}
template<> CAR_API UScriptStruct* StaticStruct<FVehicleControlData>()
{
	return FVehicleControlData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleControlData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Done_MetaData[];
#endif
		static void NewProp_Done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Done;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleControlData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Forward_MetaData[] = {
		{ "Category", "VehicleControlData" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleControlData, Forward), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Back_MetaData[] = {
		{ "Category", "VehicleControlData" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleControlData, Back), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "VehicleControlData" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleControlData, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "VehicleControlData" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleControlData, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done_MetaData[] = {
		{ "Category", "VehicleControlData" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done_SetBit(void* Obj)
	{
		((FVehicleControlData*)Obj)->Done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleControlData), &Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Back,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewProp_Done,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleControlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
		nullptr,
		&NewStructOps,
		"VehicleControlData",
		sizeof(FVehicleControlData),
		alignof(FVehicleControlData),
		Z_Construct_UScriptStruct_FVehicleControlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleControlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleControlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleControlData()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleControlData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleControlData.InnerSingleton, Z_Construct_UScriptStruct_FVehicleControlData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleControlData.InnerSingleton;
	}
	DEFINE_FUNCTION(AVehicle::execLocationToJsonString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->LocationToJsonString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicle::execApplyControl)
	{
		P_GET_STRUCT_REF(FVehicleControlData,Z_Param_Out_ControlData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyControl(Z_Param_Out_ControlData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicle::execReceiveControlData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveControlData(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicle::execUpdateVehicleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVehicleLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicle::execTriggerBeginOverLap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerBeginOverLap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AVehicle::StaticRegisterNativesAVehicle()
	{
		UClass* Class = AVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyControl", &AVehicle::execApplyControl },
			{ "LocationToJsonString", &AVehicle::execLocationToJsonString },
			{ "ReceiveControlData", &AVehicle::execReceiveControlData },
			{ "TriggerBeginOverLap", &AVehicle::execTriggerBeginOverLap },
			{ "UpdateVehicleLocation", &AVehicle::execUpdateVehicleLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicle_ApplyControl_Statics
	{
		struct Vehicle_eventApplyControl_Parms
		{
			FVehicleControlData ControlData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_ApplyControl_Statics::NewProp_ControlData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicle_ApplyControl_Statics::NewProp_ControlData = { "ControlData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventApplyControl_Parms, ControlData), Z_Construct_UScriptStruct_FVehicleControlData, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::NewProp_ControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::NewProp_ControlData_MetaData)) }; // 3782506807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicle_ApplyControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_ApplyControl_Statics::NewProp_ControlData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_ApplyControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_ApplyControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "ApplyControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::Vehicle_eventApplyControl_Parms), Z_Construct_UFunction_AVehicle_ApplyControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ApplyControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicle_ApplyControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_ApplyControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics
	{
		struct Vehicle_eventLocationToJsonString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventLocationToJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "LocationToJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::Vehicle_eventLocationToJsonString_Parms), Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicle_LocationToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_LocationToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics
	{
		struct Vehicle_eventReceiveControlData_Parms
		{
			FString JsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventReceiveControlData_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_JsonString_MetaData)) };
	void Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Vehicle_eventReceiveControlData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Vehicle_eventReceiveControlData_Parms), &Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "ReceiveControlData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::Vehicle_eventReceiveControlData_Parms), Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicle_ReceiveControlData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_ReceiveControlData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics
	{
		struct Vehicle_eventTriggerBeginOverLap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventTriggerBeginOverLap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventTriggerBeginOverLap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventTriggerBeginOverLap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventTriggerBeginOverLap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Vehicle_eventTriggerBeginOverLap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Vehicle_eventTriggerBeginOverLap_Parms), &Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventTriggerBeginOverLap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "TriggerBeginOverLap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::Vehicle_eventTriggerBeginOverLap_Parms), Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicle_TriggerBeginOverLap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_TriggerBeginOverLap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "UpdateVehicleLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicle_UpdateVehicleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_UpdateVehicleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicle);
	UClass* Z_Construct_UClass_AVehicle_NoRegister()
	{
		return AVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicle_ApplyControl, "ApplyControl" }, // 1487019869
		{ &Z_Construct_UFunction_AVehicle_LocationToJsonString, "LocationToJsonString" }, // 616257053
		{ &Z_Construct_UFunction_AVehicle_ReceiveControlData, "ReceiveControlData" }, // 1448591828
		{ &Z_Construct_UFunction_AVehicle_TriggerBeginOverLap, "TriggerBeginOverLap" }, // 3782612512
		{ &Z_Construct_UFunction_AVehicle_UpdateVehicleLocation, "UpdateVehicleLocation" }, // 3862111904
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicle/Vehicle.h" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_ExternalCamera_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = \"CameraComponent\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = \"CameraComponent\")" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_ExternalCamera = { "ExternalCamera", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicle, ExternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::NewProp_ExternalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_ExternalCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = \"CameraComponent\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = \"CameraComponent\")" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicle, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicle, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicle, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle/Vehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicle, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_BoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_ExternalCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_CurrentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicle_Statics::ClassParams = {
		&AVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicle()
	{
		if (!Z_Registration_Info_UClass_AVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicle.OuterSingleton, Z_Construct_UClass_AVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVehicle.OuterSingleton;
	}
	template<> CAR_API UClass* StaticClass<AVehicle>()
	{
		return AVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicle);
	struct Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ScriptStructInfo[] = {
		{ FVehicleControlData::StaticStruct, Z_Construct_UScriptStruct_FVehicleControlData_Statics::NewStructOps, TEXT("VehicleControlData"), &Z_Registration_Info_UScriptStruct_VehicleControlData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleControlData), 3782506807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVehicle, AVehicle::StaticClass, TEXT("AVehicle"), &Z_Registration_Info_UClass_AVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicle), 691132110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_936790949(TEXT("/Script/Car"),
		Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_Vehicle_Vehicle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
