// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/ConfigurationDataActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataActor() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_AConfigurationDataActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void AConfigurationDataActor::StaticRegisterNativesAConfigurationDataActor()
	{
	}
	UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister()
	{
		return AConfigurationDataActor::StaticClass();
	}
	struct Z_Construct_UClass_AConfigurationDataActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConfigurationDataActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConfigurationDataActor.h" },
		{ "ModuleRelativePath", "ConfigurationDataActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConfigurationDataActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConfigurationDataActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams = {
		&AConfigurationDataActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConfigurationDataActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConfigurationDataActor, 4282541614);
	template<> FEEDTHETEDDY_API UClass* StaticClass<AConfigurationDataActor>()
	{
		return AConfigurationDataActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConfigurationDataActor(Z_Construct_UClass_AConfigurationDataActor, &AConfigurationDataActor::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("AConfigurationDataActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConfigurationDataActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
