// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Presenters/ConfirmDialogPresenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmDialogPresenter() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogPresenter_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogPresenter();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	DEFINE_FUNCTION(UConfirmDialogPresenter::execOnNoClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNoClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirmDialogPresenter::execOnYesClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYesClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirmDialogPresenter::execSetNoTextProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoTextProperty(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirmDialogPresenter::execSetYesTextProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYesTextProperty(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirmDialogPresenter::execSetContentTextProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentTextProperty(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirmDialogPresenter::execSetHeaderTextProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeaderTextProperty(Z_Param_Value);
		P_NATIVE_END;
	}
	void UConfirmDialogPresenter::StaticRegisterNativesUConfirmDialogPresenter()
	{
		UClass* Class = UConfirmDialogPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoClicked", &UConfirmDialogPresenter::execOnNoClicked },
			{ "OnYesClicked", &UConfirmDialogPresenter::execOnYesClicked },
			{ "SetContentTextProperty", &UConfirmDialogPresenter::execSetContentTextProperty },
			{ "SetHeaderTextProperty", &UConfirmDialogPresenter::execSetHeaderTextProperty },
			{ "SetNoTextProperty", &UConfirmDialogPresenter::execSetNoTextProperty },
			{ "SetYesTextProperty", &UConfirmDialogPresenter::execSetYesTextProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "OnNoClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "OnYesClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics
	{
		struct ConfirmDialogPresenter_eventSetContentTextProperty_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfirmDialogPresenter_eventSetContentTextProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "SetContentTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::ConfirmDialogPresenter_eventSetContentTextProperty_Parms), Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics
	{
		struct ConfirmDialogPresenter_eventSetHeaderTextProperty_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfirmDialogPresenter_eventSetHeaderTextProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Setters\n" },
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
		{ "ToolTip", "Setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "SetHeaderTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::ConfirmDialogPresenter_eventSetHeaderTextProperty_Parms), Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics
	{
		struct ConfirmDialogPresenter_eventSetNoTextProperty_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfirmDialogPresenter_eventSetNoTextProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "SetNoTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::ConfirmDialogPresenter_eventSetNoTextProperty_Parms), Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics
	{
		struct ConfirmDialogPresenter_eventSetYesTextProperty_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfirmDialogPresenter_eventSetYesTextProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirmDialogPresenter, nullptr, "SetYesTextProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::ConfirmDialogPresenter_eventSetYesTextProperty_Parms), Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmDialogPresenter);
	UClass* Z_Construct_UClass_UConfirmDialogPresenter_NoRegister()
	{
		return UConfirmDialogPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UConfirmDialogPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfirmDialogPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConfirmDialogPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_OnNoClicked, "OnNoClicked" }, // 3148555216
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_OnYesClicked, "OnYesClicked" }, // 2962035584
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_SetContentTextProperty, "SetContentTextProperty" }, // 3811470725
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_SetHeaderTextProperty, "SetHeaderTextProperty" }, // 3343220251
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_SetNoTextProperty, "SetNoTextProperty" }, // 3201818428
		{ &Z_Construct_UFunction_UConfirmDialogPresenter_SetYesTextProperty, "SetYesTextProperty" }, // 1828287881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Presenters/ConfirmDialogPresenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Presenters/ConfirmDialogPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfirmDialogPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmDialogPresenter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmDialogPresenter_Statics::ClassParams = {
		&UConfirmDialogPresenter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfirmDialogPresenter()
	{
		if (!Z_Registration_Info_UClass_UConfirmDialogPresenter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmDialogPresenter.OuterSingleton, Z_Construct_UClass_UConfirmDialogPresenter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConfirmDialogPresenter.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UConfirmDialogPresenter>()
	{
		return UConfirmDialogPresenter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmDialogPresenter);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_ConfirmDialogPresenter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_ConfirmDialogPresenter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmDialogPresenter, UConfirmDialogPresenter::StaticClass, TEXT("UConfirmDialogPresenter"), &Z_Registration_Info_UClass_UConfirmDialogPresenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmDialogPresenter), 1799709530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_ConfirmDialogPresenter_h_1693118821(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_ConfirmDialogPresenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Presenters_ConfirmDialogPresenter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
