class CfgPatches
{
	class HumanityRP_Warzywka
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{"DZ_Data"};
	};
};
class CfgMods
{
	class HumanityRP
	{
		dir="HumanityRP/";
		author="KekFish";
		type="mod";
		dependencies[]={};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class PlantMaterial: Inventory_Base
	{
		class Horticulture
		{
			AddEnergyToSlot=0.1;
		};
	};
};

