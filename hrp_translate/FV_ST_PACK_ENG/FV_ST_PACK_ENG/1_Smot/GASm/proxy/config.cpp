////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Smot\GASm\proxy\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:48 2020 : 'file' last modified on Tue Jun 02 00:10:27 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Tools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class FS_GasFilter: Inventory_Base
	{
		scope = 2;
		displayName = "Gas mask filter";
		descriptionShort = "Filter For Gas Mask FIDOv STALKER PACK";
		
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		inventorySlot[] = {"fil"};
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class FS_GasFilter_GP5: Inventory_Base
	{
		scope = 2;
		displayName = "Gas mask filter";
		descriptionShort = "Filter For Gas Mask FIDOv STALKER PACK";
		
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		inventorySlot[] = {"fil"};
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
