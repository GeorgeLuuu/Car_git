// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAR_CarGameModeBase_generated_h
#error "CarGameModeBase.generated.h already included, missing '#pragma once' in CarGameModeBase.h"
#endif
#define CAR_CarGameModeBase_generated_h

#define FID_Car_Source_Car_CarGameModeBase_h_15_SPARSE_DATA
#define FID_Car_Source_Car_CarGameModeBase_h_15_RPC_WRAPPERS
#define FID_Car_Source_Car_CarGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Car_Source_Car_CarGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarGameModeBase(); \
	friend struct Z_Construct_UClass_ACarGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACarGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ACarGameModeBase)


#define FID_Car_Source_Car_CarGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACarGameModeBase(); \
	friend struct Z_Construct_UClass_ACarGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACarGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Car"), NO_API) \
	DECLARE_SERIALIZER(ACarGameModeBase)


#define FID_Car_Source_Car_CarGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarGameModeBase(ACarGameModeBase&&); \
	NO_API ACarGameModeBase(const ACarGameModeBase&); \
public:


#define FID_Car_Source_Car_CarGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarGameModeBase(ACarGameModeBase&&); \
	NO_API ACarGameModeBase(const ACarGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarGameModeBase)


#define FID_Car_Source_Car_CarGameModeBase_h_12_PROLOG
#define FID_Car_Source_Car_CarGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_CarGameModeBase_h_15_SPARSE_DATA \
	FID_Car_Source_Car_CarGameModeBase_h_15_RPC_WRAPPERS \
	FID_Car_Source_Car_CarGameModeBase_h_15_INCLASS \
	FID_Car_Source_Car_CarGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Car_Source_Car_CarGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Car_Source_Car_CarGameModeBase_h_15_SPARSE_DATA \
	FID_Car_Source_Car_CarGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Car_Source_Car_CarGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Car_Source_Car_CarGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAR_API UClass* StaticClass<class ACarGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Car_Source_Car_CarGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
