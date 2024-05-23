// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAR_Radar_generated_h
#error "Radar.generated.h already included, missing '#pragma once' in Radar.h"
#endif
#define CAR_Radar_generated_h

#define FID_Car_Source_Car_Sensor_Radar_h_22_SPARSE_DATA
#define FID_Car_Source_Car_Sensor_Radar_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToJsonString); \
	DECLARE_FUNCTION(execCalculateCurrentVelocity); \
	DECLARE_FUNCTION(execSendLineTraces); \
	DECLARE_FUNCTION(execSetPointsPerSecond); \
	DECLARE_FUNCTION(execSetRange); \
	DECLARE_FUNCTION(execSetVerticalFOV); \
	DECLARE_FUNCTION(execSetHorizontalFOV);


#define FID_Car_Source_Car_Sensor_Radar_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToJsonString); \
	DECLARE_FUNCTION(execCalculateCurrentVelocity); \
	DECLARE_FUNCTION(execSendLineTraces); \
	DECLARE_FUNCTION(execSetPointsPerSecond); \
	DECLARE_FUNCTION(execSetRange); \
	DECLARE_FUNCTION(execSetVerticalFOV); \
	DECLARE_FUNCTION(execSetHorizontalFOV);


#define FID_Car_Source_Car_Sensor_Radar_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARadar(); \
	friend struct Z_Construct_UClass_ARadar_Statics; \
public: \
	DECLARE_CLASS(ARadar, ASensor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ARadar)


#define FID_Car_Source_Car_Sensor_Radar_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARadar(); \
	friend struct Z_Construct_UClass_ARadar_Statics; \
public: \
	DECLARE_CLASS(ARadar, ASensor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ARadar)


#define FID_Car_Source_Car_Sensor_Radar_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARadar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadar(ARadar&&); \
	NO_API ARadar(const ARadar&); \
public:


#define FID_Car_Source_Car_Sensor_Radar_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadar(ARadar&&); \
	NO_API ARadar(const ARadar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadar)


#define FID_Car_Source_Car_Sensor_Radar_h_19_PROLOG
#define FID_Car_Source_Car_Sensor_Radar_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Sensor_Radar_h_22_SPARSE_DATA \
	FID_Car_Source_Car_Sensor_Radar_h_22_RPC_WRAPPERS \
	FID_Car_Source_Car_Sensor_Radar_h_22_INCLASS \
	FID_Car_Source_Car_Sensor_Radar_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Car_Source_Car_Sensor_Radar_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Sensor_Radar_h_22_SPARSE_DATA \
	FID_Car_Source_Car_Sensor_Radar_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Car_Source_Car_Sensor_Radar_h_22_INCLASS_NO_PURE_DECLS \
	FID_Car_Source_Car_Sensor_Radar_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAR_API UClass* StaticClass<class ARadar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Car_Source_Car_Sensor_Radar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
