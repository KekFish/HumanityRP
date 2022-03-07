////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Predmet\probirka\config.bin
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
	class Edible_Base;
	class Vodka;
	class FS_Probirka_colorBase: Vodka
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Vodka0";
		descriptionShort = "$STR_CfgVehicles_Vodka1";
		
		weight = 51;
		itemSize[] = {1,2};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 5;
		hiddenSelections[] = {"sliz"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
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
	class FS_Probirka_Blood: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Blood test tube";
		descriptionShort = "Glass test tube, blood sample inside";
		
	};
	class FS_Probirka_Sliz: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Glass test tube";
		descriptionShort = "Glass test tube, strange slime inside";
		
	};
	class FS_Probirka_SlizBlue: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Glass test tube";
		descriptionShort = "Glass test tube, strange slime inside";
		
	};
	class FS_Probirka_SlizOrange: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Glass test tube";
		descriptionShort = "Glass test tube, strange slime inside";
		
	};
	class FS_Probirka_Poltergest: FS_Probirka_colorBase
	{
		scope = 2;
		
		displayName = "Poltergeist Sample Tube";
		hiddenSelections[] = {"sliz"};
		descriptionShort = "Strange mucus that is secreted inside the poltergeist. It may be an expensive sample, or it may not. Let's see how much scientists can give for this";
		
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySodaCan_Used: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"tripWireAttachment"};
		
	};
};
