// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/TeddyBearProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearProjectileActor() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ATeddyBearProjectileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void ATeddyBearProjectileActor::StaticRegisterNativesATeddyBearProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor_NoRegister()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeddyBearProjectileActor.h" },
		{ "ModuleRelativePath", "TeddyBearProjectileActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams = {
		&ATeddyBearProjectileActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearProjectileActor, 3776091854);
	template<> FEEDTHETEDDY_API UClass* StaticClass<ATeddyBearProjectileActor>()
	{
		return ATeddyBearProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearProjectileActor(Z_Construct_UClass_ATeddyBearProjectileActor, &ATeddyBearProjectileActor::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("ATeddyBearProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
