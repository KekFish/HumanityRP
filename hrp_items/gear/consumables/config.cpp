class cfgPatches
{
	class HumanityRP_itemsize_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Consumables"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Rag: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 5;
	};
	class Roadflare: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 12;
	};
	class Chemlight_ColorBase: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 5;
	};
	class LargeGasCanister: Inventory_Base
	{
		itemSize[] = {2,3};
		weight = 85;
	};
	class MediumGasCanister: Inventory_Base
	{
		itemSize[] = {2,2};
		weight = 55;
	};
	class SmallGasCanister: Inventory_Base
	{
		itemSize[] = {2,1};
		weight = 40;
	};
	class Hook: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 1;
	};
	class BoneHook: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 1;
	};
	class Bait: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 1;
	};
	class BoneBait: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 2;
	};
	class Netting: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 10;
	};
	class WoodenPlank: Inventory_Base
	{
		varQuantityInit=20;
		varStackMax=20;
	};
};
