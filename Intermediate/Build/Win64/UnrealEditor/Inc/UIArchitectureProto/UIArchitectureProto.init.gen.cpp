// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIArchitectureProto_init() {}
	UIARCHITECTUREPROTO_API UFunction* Z_Construct_UDelegateFunction_UIArchitectureProto_OnPickUp__DelegateSignature();
	UIARCHITECTUREPROTO_API UFunction* Z_Construct_UDelegateFunction_UIArchitectureProto_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UIArchitectureProto;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UIArchitectureProto()
	{
		if (!Z_Registration_Info_UPackage__Script_UIArchitectureProto.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UIArchitectureProto_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UIArchitectureProto_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UIArchitectureProto",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x781D5796,
				0x63023D45,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UIArchitectureProto.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UIArchitectureProto.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UIArchitectureProto(Z_Construct_UPackage__Script_UIArchitectureProto, TEXT("/Script/UIArchitectureProto"), Z_Registration_Info_UPackage__Script_UIArchitectureProto, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x781D5796, 0x63023D45));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
