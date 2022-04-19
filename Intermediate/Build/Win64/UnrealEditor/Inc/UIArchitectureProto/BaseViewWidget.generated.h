// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EViewType : uint8;
#ifdef UIARCHITECTUREPROTO_BaseViewWidget_generated_h
#error "BaseViewWidget.generated.h already included, missing '#pragma once' in BaseViewWidget.h"
#endif
#define UIARCHITECTUREPROTO_BaseViewWidget_generated_h

#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_SPARSE_DATA
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetViewType); \
	DECLARE_FUNCTION(execGetDisposableOnClose);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetViewType); \
	DECLARE_FUNCTION(execGetDisposableOnClose);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_EVENT_PARMS
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_CALLBACK_WRAPPERS
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseViewWidget(); \
	friend struct Z_Construct_UClass_UBaseViewWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseViewWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseViewWidget)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBaseViewWidget(); \
	friend struct Z_Construct_UClass_UBaseViewWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseViewWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(UBaseViewWidget)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseViewWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseViewWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseViewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseViewWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseViewWidget(UBaseViewWidget&&); \
	NO_API UBaseViewWidget(const UBaseViewWidget&); \
public:


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseViewWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseViewWidget(UBaseViewWidget&&); \
	NO_API UBaseViewWidget(const UBaseViewWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseViewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseViewWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseViewWidget)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_22_PROLOG \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_EVENT_PARMS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_RPC_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_CALLBACK_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_INCLASS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_CALLBACK_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_INCLASS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIARCHITECTUREPROTO_API UClass* StaticClass<class UBaseViewWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h


#define FOREACH_ENUM_EVIEWTYPE(op) \
	op(EViewType::HudElement) \
	op(EViewType::Screen) \
	op(EViewType::Dialog) 

enum class EViewType : uint8;
template<> UIARCHITECTUREPROTO_API UEnum* StaticEnum<EViewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
