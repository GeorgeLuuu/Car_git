// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Car/Util/RandomEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomEngine() {}
// Cross Module References
	CAR_API UClass* Z_Construct_UClass_URandomEngine_NoRegister();
	CAR_API UClass* Z_Construct_UClass_URandomEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Car();
// End Cross Module References
	DEFINE_FUNCTION(URandomEngine::execGetIntWithWeight)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Weights);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntWithWeight(Z_Param_Out_Weights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetBoolWithWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolWithWeight(Z_Param_Weight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetNormalDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StandardDeviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalDistribution(Z_Param_Mean,Z_Param_StandardDeviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetExponentialDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lambda);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExponentialDistribution(Z_Param_Lambda);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetPoissonDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mean);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoissonDistribution(Z_Param_Mean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetBinomialDistribution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_T);
		P_GET_PROPERTY(FFloatProperty,Z_Param_P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBinomialDistribution(Z_Param_T,Z_Param_P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetBernoulliDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBernoulliDistribution(Z_Param_P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetUniformBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUniformBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetUniformIntInRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Minimum);
		P_GET_PROPERTY(FIntProperty,Z_Param_Maximum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUniformIntInRange(Z_Param_Minimum,Z_Param_Maximum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetUniformFloatInRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Minimum);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Maximum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUniformFloatInRange(Z_Param_Minimum,Z_Param_Maximum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGetUniformFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUniformFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Seed(Z_Param_InSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGenerateSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GenerateSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomEngine::execGenerateRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URandomEngine::GenerateRandomSeed();
		P_NATIVE_END;
	}
	void URandomEngine::StaticRegisterNativesURandomEngine()
	{
		UClass* Class = URandomEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateRandomSeed", &URandomEngine::execGenerateRandomSeed },
			{ "GenerateSeed", &URandomEngine::execGenerateSeed },
			{ "GetBernoulliDistribution", &URandomEngine::execGetBernoulliDistribution },
			{ "GetBinomialDistribution", &URandomEngine::execGetBinomialDistribution },
			{ "GetBoolWithWeight", &URandomEngine::execGetBoolWithWeight },
			{ "GetExponentialDistribution", &URandomEngine::execGetExponentialDistribution },
			{ "GetIntWithWeight", &URandomEngine::execGetIntWithWeight },
			{ "GetNormalDistribution", &URandomEngine::execGetNormalDistribution },
			{ "GetPoissonDistribution", &URandomEngine::execGetPoissonDistribution },
			{ "GetUniformBool", &URandomEngine::execGetUniformBool },
			{ "GetUniformFloat", &URandomEngine::execGetUniformFloat },
			{ "GetUniformFloatInRange", &URandomEngine::execGetUniformFloatInRange },
			{ "GetUniformIntInRange", &URandomEngine::execGetUniformIntInRange },
			{ "Seed", &URandomEngine::execSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics
	{
		struct RandomEngine_eventGenerateRandomSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGenerateRandomSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// Generate a non-deterministic random seed.\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "Generate a non-deterministic random seed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GenerateRandomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::RandomEngine_eventGenerateRandomSeed_Parms), Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GenerateRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GenerateRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics
	{
		struct RandomEngine_eventGenerateSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGenerateSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// Generate a seed derived from previous seed.\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "Generate a seed derived from previous seed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GenerateSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::RandomEngine_eventGenerateSeed_Parms), Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GenerateSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GenerateSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics
	{
		struct RandomEngine_eventGetBernoulliDistribution_Parms
		{
			float P;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetBernoulliDistribution_Parms, P), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RandomEngine_eventGetBernoulliDistribution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RandomEngine_eventGetBernoulliDistribution_Parms), &Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @}\n// ===========================================================================\n/// @name Other distributions\n// ===========================================================================\n/// @{\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "@}\n\n@name Other distributions\n\n@{" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetBernoulliDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::RandomEngine_eventGetBernoulliDistribution_Parms), Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics
	{
		struct RandomEngine_eventGetBinomialDistribution_Parms
		{
			int32 T;
			float P;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_T;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetBinomialDistribution_Parms, T), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetBinomialDistribution_Parms, P), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetBinomialDistribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetBinomialDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::RandomEngine_eventGetBinomialDistribution_Parms), Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetBinomialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetBinomialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics
	{
		struct RandomEngine_eventGetBoolWithWeight_Parms
		{
			float Weight;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetBoolWithWeight_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RandomEngine_eventGetBoolWithWeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RandomEngine_eventGetBoolWithWeight_Parms), &Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @}\n// ===========================================================================\n/// @name Sampling distributions\n// ===========================================================================\n/// @{\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "@}\n\n@name Sampling distributions\n\n@{" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetBoolWithWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::RandomEngine_eventGetBoolWithWeight_Parms), Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetBoolWithWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetBoolWithWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics
	{
		struct RandomEngine_eventGetExponentialDistribution_Parms
		{
			float Lambda;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetExponentialDistribution_Parms, Lambda), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetExponentialDistribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::NewProp_Lambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetExponentialDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::RandomEngine_eventGetExponentialDistribution_Parms), Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetExponentialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetExponentialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics
	{
		struct RandomEngine_eventGetIntWithWeight_Parms
		{
			TArray<float> Weights;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetIntWithWeight_Parms, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetIntWithWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_Weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetIntWithWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::RandomEngine_eventGetIntWithWeight_Parms), Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetIntWithWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetIntWithWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics
	{
		struct RandomEngine_eventGetNormalDistribution_Parms
		{
			float Mean;
			float StandardDeviation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardDeviation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetNormalDistribution_Parms, Mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_StandardDeviation = { "StandardDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetNormalDistribution_Parms, StandardDeviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetNormalDistribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_Mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_StandardDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetNormalDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::RandomEngine_eventGetNormalDistribution_Parms), Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetNormalDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetNormalDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics
	{
		struct RandomEngine_eventGetPoissonDistribution_Parms
		{
			float Mean;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetPoissonDistribution_Parms, Mean), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetPoissonDistribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::NewProp_Mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetPoissonDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::RandomEngine_eventGetPoissonDistribution_Parms), Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetPoissonDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetPoissonDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics
	{
		struct RandomEngine_eventGetUniformBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RandomEngine_eventGetUniformBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RandomEngine_eventGetUniformBool_Parms), &Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetUniformBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::RandomEngine_eventGetUniformBool_Parms), Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetUniformBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetUniformBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics
	{
		struct RandomEngine_eventGetUniformFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @}\n// ===========================================================================\n/// @name Uniform distribution\n// ===========================================================================\n/// @{\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "@}\n\n@name Uniform distribution\n\n@{" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetUniformFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::RandomEngine_eventGetUniformFloat_Parms), Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetUniformFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetUniformFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics
	{
		struct RandomEngine_eventGetUniformFloatInRange_Parms
		{
			float Minimum;
			float Maximum;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformFloatInRange_Parms, Minimum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformFloatInRange_Parms, Maximum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformFloatInRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetUniformFloatInRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::RandomEngine_eventGetUniformFloatInRange_Parms), Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics
	{
		struct RandomEngine_eventGetUniformIntInRange_Parms
		{
			int32 Minimum;
			int32 Maximum;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minimum;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Maximum;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformIntInRange_Parms, Minimum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformIntInRange_Parms, Maximum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventGetUniformIntInRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "GetUniformIntInRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::RandomEngine_eventGetUniformIntInRange_Parms), Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_GetUniformIntInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_GetUniformIntInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomEngine_Seed_Statics
	{
		struct RandomEngine_eventSeed_Parms
		{
			int32 InSeed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URandomEngine_Seed_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomEngine_eventSeed_Parms, InSeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomEngine_Seed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomEngine_Seed_Statics::NewProp_InSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomEngine_Seed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// Seed the random engine.\n" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
		{ "ToolTip", "Seed the random engine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomEngine_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomEngine, nullptr, "Seed", nullptr, nullptr, sizeof(Z_Construct_UFunction_URandomEngine_Seed_Statics::RandomEngine_eventSeed_Parms), Z_Construct_UFunction_URandomEngine_Seed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_Seed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomEngine_Seed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomEngine_Seed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomEngine_Seed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomEngine_Seed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomEngine);
	UClass* Z_Construct_UClass_URandomEngine_NoRegister()
	{
		return URandomEngine::StaticClass();
	}
	struct Z_Construct_UClass_URandomEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Car,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URandomEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomEngine_GenerateRandomSeed, "GenerateRandomSeed" }, // 4108391270
		{ &Z_Construct_UFunction_URandomEngine_GenerateSeed, "GenerateSeed" }, // 1865891812
		{ &Z_Construct_UFunction_URandomEngine_GetBernoulliDistribution, "GetBernoulliDistribution" }, // 3428335153
		{ &Z_Construct_UFunction_URandomEngine_GetBinomialDistribution, "GetBinomialDistribution" }, // 532071716
		{ &Z_Construct_UFunction_URandomEngine_GetBoolWithWeight, "GetBoolWithWeight" }, // 305729322
		{ &Z_Construct_UFunction_URandomEngine_GetExponentialDistribution, "GetExponentialDistribution" }, // 3450026067
		{ &Z_Construct_UFunction_URandomEngine_GetIntWithWeight, "GetIntWithWeight" }, // 3561592131
		{ &Z_Construct_UFunction_URandomEngine_GetNormalDistribution, "GetNormalDistribution" }, // 1785833984
		{ &Z_Construct_UFunction_URandomEngine_GetPoissonDistribution, "GetPoissonDistribution" }, // 3782190060
		{ &Z_Construct_UFunction_URandomEngine_GetUniformBool, "GetUniformBool" }, // 644195245
		{ &Z_Construct_UFunction_URandomEngine_GetUniformFloat, "GetUniformFloat" }, // 863819320
		{ &Z_Construct_UFunction_URandomEngine_GetUniformFloatInRange, "GetUniformFloatInRange" }, // 3098735562
		{ &Z_Construct_UFunction_URandomEngine_GetUniformIntInRange, "GetUniformIntInRange" }, // 2099820214
		{ &Z_Construct_UFunction_URandomEngine_Seed, "Seed" }, // 835978465
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/RandomEngine.h" },
		{ "ModuleRelativePath", "Util/RandomEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomEngine_Statics::ClassParams = {
		&URandomEngine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URandomEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomEngine()
	{
		if (!Z_Registration_Info_UClass_URandomEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomEngine.OuterSingleton, Z_Construct_UClass_URandomEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URandomEngine.OuterSingleton;
	}
	template<> CAR_API UClass* StaticClass<URandomEngine>()
	{
		return URandomEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomEngine);
	struct Z_CompiledInDeferFile_FID_Car_Source_Car_Util_RandomEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Util_RandomEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URandomEngine, URandomEngine::StaticClass, TEXT("URandomEngine"), &Z_Registration_Info_UClass_URandomEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomEngine), 4037942721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Car_Source_Car_Util_RandomEngine_h_659157951(TEXT("/Script/Car"),
		Z_CompiledInDeferFile_FID_Car_Source_Car_Util_RandomEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Car_Source_Car_Util_RandomEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
