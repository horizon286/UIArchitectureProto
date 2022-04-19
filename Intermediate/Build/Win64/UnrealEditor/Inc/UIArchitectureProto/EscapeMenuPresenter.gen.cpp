// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Presenters/EscapeMenuPresenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMenuPresenter() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuPresenter_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuPresenter();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	DEFINE_FUNCTION(UEscapeMenuPresenter::execToggleEscapeMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleEscapeMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeMenuPresenter::execOnQuitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeMenuPresenter::execOnSettingsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeMenuPresenter::execOnResumeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeMenuPresenter::execGetResumeTextProperty)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResumeTextProperty(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeMenuPresenter::execSetResumeTextProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResumeTextProperty(Z_Param_Value);
		P_NATIVE_END;
	}
	void UEscapeMenuPresenter::StaticRegisterNativesUEscapeMenuPresenter()
	{
		UClass* Class = UEscapeMenuPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetResumeTextProperty", &UEscapeMenuPresenter::execGetResumeTextProperty },
			{ "OnQuitButtonClicked", &UEscapeMenuPresenter::execOnQuitButtonClicked },
			{ "OnResumeButtonClicked", &UEscapeMenuPresenter::execOnResumeButtonClicked },
			{ "OnSettingsButtonClicked", &UEscapeMenuPresenter::execOnSettingsButtonClicked },
			{ "SetResumeTextProperty", &UEscapeMenuPresenter::execSetResumeTextProperty },
			{ "ToggleEscapeMenu", &UEscapeMenuPresenter::execToggleEscapeMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics
	{
		struct EscapeMenuPresenter_eventGetResumeTextProperty_Parms
		{
			FString Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeMenuPresenter_eventGetResumeTextProperty_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "GetResumeTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::EscapeMenuPresenter_eventGetResumeTextProperty_Parms), Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "OnQuitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "OnResumeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "OnSettingsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics
	{
		struct EscapeMenuPresenter_eventSetResumeTextProperty_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeMenuPresenter_eventSetResumeTextProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Resume Text\n" },
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
		{ "ToolTip", "Resume Text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "SetResumeTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::EscapeMenuPresenter_eventSetResumeTextProperty_Parms), Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeMenuPresenter, nullptr, "ToggleEscapeMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEscapeMenuPresenter);
	UClass* Z_Construct_UClass_UEscapeMenuPresenter_NoRegister()
	{
		return UEscapeMenuPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeMenuPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeMenuPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEscapeMenuPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_GetResumeTextProperty, "GetResumeTextProperty" }, // 3331941230
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_OnQuitButtonClicked, "OnQuitButtonClicked" }, // 4058729668
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_OnResumeButtonClicked, "OnResumeButtonClicked" }, // 2903651652
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_OnSettingsButtonClicked, "OnSettingsButtonClicked" }, // 3592617679
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_SetResumeTextProperty, "SetResumeTextProperty" }, // 250583746
		{ &Z_Construct_UFunction_UEscapeMenuPresenter_ToggleEscapeMenu, "ToggleEscapeMenu" }, // 3220157321
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Presenters/EscapeMenuPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Presenters/EscapeMenuPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeMenuPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeMenuPresenter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEscapeMenuPresenter_Statics::ClassParams = {
		&UEscapeMenuPresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeMenuPresenter()
	{
		if (!Z_Registration_Info_UClass_UEscapeMenuPresenter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEscapeMenuPresenter.OuterSingleton, Z_Construct_UClass_UEscapeMenuPresenter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEscapeMenuPresenter.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UEscapeMenuPresenter>()
	{
		return UEscapeMenuPresenter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeMenuPresenter);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEscapeMenuPresenter, UEscapeMenuPresenter::StaticClass, TEXT("UEscapeMenuPresenter"), &Z_Registration_Info_UClass_UEscapeMenuPresenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEscapeMenuPresenter), 4099986657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_3418351338(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_EscapeMenuPresenter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
