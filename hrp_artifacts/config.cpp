class CfgPatches
{
    class hrp_artifacts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Gear_Containers","hrp_core"
        };
    };
};

class CfgMods
{
	class hrp_artifacts
	{
		dir = "HumanityRP";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "hrp_core";
		credits = "KekFish";
		author = "KekFish";
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_artifacts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_artifacts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_artifacts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class MilitaryBelt;
	class DayZRPArts_Base: Inventory_Base
	{
		itemSize[]={20,20};
	};
	class ArtifactBelt: MilitaryBelt
	{

		attachments[] = {"ART","ART2","ART3"};

	};
	
	

};