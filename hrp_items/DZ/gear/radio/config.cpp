class cfgPatches
{
	class HumanityRP_itemsize_Radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Radio"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Transmitter_Base: Inventory_Base
	{
		scope = 0;
	};
	class PersonalRadio: Transmitter_Base
	{
		itemSize[] = {1,2};
		weight = 42;
	};
	class Megaphone: Inventory_Base
	{
		itemSize[] = {2,2};
		weight = 600;
	};
};
