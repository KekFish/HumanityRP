////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Weapons\D_AK\att\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:18 2020 : 'file' last modified on Tue Jun 02 01:39:45 2020
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
	class AK_WoodBttstck;
	class AK_WoodHndgrd;
	class FS_D_AK_WoodBttstck: AK_WoodBttstck
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_WoodBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK_WoodBttstck1";
		
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 530;
		itemSize[] = {3,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {""};
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
	class FS_D_AK_WoodHndgrd: AK_WoodHndgrd
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_WoodHndgrd0";
		descriptionShort = "$STR_cfgVehicles_AK_WoodHndgrd1";
		
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardAK"};
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {""};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					
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
