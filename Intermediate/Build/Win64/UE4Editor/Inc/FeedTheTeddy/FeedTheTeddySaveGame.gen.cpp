// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedTheTeddy/FeedTheTeddySaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedTheTeddySaveGame() {}
// Cross Module References
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_UFeedTheTeddySaveGame_NoRegister();
	FEEDTHETEDDY_API UClass* Z_Construct_UClass_UFeedTheTeddySaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FeedTheTeddy();
// End Cross Module References
	void UFeedTheTeddySaveGame::StaticRegisterNativesUFeedTheTeddySaveGame()
	{
	}
	UClass* Z_Construct_UClass_UFeedTheTeddySaveGame_NoRegister()
	{
		return UFeedTheTeddySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFeedTheTeddySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HighScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FeedTheTeddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FeedTheTeddySaveGame.h" },
		{ "ModuleRelativePath", "FeedTheTeddySaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::NewProp_HighScore_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "FeedTheTeddySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedTheTeddySaveGame, HighScore), METADATA_PARAMS(Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::NewProp_HighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::NewProp_HighScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::NewProp_HighScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedTheTeddySaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::ClassParams = {
		&UFeedTheTeddySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedTheTeddySaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeedTheTeddySaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeedTheTeddySaveGame, 1025387804);
	template<> FEEDTHETEDDY_API UClass* StaticClass<UFeedTheTeddySaveGame>()
	{
		return UFeedTheTeddySaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeedTheTeddySaveGame(Z_Construct_UClass_UFeedTheTeddySaveGame, &UFeedTheTeddySaveGame::StaticClass, TEXT("/Script/FeedTheTeddy"), TEXT("UFeedTheTeddySaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedTheTeddySaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
