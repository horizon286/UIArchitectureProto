// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIARCHITECTUREPROTO_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define UIARCHITECTUREPROTO_GameHUD_generated_h

#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_SPARSE_DATA
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterOpenUI); \
	DECLARE_FUNCTION(execRegisterOpenUI); \
	DECLARE_FUNCTION(execCreatePresenters);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterOpenUI); \
	DECLARE_FUNCTION(execRegisterOpenUI); \
	DECLARE_FUNCTION(execCreatePresenters);


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIArchitectureProto"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public:


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD)


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_23_PROLOG
#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_RPC_WRAPPERS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_INCLASS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_SPARSE_DATA \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_INCLASS_NO_PURE_DECLS \
	FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIARCHITECTUREPROTO_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h


#define FOREACH_ENUM_ECONFIRMCHOICE(op) \
	op(EConfirmChoice::Yes) \
	op(EConfirmChoice::No) 

enum class EConfirmChoice : uint8;
template<> UIARCHITECTUREPROTO_API UEnum* StaticEnum<EConfirmChoice>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
