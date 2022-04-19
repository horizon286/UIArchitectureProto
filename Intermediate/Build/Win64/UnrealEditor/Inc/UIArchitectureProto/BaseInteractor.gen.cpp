// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/BaseInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInteractor() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseInteractor_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseInteractor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBasePresenter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseInteractor::execInitializeInteractor)
	{
		P_GET_OBJECT(UBasePresenter,Z_Param_PresenterObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeInteractor(Z_Param_PresenterObject);
		P_NATIVE_END;
	}
	void UBaseInteractor::StaticRegisterNativesUBaseInteractor()
	{
		UClass* Class = UBaseInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeInteractor", &UBaseInteractor::execInitializeInteractor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics
	{
		struct BaseInteractor_eventInitializeInteractor_Parms
		{
			UBasePresenter* PresenterObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresenterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::NewProp_PresenterObject = { "PresenterObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseInteractor_eventInitializeInteractor_Parms, PresenterObject), Z_Construct_UClass_UBasePresenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::NewProp_PresenterObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BaseInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInteractor, nullptr, "InitializeInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::BaseInteractor_eventInitializeInteractor_Parms), Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseInteractor_InitializeInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInteractor_InitializeInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseInteractor);
	UClass* Z_Construct_UClass_UBaseInteractor_NoRegister()
	{
		return UBaseInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UBaseInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseInteractor_InitializeInteractor, "InitializeInteractor" }, // 650021246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseInteractor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BaseInteractor.h" },
		{ "ModuleRelativePath", "Public/UI/BaseInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseInteractor_Statics::ClassParams = {
		&UBaseInteractor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseInteractor()
	{
		if (!Z_Registration_Info_UClass_UBaseInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseInteractor.OuterSingleton, Z_Construct_UClass_UBaseInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseInteractor.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UBaseInteractor>()
	{
		return UBaseInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseInteractor);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseInteractor, UBaseInteractor::StaticClass, TEXT("UBaseInteractor"), &Z_Registration_Info_UClass_UBaseInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseInteractor), 1650998878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_1585727412(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
