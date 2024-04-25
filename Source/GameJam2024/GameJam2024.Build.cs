// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameJam2024 : ModuleRules
{
	public GameJam2024(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
