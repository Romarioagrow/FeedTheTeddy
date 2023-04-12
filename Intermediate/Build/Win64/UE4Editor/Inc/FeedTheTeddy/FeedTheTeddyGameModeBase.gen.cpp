// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/FeedTheTeddyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddyGameModeBase() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_AFeedTheTeddyGameModeBase_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_AFeedTheTeddyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void AFeedTheTeddyGameModeBase::StaticRegisterNativesAFeedTheTeddyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFeedTheTeddyGameModeBase_NoRegister()
	{
		return AFeedTheTeddyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FeedTheTeddyGameModeBase.h" },
		{ "ModuleRelativePath", "FeedTheTeddyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFeedTheTeddyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::ClassParams = {
		&AFeedTheTeddyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFeedTheTeddyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFeedTheTeddyGameModeBase, 1865455461);
	template<> FEEDTHETEDDY_API UClass* StaticClass<AFeedTheTeddyGameModeBase>()
	{
		return AFeedTheTeddyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFeedTheTeddyGameModeBase(Z_Construct_UClass_AFeedTheTeddyGameModeBase, &AFeedTheTeddyGameModeBase::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("AFeedTheTeddyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFeedTheTeddyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
