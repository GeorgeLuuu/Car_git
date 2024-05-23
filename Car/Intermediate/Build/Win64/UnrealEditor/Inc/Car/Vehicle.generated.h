// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVehicleControlData;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CAR_Vehicle_generated_h
#error "Vehicle.generated.h already included, missing '#pragma once' in Vehicle.h"
#endif
#define CAR_Vehicle_generated_h

#define FID_Car_Source_Car_Vehicle_Vehicle_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleControlData_Statics; \
	CAR_API static class UScriptStruct* StaticStruct();


template<> CAR_API UScriptStruct* StaticStruct<struct FVehicleControlData>();

#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_SPARSE_DATA
#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocationToJsonString); \
	DECLARE_FUNCTION(execApplyControl); \
	DECLARE_FUNCTION(execReceiveControlData); \
	DECLARE_FUNCTION(execUpdateVehicleLocation); \
	DECLARE_FUNCTION(execTriggerBeginOverLap);


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocationToJsonString); \
	DECLARE_FUNCTION(execApplyControl); \
	DECLARE_FUNCTION(execReceiveControlData); \
	DECLARE_FUNCTION(execUpdateVehicleLocation); \
	DECLARE_FUNCTION(execTriggerBeginOverLap);


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicle(); \
	friend struct Z_Construct_UClass_AVehicle_Statics; \
public: \
	DECLARE_CLASS(AVehicle, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(AVehicle)


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_INCLASS \
private: \
	static void StaticRegisterNativesAVehicle(); \
	friend struct Z_Construct_UClass_AVehicle_Statics; \
public: \
	DECLARE_CLASS(AVehicle, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(AVehicle)


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicle(AVehicle&&); \
	NO_API AVehicle(const AVehicle&); \
public:


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicle(AVehicle&&); \
	NO_API AVehicle(const AVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicle)


#define FID_Car_Source_Car_Vehicle_Vehicle_h_49_PROLOG
#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_SPARSE_DATA \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_RPC_WRAPPERS \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_INCLASS \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Car_Source_Car_Vehicle_Vehicle_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_SPARSE_DATA \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_INCLASS_NO_PURE_DECLS \
	FID_Car_Source_Car_Vehicle_Vehicle_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAR_API UClass* StaticClass<class AVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Car_Source_Car_Vehicle_Vehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
