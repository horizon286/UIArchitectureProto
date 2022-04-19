// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/UIArchitectureProtoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIArchitectureProtoGameMode() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_AUIArchitectureProtoGameMode_NoRegister();
	UIARCHITECTUREPROTO_API UClass* Z_Construct_UClass_AUIArchitectureProtoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	void AUIArchitectureProtoGameMode::StaticRegisterNativesAUIArchitectureProtoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUIArchitectureProtoGameMode);
	UClass* Z_Construct_UClass_AUIArchitectureProtoGameMode_NoRegister()
	{
		return AUIArchitectureProtoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UIArchitectureProtoGameMode.h" },
		{ "ModuleRelativePath", "UIArchitectureProtoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIArchitectureProtoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::ClassParams = {
		&AUIArchitectureProtoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIArchitectureProtoGameMode()
	{
		if (!Z_Registration_Info_UClass_AUIArchitectureProtoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIArchitectureProtoGameMode.OuterSingleton, Z_Construct_UClass_AUIArchitectureProtoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUIArchitectureProtoGameMode.OuterSingleton;
	}
	template<> UIARCHITECTUREPROTO_API UClass* StaticClass<AUIArchitectureProtoGameMode>()
	{
		return AUIArchitectureProtoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIArchitectureProtoGameMode);
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_UIArchitectureProtoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_UIArchitectureProtoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUIArchitectureProtoGameMode, AUIArchitectureProtoGameMode::StaticClass, TEXT("AUIArchitectureProtoGameMode"), &Z_Registration_Info_UClass_AUIArchitectureProtoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIArchitectureProtoGameMode), 3847765262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_UIArchitectureProtoGameMode_h_2716474750(TEXT("/Script/UIArchitectureProto"),
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_UIArchitectureProtoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_UIArchitectureProtoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
