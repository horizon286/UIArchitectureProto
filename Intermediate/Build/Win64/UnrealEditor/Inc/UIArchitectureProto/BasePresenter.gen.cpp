// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/BasePresenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePresenter() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UIARCHITECTUREPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FUIParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseViewWidget_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseInteractor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBasePresenter::execIsOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePresenter::execCloseView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePresenter::execOpenView)
	{
		P_GET_STRUCT(FUIParams,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenView(Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePresenter::execCreateInteractorObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInteractorObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasePresenter::execCreateViewObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateViewObject();
		P_NATIVE_END;
	}
	void UBasePresenter::StaticRegisterNativesUBasePresenter()
	{
		UClass* Class = UBasePresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseView", &UBasePresenter::execCloseView },
			{ "CreateInteractorObject", &UBasePresenter::execCreateInteractorObject },
			{ "CreateViewObject", &UBasePresenter::execCreateViewObject },
			{ "IsOpened", &UBasePresenter::execIsOpened },
			{ "OpenView", &UBasePresenter::execOpenView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasePresenter_CloseView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePresenter_CloseView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePresenter_CloseView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePresenter, nullptr, "CloseView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePresenter_CloseView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_CloseView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePresenter_CloseView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePresenter_CloseView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Instantiates Interactor for this UI\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
		{ "ToolTip", "<summary>\nInstantiates Interactor for this UI\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePresenter, nullptr, "CreateInteractorObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePresenter_CreateInteractorObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePresenter_CreateInteractorObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Instantiates View of this UI if necessary and adds it to viewport with Collapsed visibility\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
		{ "ToolTip", "<summary>\nInstantiates View of this UI if necessary and adds it to viewport with Collapsed visibility\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePresenter, nullptr, "CreateViewObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePresenter_CreateViewObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePresenter_CreateViewObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePresenter_IsOpened_Statics
	{
		struct BasePresenter_eventIsOpened_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasePresenter_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasePresenter_eventIsOpened_Parms), &Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePresenter, nullptr, "IsOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::BasePresenter_eventIsOpened_Parms), Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePresenter_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePresenter_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasePresenter_OpenView_Statics
	{
		struct BasePresenter_eventOpenView_Parms
		{
			FUIParams Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePresenter_OpenView_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePresenter_eventOpenView_Parms, Parameters), Z_Construct_UScriptStruct_FUIParams, METADATA_PARAMS(nullptr, 0) }; // 1198295005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePresenter_OpenView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePresenter_OpenView_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasePresenter_OpenView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePresenter_OpenView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasePresenter, nullptr, "OpenView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBasePresenter_OpenView_Statics::BasePresenter_eventOpenView_Parms), Z_Construct_UFunction_UBasePresenter_OpenView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_OpenView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasePresenter_OpenView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePresenter_OpenView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasePresenter_OpenView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePresenter_OpenView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePresenter);
	UClass* Z_Construct_UClass_UBasePresenter_NoRegister()
	{
		return UBasePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UBasePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewClassType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ViewClassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorClassType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractorClassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UIIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasePresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePresenter_CloseView, "CloseView" }, // 1376167395
		{ &Z_Construct_UFunction_UBasePresenter_CreateInteractorObject, "CreateInteractorObject" }, // 3099232072
		{ &Z_Construct_UFunction_UBasePresenter_CreateViewObject, "CreateViewObject" }, // 3938346246
		{ &Z_Construct_UFunction_UBasePresenter_IsOpened, "IsOpened" }, // 1912139470
		{ &Z_Construct_UFunction_UBasePresenter_OpenView, "OpenView" }, // 3148904236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BasePresenter.h" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewClassType_MetaData[] = {
		{ "Category", "Subclasses" },
		{ "Comment", "// Class Types to Instantiate\n" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
		{ "ToolTip", "Class Types to Instantiate" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewClassType = { "ViewClassType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, ViewClassType), Z_Construct_UClass_UBaseViewWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewClassType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorClassType_MetaData[] = {
		{ "Category", "Subclasses" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorClassType = { "InteractorClassType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, InteractorClassType), Z_Construct_UClass_UBaseInteractor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorClassType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_UIIdentifier_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Default Setup\n" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
		{ "ToolTip", "Default Setup" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_UIIdentifier = { "UIIdentifier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, UIIdentifier), METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_UIIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_UIIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewObject_MetaData[] = {
		{ "Comment", "// Instantiated Objects\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
		{ "ToolTip", "Instantiated Objects" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewObject = { "ViewObject", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, ViewObject), Z_Construct_UClass_UBaseViewWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorObject = { "InteractorObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, InteractorObject), Z_Construct_UClass_UBaseInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePresenter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "BasePresenter" },
		{ "ModuleRelativePath", "Public/UI/BasePresenter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePresenter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasePresenter, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePresenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_UIIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_ViewObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_InteractorObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePresenter_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePresenter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePresenter_Statics::ClassParams = {
		&UBasePresenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBasePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePresenter()
	{
		if (!Z_Registration_Info_UClass_UBasePresenter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePresenter.OuterSingleton, Z_Construct_UClass_UBasePresenter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasePresenter.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UBasePresenter>()
	{
		return UBasePresenter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePresenter);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePresenter, UBasePresenter::StaticClass, TEXT("UBasePresenter"), &Z_Registration_Info_UClass_UBasePresenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePresenter), 533726358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_1466525622(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BasePresenter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
