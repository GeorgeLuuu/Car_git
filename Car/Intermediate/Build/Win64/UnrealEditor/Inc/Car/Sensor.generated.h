// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAR_Sensor_generated_h
#error "Sensor.generated.h already included, missing '#pragma once' in Sensor.h"
#endif
#define CAR_Sensor_generated_h

#define FID_Car_Source_Car_Sensor_Sensor_h_18_SPARSE_DATA
#define FID_Car_Source_Car_Sensor_Sensor_h_18_RPC_WRAPPERS
#define FID_Car_Source_Car_Sensor_Sensor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Car_Source_Car_Sensor_Sensor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define FID_Car_Source_Car_Sensor_Sensor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define FID_Car_Source_Car_Sensor_Sensor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASensor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASensor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public:


#define FID_Car_Source_Car_Sensor_Sensor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASensor)


#define FID_Car_Source_Car_Sensor_Sensor_h_15_PROLOG
#define FID_Car_Source_Car_Sensor_Sensor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Sensor_Sensor_h_18_SPARSE_DATA \
	FID_Car_Source_Car_Sensor_Sensor_h_18_RPC_WRAPPERS \
	FID_Car_Source_Car_Sensor_Sensor_h_18_INCLASS \
	FID_Car_Source_Car_Sensor_Sensor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Car_Source_Car_Sensor_Sensor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Sensor_Sensor_h_18_SPARSE_DATA \
	FID_Car_Source_Car_Sensor_Sensor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Car_Source_Car_Sensor_Sensor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Car_Source_Car_Sensor_Sensor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAR_API UClass* StaticClass<class ASensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Car_Source_Car_Sensor_Sensor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
