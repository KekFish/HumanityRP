class cfgPatches
{
	class HumanityRP_itemsize_Tools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Tools"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class FishingRod_Base;
	class FishingRod_Base_New: FishingRod_Base{};
	class Flashlight: Inventory_Base
	{
		itemSize[] = {2,1};
		weight = 50;
	};
	class Heatpack: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 30;
	};
	class Lockpick: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 50;
	};
	class FieldShovel: Inventory_Base
	{
		itemSize[] = {2,4};
		weight = 1375;
	};
	class Hammer: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 235;
	};
	class FishingRod: FishingRod_Base_New
	{
		itemSize[] = {1,4};
		weight = 210;
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		itemSize[] = {1,6};
		weight = 167;
	};
	class ObsoleteFishingRod: FishingRod_Base_New
	{
		itemSize[] = {1,6};
		weight = 120;
	};
	class Whetstone: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 50;
	};
	class LeatherSewingKit: Inventory_Base
	{
		itemSize[] = {1,2};
		weight = 50;
	};
	class WeaponCleaningKit: Inventory_Base
	{
		weight = 195;
		itemSize[] = {1,3};
	};
	class SewingKit: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 50;
	};
	class EpoxyPutty: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 50;
	};
	class ElectronicRepairKit: Inventory_Base
	{
		itemSize[] = {1,3};
		weight = 500;
	};
};
