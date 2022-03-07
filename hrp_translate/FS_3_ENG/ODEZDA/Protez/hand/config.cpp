////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Protez\hand\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
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
	class FS_Protez_Ruka: WorkingGloves_Black
	{
		scope = 2;
		displayName = "Hand prosthesis";
		descriptionShort = "Scientists have created a special prosthesis";
		
		inventorySlot[] = {"Gloves"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		rotationFlags = 17;
		weight = 130;
		itemSize[] = {2,2};
		absorbency = 1;
		heatIsolation = 0.3;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1550;
					
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
};
