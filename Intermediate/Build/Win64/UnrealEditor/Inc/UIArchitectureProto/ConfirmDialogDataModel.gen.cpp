// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/DataModels/ConfirmDialogDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmDialogDataModel() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogDataModel_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogDataModel();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseDataModel();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void UConfirmDialogDataModel::StaticRegisterNativesUConfirmDialogDataModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmDialogDataModel);
	UClass* Z_Construct_UClass_UConfirmDialogDataModel_NoRegister()
	{
		return UConfirmDialogDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UConfirmDialogDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfirmDialogDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseDataModel,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogDataModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/DataModels/ConfirmDialogDataModel.h" },
		{ "ModuleRelativePath", "Public/UI/DataModels/ConfirmDialogDataModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfirmDialogDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmDialogDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmDialogDataModel_Statics::ClassParams = {
		&UConfirmDialogDataModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfirmDialogDataModel()
	{
		if (!Z_Registration_Info_UClass_UConfirmDialogDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmDialogDataModel.OuterSingleton, Z_Construct_UClass_UConfirmDialogDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConfirmDialogDataModel.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UConfirmDialogDataModel>()
	{
		return UConfirmDialogDataModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmDialogDataModel);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_ConfirmDialogDataModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_ConfirmDialogDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmDialogDataModel, UConfirmDialogDataModel::StaticClass, TEXT("UConfirmDialogDataModel"), &Z_Registration_Info_UClass_UConfirmDialogDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmDialogDataModel), 2700750369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_ConfirmDialogDataModel_h_3766445797(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_ConfirmDialogDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_ConfirmDialogDataModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
