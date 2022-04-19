// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UEnum* Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_AGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConfirmChoice;
	static UEnum* EConfirmChoice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConfirmChoice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConfirmChoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice, Z_Construct_UPackage__Script_UIArchitectureProto(), TEXT("EConfirmChoice"));
		}
		return Z_Registration_Info_UEnum_EConfirmChoice.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UEnum* StaticEnum<EConfirmChoice>()
	{
		return EConfirmChoice_StaticEnum();
	}
	struct Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enumerators[] = {
		{ "EConfirmChoice::Yes", (int64)EConfirmChoice::Yes },
		{ "EConfirmChoice::No", (int64)EConfirmChoice::No },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
		{ "No.DisplayName", "Secondary Button" },
		{ "No.Name", "EConfirmChoice::No" },
		{ "Yes.DisplayName", "Primary Button" },
		{ "Yes.Name", "EConfirmChoice::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIArchitectureProto,
		nullptr,
		"EConfirmChoice",
		"EConfirmChoice",
		Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice()
	{
		if (!Z_Registration_Info_UEnum_EConfirmChoice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConfirmChoice.InnerSingleton, Z_Construct_UEnum_UIArchitectureProto_EConfirmChoice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConfirmChoice.InnerSingleton;
	}
	DEFINE_FUNCTION(AGameHUD::execUnregisterOpenUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterOpenUI(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameHUD::execRegisterOpenUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterOpenUI(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameHUD::execCreatePresenters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePresenters();
		P_NATIVE_END;
	}
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
		UClass* Class = AGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePresenters", &AGameHUD::execCreatePresenters },
			{ "RegisterOpenUI", &AGameHUD::execRegisterOpenUI },
			{ "UnregisterOpenUI", &AGameHUD::execUnregisterOpenUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameHUD, nullptr, "CreatePresenters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameHUD_CreatePresenters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameHUD_CreatePresenters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics
	{
		struct GameHUD_eventRegisterOpenUI_Parms
		{
			FString Identifier;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventRegisterOpenUI_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameHUD, nullptr, "RegisterOpenUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::GameHUD_eventRegisterOpenUI_Parms), Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameHUD_RegisterOpenUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameHUD_RegisterOpenUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics
	{
		struct GameHUD_eventUnregisterOpenUI_Parms
		{
			FString Identifier;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventUnregisterOpenUI_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameHUD, nullptr, "UnregisterOpenUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::GameHUD_eventUnregisterOpenUI_Parms), Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameHUD_UnregisterOpenUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameHUD_UnregisterOpenUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameHUD);
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PresentersToCreate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresentersToCreate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PresentersToCreate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresenterObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenterObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PresenterObjects;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OpenUIIdentifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenUIIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenUIIdentifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameHUD_CreatePresenters, "CreatePresenters" }, // 3948800321
		{ &Z_Construct_UFunction_AGameHUD_RegisterOpenUI, "RegisterOpenUI" }, // 1992288882
		{ &Z_Construct_UFunction_AGameHUD_UnregisterOpenUI, "UnregisterOpenUI" }, // 1393040163
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/GameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "Comment", "// Class Types\n" },
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
		{ "ToolTip", "Class Types" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameHUD, OverlayWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate_Inner = { "PresentersToCreate", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBasePresenter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate = { "PresentersToCreate", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameHUD, PresentersToCreate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects_Inner = { "PresenterObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBasePresenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects = { "PresenterObjects", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameHUD, PresenterObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers_Inner = { "OpenUIIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers = { "OpenUIIdentifiers", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameHUD, OpenUIIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_PresentersToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_PresenterObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OpenUIIdentifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameHUD()
	{
		if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::EnumInfo[] = {
		{ EConfirmChoice_StaticEnum, TEXT("EConfirmChoice"), &Z_Registration_Info_UEnum_EConfirmChoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1741159131U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 3120590238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_3263355581(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_GameHUD_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
