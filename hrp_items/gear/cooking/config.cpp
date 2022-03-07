class cfgPatches
{
	class HumanityRP_itemsize_Cooking
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Cooking"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class PortableGasStove: Inventory_Base
	{
		repairableWithKits[] = {5};
		repairCosts[] = {25};
		itemSize[] = {2,3};
		weight = 42;
	};
	class PortableGasLamp: Inventory_Base
	{
		repairableWithKits[] = {5};
		repairCosts[] = {25};
		itemSize[] = {2,3};
		weight = 42;
	};
	class Tripod: Inventory_Base
	{
		itemSize[] = {1,5};
		weight = 330;
	};
};
