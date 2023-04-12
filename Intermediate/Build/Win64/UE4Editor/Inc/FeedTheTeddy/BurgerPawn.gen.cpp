// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/BurgerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBurgerPawn() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ABurgerPawn_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ABurgerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void ABurgerPawn::StaticRegisterNativesABurgerPawn()
	{
	}
	UClass* Z_Construct_UClass_ABurgerPawn_NoRegister()
	{
		return ABurgerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABurgerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABurgerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BurgerPawn.h" },
		{ "ModuleRelativePath", "BurgerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABurgerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABurgerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABurgerPawn_Statics::ClassParams = {
		&ABurgerPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABurgerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABurgerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABurgerPawn, 1219851194);
	template<> FEEDTHETEDDY_API UClass* StaticClass<ABurgerPawn>()
	{
		return ABurgerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABurgerPawn(Z_Construct_UClass_ABurgerPawn, &ABurgerPawn::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("ABurgerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABurgerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
