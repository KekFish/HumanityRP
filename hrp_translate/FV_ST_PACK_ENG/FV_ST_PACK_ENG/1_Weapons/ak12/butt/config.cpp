////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Weapons\ak12\butt\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:51 2020 : 'file' last modified on Tue Jun 02 00:10:28 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class AK_WoodHndgrd;
	class GhillieAtt_Tan;
	class AK_WoodBttstck;
	class AK_RailHndgrd;
	class M4_MPBttstck;
	class M4_OEBttstck;
	class FS_AK12_Buttstock: M4_OEBttstck
	{
		scope = 2;
		displayName = "AK12 ButtStock";
		descriptionShort = "Ak12 ButtStock connect m4 buttstock series";
		
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponButtstockM4";
		weight = 374;
		itemSize[] = {1,3};
		dispersionModifier = -0.0004;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		
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
		isMeleeWeapon = 1;
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
