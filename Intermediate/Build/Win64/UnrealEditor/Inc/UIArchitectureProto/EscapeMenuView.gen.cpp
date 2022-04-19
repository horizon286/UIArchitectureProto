// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Views/EscapeMenuView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMenuView() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuView_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UEscapeMenuView();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseViewWidget();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UEscapeMenuView::StaticRegisterNativesUEscapeMenuView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEscapeMenuView);
	UClass* Z_Construct_UClass_UEscapeMenuView_NoRegister()
	{
		return UEscapeMenuView::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeMenuView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeMenuView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseViewWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Views/EscapeMenuView.h" },
		{ "ModuleRelativePath", "Public/UI/Views/EscapeMenuView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EscapeMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/EscapeMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeText = { "ResumeText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeMenuView, ResumeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EscapeMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/EscapeMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeMenuView, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_SettingsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EscapeMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/EscapeMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_SettingsButton = { "SettingsButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeMenuView, SettingsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_SettingsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_SettingsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EscapeMenuView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/EscapeMenuView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscapeMenuView, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_QuitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscapeMenuView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_ResumeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_SettingsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeMenuView_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeMenuView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeMenuView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEscapeMenuView_Statics::ClassParams = {
		&UEscapeMenuView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEscapeMenuView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeMenuView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMenuView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeMenuView()
	{
		if (!Z_Registration_Info_UClass_UEscapeMenuView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEscapeMenuView.OuterSingleton, Z_Construct_UClass_UEscapeMenuView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEscapeMenuView.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UEscapeMenuView>()
	{
		return UEscapeMenuView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeMenuView);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_EscapeMenuView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_EscapeMenuView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEscapeMenuView, UEscapeMenuView::StaticClass, TEXT("UEscapeMenuView"), &Z_Registration_Info_UClass_UEscapeMenuView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEscapeMenuView), 2169799736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_EscapeMenuView_h_1596281023(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_EscapeMenuView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_EscapeMenuView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
