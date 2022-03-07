class CfgPatches
{
    class hrp_core
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};

class CfgMods
{
	class hrp_core
	{
		dir = "HumanityRP";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Example";
		credits = "KekFish";
		
		author = "KekFish";
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_core/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_core/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP/hrp_core/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class DayZRPArts_Base: Inventory_Base
	{
		itemSize[]={20,20};
	};
	class Battery9V: Inventory_Base
	{
		
		varQuantityInit=100;
		varQuantityMax=100;
		
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=100;
			energyAtSpawn=100;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
		

	};
	class GasMask_Filter;
	class hrp_GasMask_Filter: GasMask_Filter
	{
		scope = 2;
		model = "\DZ\gear\consumables\GasMask_filter.p3d";
		inventorySlot[] = {"GasMaskFilter"};
		rotationFlags = 2;
		itemSize[] = {1,1};
		weight = 150;
		varQuantityInit = 250;
		varQuantityMin = 0;
		varQuantityMax = 250;
		quantityBar = 1;
		varQuantityDestroyOnMin = 0;
		varWetMax = 0.249;
		heatIsolation = 0;
		hiddenSelections[] = {"camoGround"};
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0;
		};
	};

	class Edible_Base;
	class SmallGuts: Edible_Base
	{
		
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=10;
			water=5;
			nutritionalIndex=1;
			toxicity=0;
			agents=4;
		};

	};
	class Guts: Edible_Base
	{
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=10;
			water=5;
			nutritionalIndex=1;
			toxicity=0;
			agents=4;
		};
	};
	

};