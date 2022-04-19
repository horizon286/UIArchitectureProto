// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/DataModels/EscapeMenuDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMenuDataModel() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuDataModel_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuDataModel();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseDataModel();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void UEscapeMenuDataModel::StaticRegisterNativesUEscapeMenuDataModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEscapeMenuDataModel);
	UClass* Z_Construct_UClass_UEscapeMenuDataModel_NoRegister()
	{
		return UEscapeMenuDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeMenuDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeMenuDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseDataModel,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuDataModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/DataModels/EscapeMenuDataModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/DataModels/EscapeMenuDataModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeMenuDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeMenuDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEscapeMenuDataModel_Statics::ClassParams = {
		&UEscapeMenuDataModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeMenuDataModel()
	{
		if (!Z_Registration_Info_UClass_UEscapeMenuDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEscapeMenuDataModel.OuterSingleton, Z_Construct_UClass_UEscapeMenuDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEscapeMenuDataModel.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UEscapeMenuDataModel>()
	{
		return UEscapeMenuDataModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeMenuDataModel);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_EscapeMenuDataModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_EscapeMenuDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEscapeMenuDataModel, UEscapeMenuDataModel::StaticClass, TEXT("UEscapeMenuDataModel"), &Z_Registration_Info_UClass_UEscapeMenuDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEscapeMenuDataModel), 3189318892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_EscapeMenuDataModel_h_2020814636(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_EscapeMenuDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_DataModels_EscapeMenuDataModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
