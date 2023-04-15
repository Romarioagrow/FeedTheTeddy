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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SecondsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "FeedTheTeddyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddyGameModeBase, Score), METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_SecondsLeft_MetaData[] = {
		{ "Category", "SecondsLeft" },
		{ "ModuleRelativePath", "FeedTheTeddyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_SecondsLeft = { "SecondsLeft", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddyGameModeBase, SecondsLeft), METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_SecondsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_SecondsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "FeedTheTeddyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddyGameModeBase, GameOverWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_GameOverWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_HudWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FeedTheTeddyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFeedTheTeddyGameModeBase, HudWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_HudWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_HudWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_SecondsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_GameOverWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::NewProp_HudWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFeedTheTeddyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::ClassParams = {
		&AFeedTheTeddyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFeedTheTeddyGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFeedTheTeddyGameModeBase, 4266072944);
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
