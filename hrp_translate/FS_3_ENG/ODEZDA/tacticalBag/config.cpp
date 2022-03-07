////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\tacticalBag\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CargoPants_Beige;
	class HuntingJacket_Autumn;
	class TortillaBag;
	class FS_Tactical_bag_ColorBase: TortillaBag
	{
		scope = 0;
		displayName = "Tactical Backpack";
		descriptionShort = "Convenient military backpack.";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Belt_Back","VestHolster","VestPouch","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD","Chemlight","WalkieTalkie"};
		rotationFlags = 16;
		itemSize[] = {5,5};
		itemsCargoSize[] = {7,8};
		weight = 1700;
		absorbency = 1;
		heatIsolation = 0.08;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			
			
		};
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_TacticalBag_Tan: FS_Tactical_bag_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack Sand";
		
	};
	class FS_TacticalBag_Black: FS_Tactical_bag_ColorBase
	{
		scope = 2;
		displayName = "Black Tactical Backpack";
		
	};
	class FS_TacticalBag_DOLG: FS_Tactical_bag_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack Long";
		
	};
	class FS_TacticalBag_Green: FS_Tactical_bag_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack Green";
		
	};
	class FS_TacticalBag_monolit: FS_Tactical_bag_ColorBase
	{
		scope = 2;
		displayName = "Monolith Tactical Backpack";
		
	};
};
