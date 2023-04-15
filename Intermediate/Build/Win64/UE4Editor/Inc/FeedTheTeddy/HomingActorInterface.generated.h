// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FEEDTHETEDDY_HomingActorInterface_generated_h
#error "HomingActorInterface.generated.h already included, missing '#pragma once' in HomingActorInterface.h"
#endif
#define FEEDTHETEDDY_HomingActorInterface_generated_h

#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_SPARSE_DATA
#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_RPC_WRAPPERS
#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FEEDTHETEDDY_API UHomingActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHomingActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FEEDTHETEDDY_API, UHomingActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHomingActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FEEDTHETEDDY_API UHomingActorInterface(UHomingActorInterface&&); \
	FEEDTHETEDDY_API UHomingActorInterface(const UHomingActorInterface&); \
public:


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FEEDTHETEDDY_API UHomingActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FEEDTHETEDDY_API UHomingActorInterface(UHomingActorInterface&&); \
	FEEDTHETEDDY_API UHomingActorInterface(const UHomingActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FEEDTHETEDDY_API, UHomingActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHomingActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHomingActorInterface)


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHomingActorInterface(); \
	friend struct Z_Construct_UClass_UHomingActorInterface_Statics; \
public: \
	DECLARE_CLASS(UHomingActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FeedTheTeddy"), FEEDTHETEDDY_API) \
	DECLARE_SERIALIZER(UHomingActorInterface)


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHomingActorInterface() {} \
public: \
	typedef UHomingActorInterface UClassType; \
	typedef IHomingActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHomingActorInterface() {} \
public: \
	typedef UHomingActorInterface UClassType; \
	typedef IHomingActorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_10_PROLOG
#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_RPC_WRAPPERS \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_SPARSE_DATA \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEEDTHETEDDY_API UClass* StaticClass<class UHomingActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FeedTheTeddy_Source_FeedTheTeddy_HomingActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
