// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIParams;
#ifdef UIARCHITECTUREPROTO_BasePresenter_generated_h
#error "BasePresenter.generated.h already included, missing '#pragma once' in BasePresenter.h"
#endif
#define UIARCHITECTUREPROTO_BasePresenter_generated_h

#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_SPARSE_DATA
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execCloseView); \
	DECLARE_FUNCTION(execOpenView); \
	DECLARE_FUNCTION(execCreateInteractorObject); \
	DECLARE_FUNCTION(execCreateViewObject);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execCloseView); \
	DECLARE_FUNCTION(execOpenView); \
	DECLARE_FUNCTION(execCreateInteractorObject); \
	DECLARE_FUNCTION(execCreateViewObject);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePresenter(); \
	friend struct Z_Construct_UClass_UBasePresenter_Statics; \
public: \
	DECLARE_CLASS(UBasePresenter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBasePresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBasePresenter(); \
	friend struct Z_Construct_UClass_UBasePresenter_Statics; \
public: \
	DECLARE_CLASS(UBasePresenter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBasePresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePresenter(UBasePresenter&&); \
	NO_API UBasePresenter(const UBasePresenter&); \
public:


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePresenter(UBasePresenter&&); \
	NO_API UBasePresenter(const UBasePresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePresenter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_18_PROLOG
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_RPC_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_INCLASS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_INCLASS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIARCHITECTUREPROTO_API UClass* StaticClass<class UBasePresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
