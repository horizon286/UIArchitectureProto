// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIARCHITECTUREPROTO_EscapeMenuPresenter_generated_h
#error "EscapeMenuPresenter.generated.h already included, missing '#pragma once' in EscapeMenuPresenter.h"
#endif
#define UIARCHITECTUREPROTO_EscapeMenuPresenter_generated_h

#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_SPARSE_DATA
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleEscapeMenu); \
	DECLARE_FUNCTION(execOnQuitButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnResumeButtonClicked); \
	DECLARE_FUNCTION(execGetResumeTextProperty); \
	DECLARE_FUNCTION(execSetResumeTextProperty);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleEscapeMenu); \
	DECLARE_FUNCTION(execOnQuitButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnResumeButtonClicked); \
	DECLARE_FUNCTION(execGetResumeTextProperty); \
	DECLARE_FUNCTION(execSetResumeTextProperty);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEscapeMenuPresenter(); \
	friend struct Z_Construct_UClass_UEscapeMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UEscapeMenuPresenter, UBasePresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UEscapeMenuPresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEscapeMenuPresenter(); \
	friend struct Z_Construct_UClass_UEscapeMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UEscapeMenuPresenter, UBasePresenter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UEscapeMenuPresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEscapeMenuPresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEscapeMenuPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEscapeMenuPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscapeMenuPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEscapeMenuPresenter(UEscapeMenuPresenter&&); \
	NO_API UEscapeMenuPresenter(const UEscapeMenuPresenter&); \
public:


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEscapeMenuPresenter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEscapeMenuPresenter(UEscapeMenuPresenter&&); \
	NO_API UEscapeMenuPresenter(const UEscapeMenuPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEscapeMenuPresenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscapeMenuPresenter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEscapeMenuPresenter)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_12_PROLOG
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_RPC_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_INCLASS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_INCLASS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIARCHITECTUREPROTO_API UClass* StaticClass<class UEscapeMenuPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
