////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Predmet\SoiverKruzka\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[] = {"Drink_Canteen","Drink_SodaZlutaKlasik","Drink_SodaZlutaKolaloka","Drink_SodaZlutaMalinovka","Drink_WaterBottle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Canteen;
	class Bottle_Base;
	class FS_SoivetKruzka: Canteen
	{
		scope = 2;
		displayName = "Cup";
		descriptionShort = "Military enamel mug";
		
		inventorySlot[] = {"Belt_Left"};
		weight = 71;
		itemSize[] = {1,1};
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		isMeleeWeapon = 1;
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet = "Canteen_in_B_SoundSet";
					id = 202;
				};
				class Canteen_in_C
				{
					soundSet = "Canteen_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class Canteen_out_A
				{
					soundSet = "Canteen_out_A_SoundSet";
					id = 205;
				};
				class Canteen_out_B
				{
					soundSet = "Canteen_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
};
