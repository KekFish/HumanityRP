class cfgPatches
{
	class HumanityRP_itemsize_Optics
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class Binoculars: ItemOptics
	{
		itemSize[] = {2,1};
		weight = 245;
	};
};
