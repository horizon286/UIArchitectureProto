// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/BaseViewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseViewWidget() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UEnum* Z_Construct_UEnum_UIArchitectureProto_EViewType();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseViewWidget_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseViewWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewType;
	static UEnum* EViewType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIArchitectureProto_EViewType, Z_Construct_UPackage__Script_UIArchitectureProto(), TEXT("EViewType"));
		}
		return Z_Registration_Info_UEnum_EViewType.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UEnum* StaticEnum<EViewType>()
	{
		return EViewType_StaticEnum();
	}
	struct Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enumerators[] = {
		{ "EViewType::HudElement", (int64)EViewType::HudElement },
		{ "EViewType::Screen", (int64)EViewType::Screen },
		{ "EViewType::Dialog", (int64)EViewType::Dialog },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dialog.DisplayName", "Dialog" },
		{ "Dialog.Name", "EViewType::Dialog" },
		{ "HudElement.DisplayName", "HUD" },
		{ "HudElement.Name", "EViewType::HudElement" },
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
		{ "Screen.DisplayName", "Screen" },
		{ "Screen.Name", "EViewType::Screen" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIArchitectureProto,
		nullptr,
		"EViewType",
		"EViewType",
		Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UIArchitectureProto_EViewType()
	{
		if (!Z_Registration_Info_UEnum_EViewType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewType.InnerSingleton, Z_Construct_UEnum_UIArchitectureProto_EViewType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewType.InnerSingleton;
	}
	DEFINE_FUNCTION(UBaseViewWidget::execGetViewType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EViewType*)Z_Param__Result=P_THIS->GetViewType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseViewWidget::execGetDisposableOnClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisposableOnClose();
		P_NATIVE_END;
	}
	static FName NAME_UBaseViewWidget_OnOpened = FName(TEXT("OnOpened"));
	void UBaseViewWidget::OnOpened()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseViewWidget_OnOpened),NULL);
	}
	void UBaseViewWidget::StaticRegisterNativesUBaseViewWidget()
	{
		UClass* Class = UBaseViewWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisposableOnClose", &UBaseViewWidget::execGetDisposableOnClose },
			{ "GetViewType", &UBaseViewWidget::execGetViewType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics
	{
		struct BaseViewWidget_eventGetDisposableOnClose_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseViewWidget_eventGetDisposableOnClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseViewWidget_eventGetDisposableOnClose_Parms), &Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseViewWidget, nullptr, "GetDisposableOnClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::BaseViewWidget_eventGetDisposableOnClose_Parms), Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics
	{
		struct BaseViewWidget_eventGetViewType_Parms
		{
			EViewType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseViewWidget_eventGetViewType_Parms, ReturnValue), Z_Construct_UEnum_UIArchitectureProto_EViewType, METADATA_PARAMS(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue_MetaData)) }; // 2103621237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseViewWidget, nullptr, "GetViewType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::BaseViewWidget_eventGetViewType_Parms), Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseViewWidget_GetViewType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseViewWidget_GetViewType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseViewWidget, nullptr, "OnOpened", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseViewWidget_OnOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseViewWidget_OnOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseViewWidget);
	UClass* Z_Construct_UClass_UBaseViewWidget_NoRegister()
	{
		return UBaseViewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseViewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisposableOnClose_MetaData[];
#endif
		static void NewProp_bDisposableOnClose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisposableOnClose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseViewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseViewWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseViewWidget_GetDisposableOnClose, "GetDisposableOnClose" }, // 2990063043
		{ &Z_Construct_UFunction_UBaseViewWidget_GetViewType, "GetViewType" }, // 1723599577
		{ &Z_Construct_UFunction_UBaseViewWidget_OnOpened, "OnOpened" }, // 3786376015
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseViewWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BaseViewWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
	void Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose_SetBit(void* Obj)
	{
		((UBaseViewWidget*)Obj)->bDisposableOnClose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose = { "bDisposableOnClose", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseViewWidget), &Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType_MetaData[] = {
		{ "Category", "Default Settings" },
		{ "ModuleRelativePath", "Public/UI/BaseViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseViewWidget, ViewType), Z_Construct_UEnum_UIArchitectureProto_EViewType, METADATA_PARAMS(Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType_MetaData)) }; // 2103621237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseViewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_bDisposableOnClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseViewWidget_Statics::NewProp_ViewType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseViewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseViewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseViewWidget_Statics::ClassParams = {
		&UBaseViewWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseViewWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseViewWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseViewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseViewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseViewWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseViewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseViewWidget.OuterSingleton, Z_Construct_UClass_UBaseViewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseViewWidget.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UBaseViewWidget>()
	{
		return UBaseViewWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseViewWidget);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::EnumInfo[] = {
		{ EViewType_StaticEnum, TEXT("EViewType"), &Z_Registration_Info_UEnum_EViewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103621237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseViewWidget, UBaseViewWidget::StaticClass, TEXT("UBaseViewWidget"), &Z_Registration_Info_UClass_UBaseViewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseViewWidget), 4166287068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_2730375086(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseViewWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
