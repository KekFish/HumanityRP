class CfgPatches
{
	class hrp_seasons_units
	{
		units[] = {};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class hrp_seasons
	{	dir="hrp_seasons/";
		credits="KekFish";
		author="KekFish";
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[]=
				{
					"HumanityRP/hrp_seasons/scripts/Common","HumanityRP/hrp_seasons/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[]=
				{
					"HumanityRP/hrp_seasons/scripts/Common","HumanityRP/hrp_seasons/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"HumanityRP/hrp_seasons/scripts/Common","HumanityRP/hrp_seasons/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	#define HRP_SPRING

	#ifdef HRP_WINTER
	class Inventory_Base;
	class SeedBase: Inventory_Base
	{

		inventorySlot[]=
		{
			
		};

	};
	class FireplaceBase: Inventory_Base
	{
		
		varTemperatureMax=700;
	};
	class FBF_FireplaceBase: Inventory_Base
	{
		
		varTemperatureMax = 700;
	};
	#endif
	#ifdef HRP_SPRING
	class Inventory_Base;
	class FireplaceBase: Inventory_Base
	{
	
		varTemperatureMax=300;
		
	};
	class FBF_FireplaceBase: Inventory_Base
	{
		
		varTemperatureMax = 300;
		
	};
	
	#endif
	

};
