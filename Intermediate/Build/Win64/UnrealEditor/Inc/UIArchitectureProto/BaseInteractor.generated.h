// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBasePresenter;
#ifdef UIARCHITECTUREPROTO_BaseInteractor_generated_h
#error "BaseInteractor.generated.h already included, missing '#pragma once' in BaseInteractor.h"
#endif
#define UIARCHITECTUREPROTO_BaseInteractor_generated_h

#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_SPARSE_DATA
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeInteractor);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeInteractor);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseInteractor(); \
	friend struct Z_Construct_UClass_UBaseInteractor_Statics; \
public: \
	DECLARE_CLASS(UBaseInteractor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseInteractor)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseInteractor(); \
	friend struct Z_Construct_UClass_UBaseInteractor_Statics; \
public: \
	DECLARE_CLASS(UBaseInteractor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseInteractor)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseInteractor(UBaseInteractor&&); \
	NO_API UBaseInteractor(const UBaseInteractor&); \
public:


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseInteractor(UBaseInteractor&&); \
	NO_API UBaseInteractor(const UBaseInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseInteractor)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_16_PROLOG
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_RPC_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_INCLASS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_INCLASS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIARCHITECTUREPROTO_API UClass* StaticClass<class UBaseInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
