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
#ifdef FEEDTHETEDDY_BurgerPawn_generated_h
#error "BurgerPawn.generated.h already included, missing '#pragma once' in BurgerPawn.h"
#endif
#define FEEDTHETEDDY_BurgerPawn_generated_h

#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_SPARSE_DATA
#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABurgerPawn(); \
	friend struct Z_Construct_UClass_ABurgerPawn_Statics; \
public: \
	DECLARE_CLASS(ABurgerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ABurgerPawn)


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABurgerPawn(); \
	friend struct Z_Construct_UClass_ABurgerPawn_Statics; \
public: \
	DECLARE_CLASS(ABurgerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), NO_API) \
	DECLARE_SERIALIZER(ABurgerPawn)


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABurgerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABurgerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABurgerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABurgerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABurgerPawn(ABurgerPawn&&); \
	NO_API ABurgerPawn(const ABurgerPawn&); \
public:


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABurgerPawn(ABurgerPawn&&); \
	NO_API ABurgerPawn(const ABurgerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABurgerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABurgerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABurgerPawn)


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_PRIVATE_PROPERTY_OFFSET
#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_11_PROLOG
#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_RPC_WRAPPERS \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_INCLASS \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_INCLASS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDY_API UClass* StaticClass<class ABurgerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddy_Source_FeedTheTeddy_BurgerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
