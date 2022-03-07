class cfgPatches
{
	class HumanityRP_items_tops
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class TShirt_Beige;
	class HRP_TShirt_Akram : TShirt_Beige
	{

		hiddenSelectionsTextures[]=
		{
			"\HumanityRP\hrp_items\characters\tops\data\Hrp_TShirt_Akram.paa"
		};

	};
};
