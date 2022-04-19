// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/BaseDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDataModel() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseDataModel_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseDataModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void UBaseDataModel::StaticRegisterNativesUBaseDataModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseDataModel);
	UClass* Z_Construct_UClass_UBaseDataModel_NoRegister()
	{
		return UBaseDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UBaseDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseDataModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/BaseDataModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/BaseDataModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseDataModel_Statics::ClassParams = {
		&UBaseDataModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseDataModel()
	{
		if (!Z_Registration_Info_UClass_UBaseDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseDataModel.OuterSingleton, Z_Construct_UClass_UBaseDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseDataModel.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UBaseDataModel>()
	{
		return UBaseDataModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseDataModel);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseDataModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseDataModel, UBaseDataModel::StaticClass, TEXT("UBaseDataModel"), &Z_Registration_Info_UClass_UBaseDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseDataModel), 1942671513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseDataModel_h_3768127205(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_BaseDataModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
