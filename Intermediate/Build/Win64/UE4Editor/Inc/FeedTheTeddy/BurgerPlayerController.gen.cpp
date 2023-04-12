// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/BurgerPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBurgerPlayerController() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ABurgerPlayerController_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_ABurgerPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void ABurgerPlayerController::StaticRegisterNativesABurgerPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABurgerPlayerController_NoRegister()
	{
		return ABurgerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABurgerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABurgerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BurgerPlayerController.h" },
		{ "ModuleRelativePath", "BurgerPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABurgerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABurgerPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABurgerPlayerController_Statics::ClassParams = {
		&ABurgerPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABurgerPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABurgerPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABurgerPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABurgerPlayerController, 1532722476);
	template<> FEEDTHETEDDY_API UClass* StaticClass<ABurgerPlayerController>()
	{
		return ABurgerPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABurgerPlayerController(Z_Construct_UClass_ABurgerPlayerController, &ABurgerPlayerController::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("ABurgerPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABurgerPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
