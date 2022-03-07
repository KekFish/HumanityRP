class CfgPatches
{
	class HRP_Armbands
	{
		
		units[]=
		{
			"HRP_TAG_Veteran",
			"HRP_TAG_NamalskCorp",
			"HRP_TAG_Ivan",
			"HRP_TAG_NLC",
			"HRP_TAG_5G",
			"FS_TAG_renegati",
			"FS_TAG_ARMY_MEDIC",
			"HRP_TAG_WOLVES"

		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class FS_TAG_monolit;
	class HRP_TAG_Veteran: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\VETERAN_Armband.paa"};

	};
	class HRP_TAG_NamalskCorp: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\NAMALSKCORP_Armband.paa"};

	};
	class HRP_TAG_Ivan: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\IVAN_Armband.paa"};

	};
	class HRP_TAG_NLC: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\NLC_Armband.paa"};

	};
	class HRP_TAG_5G: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\5G_Armband.paa"};

	};
	class HRP_TAG_WOLVES: FS_TAG_monolit
	{

		scope = 2;
		hiddenSelectionsTextures[] = {"\HumanityRP\hrp_items\characters\armbands\Wolves_Armband.paa"};

	};

    
};