////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Rounds\ammo\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:18 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Ammunition
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class Ammo_762x54;
	class Ammo_380;
	class Ammo_9x39;
	class Ammo_GrenadeM4;
	class Ammo_PowerGaus: Ammunition_Base
	{
		scope = 2;
		displayName = "Gauss Cannon Battery Plates";
		descriptionShort = "Required for battery charging ";
		
		iconCartridge = 3;
		weight = 25;
		count = 10;
		ammo = "Bullet_PowerGaus";
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
	};
};
