// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Interactors/ConfirmDialogInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmDialogInteractor() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogInteractor_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogInteractor();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseInteractor();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void UConfirmDialogInteractor::StaticRegisterNativesUConfirmDialogInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmDialogInteractor);
	UClass* Z_Construct_UClass_UConfirmDialogInteractor_NoRegister()
	{
		return UConfirmDialogInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UConfirmDialogInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfirmDialogInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogInteractor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Interactors/ConfirmDialogInteractor.h" },
		{ "ModuleRelativePath", "Public/UI/Interactors/ConfirmDialogInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfirmDialogInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmDialogInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmDialogInteractor_Statics::ClassParams = {
		&UConfirmDialogInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfirmDialogInteractor()
	{
		if (!Z_Registration_Info_UClass_UConfirmDialogInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmDialogInteractor.OuterSingleton, Z_Construct_UClass_UConfirmDialogInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConfirmDialogInteractor.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UConfirmDialogInteractor>()
	{
		return UConfirmDialogInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmDialogInteractor);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_ConfirmDialogInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_ConfirmDialogInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmDialogInteractor, UConfirmDialogInteractor::StaticClass, TEXT("UConfirmDialogInteractor"), &Z_Registration_Info_UClass_UConfirmDialogInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmDialogInteractor), 2772978088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_ConfirmDialogInteractor_h_986762029(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_ConfirmDialogInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_ConfirmDialogInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
