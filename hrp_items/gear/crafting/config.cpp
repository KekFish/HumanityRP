class cfgPatches
{
	class HumanityRP_itemsize_Crafting
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Crafting"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class BurlapSack: Inventory_Base
	{
		itemSize[] = {2,2};
		weight = 127;
	};
	class Rope: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 70;
	};
	class MetalWire: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 42;
	};
	class HandDrillKit: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 20;
	};
};
