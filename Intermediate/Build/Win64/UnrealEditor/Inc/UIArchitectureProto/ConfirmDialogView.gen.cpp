// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/Views/ConfirmDialogView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmDialogView() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogView_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UConfirmDialogView();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_UBaseViewWidget();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UConfirmDialogView::StaticRegisterNativesUConfirmDialogView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConfirmDialogView);
	UClass* Z_Construct_UClass_UConfirmDialogView_NoRegister()
	{
		return UConfirmDialogView::StaticClass();
	}
	struct Z_Construct_UClass_UConfirmDialogView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YesText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YesButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YesButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfirmDialogView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseViewWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Views/ConfirmDialogView.h" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_HeaderText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "Comment", "// Texts\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
		{ "ToolTip", "Texts" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, HeaderText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_ContentText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_ContentText = { "ContentText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, ContentText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_ContentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_ContentText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesText = { "YesText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, YesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoText = { "NoText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, NoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "Comment", "// Buttons\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
		{ "ToolTip", "Buttons" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesButton = { "YesButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, YesButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConfirmDialogView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Views/ConfirmDialogView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoButton = { "NoButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirmDialogView, NoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirmDialogView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_HeaderText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_ContentText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_YesButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirmDialogView_Statics::NewProp_NoButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfirmDialogView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirmDialogView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConfirmDialogView_Statics::ClassParams = {
		&UConfirmDialogView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConfirmDialogView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfirmDialogView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirmDialogView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfirmDialogView()
	{
		if (!Z_Registration_Info_UClass_UConfirmDialogView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConfirmDialogView.OuterSingleton, Z_Construct_UClass_UConfirmDialogView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConfirmDialogView.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<UConfirmDialogView>()
	{
		return UConfirmDialogView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirmDialogView);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_ConfirmDialogView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_ConfirmDialogView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConfirmDialogView, UConfirmDialogView::StaticClass, TEXT("UConfirmDialogView"), &Z_Registration_Info_UClass_UConfirmDialogView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConfirmDialogView), 1099553084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_ConfirmDialogView_h_2897246944(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_ConfirmDialogView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_Views_ConfirmDialogView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
