class cfgPatches
{
	class HumanityRP_itemsize_Headgear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear"};
	};
};
class cfgVehicles
{
	class Clothing;
	class AirbornMask: Clothing
	{
		itemSize[] = {2,2};

	};
	class GP5GasMask: Clothing
	{
		itemSize[] = {2,2};

	};

};
