////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\HuntBag\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:15 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
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
	class FS_HuntBag_colorbase: TortillaBag
	{
		scope = 2;
		displayName = "Big hunting backpack";
		descriptionShort = "Perfect for hunting";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Belt_Left","Chemlight","WalkieTalkie","knife"};
		rotationFlags = 16;
		itemSize[] = {7,8};
		itemsCargoSize[] = {9,14};
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
	class FS_HuntBag_co: FS_HuntBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_HuntBag_black: FS_HuntBag_colorbase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
};
