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
#ifdef FEEDTHETEDDY_FriesActor_generated_h
#error "FriesActor.generated.h already included, missing '#pragma once' in FriesActor.h"
#endif
#define FEEDTHETEDDY_FriesActor_generated_h

#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_SPARSE_DATA
#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnHit);


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnHit);


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFriesActor(); \
	friend struct Z_Construct_UClass_AFriesActor_Statics; \
public: \
	DECLARE_CLASS(AFriesActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(AFriesActor)


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFriesActor(); \
	friend struct Z_Construct_UClass_AFriesActor_Statics; \
public: \
	DECLARE_CLASS(AFriesActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(AFriesActor)


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFriesActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFriesActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFriesActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFriesActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFriesActor(AFriesActor&&); \
	NO_API AFriesActor(const AFriesActor&); \
public:


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFriesActor(AFriesActor&&); \
	NO_API AFriesActor(const AFriesActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFriesActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFriesActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFriesActor)


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_12_PROLOG
#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_RPC_WRAPPERS \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_INCLASS \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_INCLASS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDY_API UClass* StaticClass<class AFriesActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddy_Source_FeedTheTeddy_FriesActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
