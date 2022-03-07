class CfgPatches
{
	class HumanityRP_items_hats
	{
		
		units[]=
		{
			"Hrp_BaseballCap_Ivan",
			"Hrp_BaseballCap_JD",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MSP_Clothing_Data"
		};
	};
};
class CfgVehicles
{


    class Msp_BaseballCap_Black;
	class Hrp_BaseballCap_Ivan: Msp_BaseballCap_Black
	{
		hiddenSelectionsTextures[]=
		{
		"\HumanityRP\hrp_items\characters\hats\data\Hrp_BaseballCap_Ivan.paa"
		};
	};
	class Hrp_BaseballCap_JD: Msp_BaseballCap_Black
	{
		hiddenSelectionsTextures[]=
		{
		"\HumanityRP\hrp_items\characters\hats\data\hrp_BaseballCap_JD.paa"
		};
	};
};
