////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Gloves\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:15 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Gloves
	{
		units[] = {"MaleHands","FemaleHands"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class WorkingGloves_Black;
	class FS_Tactical_Gloves_Obrub_base: WorkingGloves_Black
	{
		scope = 2;
		displayName = "Short gloves";
		descriptionShort = "...";
		
		inventorySlot[] = {"Gloves"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		rotationFlags = 17;
		weight = 130;
		itemSize[] = {2,2};
		absorbency = 1;
		heatIsolation = 0.99;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					
				};
			};
		};
		class ClothingTypes
		{
			
			
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_MiniGloves_black: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Black short gloves";
		
	};
	class FS_MiniGloves_Dolg: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Short Gloves Long";
		
	};
	class FS_MiniGloves_Dolg_TIGR: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Short Tiger Gloves";
		
		
	};
	class FS_MiniGloves_ClearSky: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Short Gloves Clear Sky";
		
	};
	class FS_MiniGloves_Odinocki: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Neutral short gloves";
		
	};
	class FS_MiniGloves_Svoboda: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Short Gloves of Freedom";
		
	};
	class FS_MiniGloves_Standart: FS_Tactical_Gloves_Obrub_base
	{
		scope = 2;
		displayName = "Short gloves";
		
	};
};
