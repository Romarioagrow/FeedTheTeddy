// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/HomingActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomingActorInterface() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_UHomingActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void UHomingActorInterface::StaticRegisterNativesUHomingActorInterface()
	{
	}
	UClass* Z_Construct_UClass_UHomingActorInterface_NoRegister()
	{
		return UHomingActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHomingActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHomingActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HomingActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHomingActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHomingActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHomingActorInterface_Statics::ClassParams = {
		&UHomingActorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHomingActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHomingActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHomingActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHomingActorInterface, 156573565);
	template<> FEEDTHETEDDY_API UClass* StaticClass<UHomingActorInterface>()
	{
		return UHomingActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHomingActorInterface(Z_Construct_UClass_UHomingActorInterface, &UHomingActorInterface::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("UHomingActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHomingActorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
