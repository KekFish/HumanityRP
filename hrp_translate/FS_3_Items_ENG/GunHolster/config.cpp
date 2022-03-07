////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\GunHolster\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:42 2021 : 'file' last modified on Mon Dec 21 05:19:17 2020
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
	class BallisticHelmet_Green;
	class FS_GunHolsterPro: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Gun Holster Pro";
		descriptionShort = "Holster with pouch";
		
		inventorySlot[] = {"Hips"};
		attachments[] = {"pistol"};
		itemInfo[] = {"Clothing","Hips"};
		rotationFlags = 34;
		weight = 600;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,3};
		quickBarBonus = 3;
		heatIsolation = 0.3;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublicc"};
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
		class ClothingTypes
		{
			
			
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
