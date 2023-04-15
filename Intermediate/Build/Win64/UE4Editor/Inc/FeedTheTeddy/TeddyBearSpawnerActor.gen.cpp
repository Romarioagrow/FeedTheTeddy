// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/TeddyBearSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearSpawnerActor() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister();
// End Cross Module References
	void ATeddyBearSpawnerActor::StaticRegisterNativesATeddyBearSpawnerActor()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeddyBearClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TeddyBearClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeddyBearSpawnerActor.h" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_TeddyBearClass_MetaData[] = {
		{ "Category", "TeddyBearClass" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_TeddyBearClass = { "TeddyBearClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawnerActor, TeddyBearClass), Z_Construct_UClass_ATeddyBearActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_TeddyBearClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_TeddyBearClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_TeddyBearClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams = {
		&ATeddyBearSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearSpawnerActor, 2613259023);
	template<> FEEDTHETEDDY_API UClass* StaticClass<ATeddyBearSpawnerActor>()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearSpawnerActor(Z_Construct_UClass_ATeddyBearSpawnerActor, &ATeddyBearSpawnerActor::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("ATeddyBearSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
