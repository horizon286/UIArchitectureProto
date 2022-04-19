// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Interactors/EscapeMenuInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMenuInteractor() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuInteractor_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuInteractor();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseInteractor();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void UEscapeMenuInteractor::StaticRegisterNativesUEscapeMenuInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEscapeMenuInteractor);
	UClass* Z_Construct_UClass_UEscapeMenuInteractor_NoRegister()
	{
		return UEscapeMenuInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeMenuInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeMenuInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Interactors/EscapeMenuInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Interactors/EscapeMenuInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeMenuInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeMenuInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEscapeMenuInteractor_Statics::ClassParams = {
		&UEscapeMenuInteractor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeMenuInteractor()
	{
		if (!Z_Registration_Info_UClass_UEscapeMenuInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEscapeMenuInteractor.OuterSingleton, Z_Construct_UClass_UEscapeMenuInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEscapeMenuInteractor.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UEscapeMenuInteractor>()
	{
		return UEscapeMenuInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeMenuInteractor);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_EscapeMenuInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_EscapeMenuInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEscapeMenuInteractor, UEscapeMenuInteractor::StaticClass, TEXT("UEscapeMenuInteractor"), &Z_Registration_Info_UClass_UEscapeMenuInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEscapeMenuInteractor), 1979209060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_EscapeMenuInteractor_h_3200136131(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_EscapeMenuInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Interactors_EscapeMenuInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
