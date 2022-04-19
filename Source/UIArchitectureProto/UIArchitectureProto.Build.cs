// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UIArchitectureProto : ModuleRules
{
	public UIArchitectureProto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "SlateCore", "Slate" });
	}
}
