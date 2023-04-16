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
struct FVector;
struct FHitResult;
#ifdef FEEDTHETEDDY_TeddyBearProjectileActor_generated_h
#error "TeddyBearProjectileActor.generated.h already included, missing '#pragma once' in TeddyBearProjectileActor.h"
#endif
#define FEEDTHETEDDY_TeddyBearProjectileActor_generated_h

#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_SPARSE_DATA
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBearProjectileActor(); \
	friend struct Z_Construct_UClass_ATeddyBearProjectileActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearProjectileActor)


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATeddyBearProjectileActor(); \
	friend struct Z_Construct_UClass_ATeddyBearProjectileActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearProjectileActor)


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeddyBearProjectileActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeddyBearProjectileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearProjectileActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearProjectileActor(ATeddyBearProjectileActor&&); \
	NO_API ATeddyBearProjectileActor(const ATeddyBearProjectileActor&); \
public:


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearProjectileActor(ATeddyBearProjectileActor&&); \
	NO_API ATeddyBearProjectileActor(const ATeddyBearProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearProjectileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeddyBearProjectileActor)


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_12_PROLOG
#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_RPC_WRAPPERS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_INCLASS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_INCLASS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDY_API UClass* StaticClass<class ATeddyBearProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddy_Source_FeedTheTeddy_TeddyBearProjectileActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
