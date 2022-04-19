// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIArchitectureProto/Public/UI/UIParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIParams() {}
// Cross Module References
	UIARCHITECTUREPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FUIParams();
	UPackage* Z_Construct_UPackage__Script_UIArchitectureProto();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIParams;
class UScriptStruct* FUIParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIParams, Z_Construct_UPackage__Script_UIArchitectureProto(), TEXT("UIParams"));
	}
	return Z_Registration_Info_UScriptStruct_UIParams.OuterSingleton;
}
template<> UIARCHITECTUREPROTO_API UScriptStruct* StaticStruct<FUIParams>()
{
	return FUIParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/UI/UIParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIArchitectureProto,
		nullptr,
		&NewStructOps,
		"UIParams",
		sizeof(FUIParams),
		alignof(FUIParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIParams()
	{
		if (!Z_Registration_Info_UScriptStruct_UIParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIParams.InnerSingleton, Z_Construct_UScriptStruct_FUIParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_UIParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_UIParams_h_Statics::ScriptStructInfo[] = {
		{ FUIParams::StaticStruct, Z_Construct_UScriptStruct_FUIParams_Statics::NewStructOps, TEXT("UIParams"), &Z_Registration_Info_UScriptStruct_UIParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIParams), 1198295005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_UIParams_h_586251185(TEXT("/Script/UIArchitectureProto"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_UIParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UIArchitectureProto_Source_UIArchitectureProto_Public_UI_UIParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
