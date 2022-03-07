////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Minibag\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:16 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
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
	class FS_MiniBag_colorbase: TortillaBag
	{
		scope = 0;
		displayName = "Shoulder backpack";
		descriptionShort = "Comfortable little backpack that is worn over the shoulder.";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"melee","VestGrenadeB","Chemlight","WalkieTalkie"};
		rotationFlags = 16;
		itemSize[] = {6,3};
		itemsCargoSize[] = {10,5};
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
	class FS_MiniBag_orange: FS_MiniBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Shoulder Orange Backpack";
		
	};
	class FS_MiniBag_Red: FS_MiniBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Red backpack over shoulder";
		
	};
	class FS_MiniBag_Green: FS_MiniBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Green backpack over shoulder";
		
	};
	class FS_MiniBag_Blue: FS_MiniBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Blue backpack over shoulder";
		
	};
	class FS_MiniBag_White: FS_MiniBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Gray backpack over shoulder";
		
	};
};
