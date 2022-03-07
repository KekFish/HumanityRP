class CfgPatches
{
	class hrp_mapa
	{
		units[] = {
			
		};
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class CfgMods
{
	class hrp_mapa
	{	dir="HumanityRP";
		credits="Mahauu";
		author="Mahauu";
		type = "mod";
	};
};
class CfgWorlds
{
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		mapTextureClosed="\HumanityRP\hrp_map\data\chernarus.paa";
		mapTextureOpened="\HumanityRP\hrp_map\data\mapa.paa";
		mapTextureLegend="\dz\structures\signs\tourist\data\karta_side_co.paa";
		
	};
};


