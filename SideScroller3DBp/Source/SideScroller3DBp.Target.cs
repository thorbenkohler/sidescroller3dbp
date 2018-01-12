// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SideScroller3DBpTarget : TargetRules
{
	public SideScroller3DBpTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SideScroller3DBp" } );
	}
}
