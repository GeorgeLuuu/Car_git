// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAR_RandomEngine_generated_h
#error "RandomEngine.generated.h already included, missing '#pragma once' in RandomEngine.h"
#endif
#define CAR_RandomEngine_generated_h

#define FID_Car_Source_Car_Util_RandomEngine_h_14_SPARSE_DATA
#define FID_Car_Source_Car_Util_RandomEngine_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIntWithWeight); \
	DECLARE_FUNCTION(execGetBoolWithWeight); \
	DECLARE_FUNCTION(execGetNormalDistribution); \
	DECLARE_FUNCTION(execGetExponentialDistribution); \
	DECLARE_FUNCTION(execGetPoissonDistribution); \
	DECLARE_FUNCTION(execGetBinomialDistribution); \
	DECLARE_FUNCTION(execGetBernoulliDistribution); \
	DECLARE_FUNCTION(execGetUniformBool); \
	DECLARE_FUNCTION(execGetUniformIntInRange); \
	DECLARE_FUNCTION(execGetUniformFloatInRange); \
	DECLARE_FUNCTION(execGetUniformFloat); \
	DECLARE_FUNCTION(execSeed); \
	DECLARE_FUNCTION(execGenerateSeed); \
	DECLARE_FUNCTION(execGenerateRandomSeed);


#define FID_Car_Source_Car_Util_RandomEngine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIntWithWeight); \
	DECLARE_FUNCTION(execGetBoolWithWeight); \
	DECLARE_FUNCTION(execGetNormalDistribution); \
	DECLARE_FUNCTION(execGetExponentialDistribution); \
	DECLARE_FUNCTION(execGetPoissonDistribution); \
	DECLARE_FUNCTION(execGetBinomialDistribution); \
	DECLARE_FUNCTION(execGetBernoulliDistribution); \
	DECLARE_FUNCTION(execGetUniformBool); \
	DECLARE_FUNCTION(execGetUniformIntInRange); \
	DECLARE_FUNCTION(execGetUniformFloatInRange); \
	DECLARE_FUNCTION(execGetUniformFloat); \
	DECLARE_FUNCTION(execSeed); \
	DECLARE_FUNCTION(execGenerateSeed); \
	DECLARE_FUNCTION(execGenerateRandomSeed);


#define FID_Car_Source_Car_Util_RandomEngine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURandomEngine(); \
	friend struct Z_Construct_UClass_URandomEngine_Statics; \
public: \
	DECLARE_CLASS(URandomEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(URandomEngine)


#define FID_Car_Source_Car_Util_RandomEngine_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURandomEngine(); \
	friend struct Z_Construct_UClass_URandomEngine_Statics; \
public: \
	DECLARE_CLASS(URandomEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(URandomEngine)


#define FID_Car_Source_Car_Util_RandomEngine_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomEngine(URandomEngine&&); \
	NO_API URandomEngine(const URandomEngine&); \
public:


#define FID_Car_Source_Car_Util_RandomEngine_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomEngine(URandomEngine&&); \
	NO_API URandomEngine(const URandomEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomEngine)


#define FID_Car_Source_Car_Util_RandomEngine_h_11_PROLOG
#define FID_Car_Source_Car_Util_RandomEngine_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Util_RandomEngine_h_14_SPARSE_DATA \
	FID_Car_Source_Car_Util_RandomEngine_h_14_RPC_WRAPPERS \
	FID_Car_Source_Car_Util_RandomEngine_h_14_INCLASS \
	FID_Car_Source_Car_Util_RandomEngine_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Car_Source_Car_Util_RandomEngine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_Util_RandomEngine_h_14_SPARSE_DATA \
	FID_Car_Source_Car_Util_RandomEngine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Car_Source_Car_Util_RandomEngine_h_14_INCLASS_NO_PURE_DECLS \
	FID_Car_Source_Car_Util_RandomEngine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAR_API UClass* StaticClass<class URandomEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Car_Source_Car_Util_RandomEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
