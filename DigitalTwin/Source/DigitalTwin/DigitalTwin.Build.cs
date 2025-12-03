// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DigitalTwin : ModuleRules
{
	public DigitalTwin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {"Media", "MediaUtils", "MediaAssets", "UMG", "RenderCore",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"AIModule",
				"NavigationSystem","MediaAssets",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore", 
				"EnhancedInput",
				"UMG", 
				"GameplayTags","AIModule","NavigationSystem",
				"Media", "MediaUtils", "MediaAssets", "RenderCore","LevelSequence", 
				"MovieScene",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
