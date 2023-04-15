// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FEEDTHETEDDY_TeddyBearActor_generated_h
#error "TeddyBearActor.generated.h already included, missing '#pragma once' in TeddyBearActor.h"
#endif
#define FEEDTHETEDDY_TeddyBearActor_generated_h

#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_SPARSE_DATA
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATeddyBearActor*>(this); }


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATeddyBearActor*>(this); }


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeddyBearActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeddyBearActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public:


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeddyBearActor)


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_13_PROLOG
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_RPC_WRAPPERS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_INCLASS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_INCLASS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDY_API UClass* StaticClass<class ATeddyBearActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddy_Source_FeedTheTeddy_TeddyBearActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
