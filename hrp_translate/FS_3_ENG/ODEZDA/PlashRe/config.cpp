////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\PlashRe\config.bin
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
	class HuntingJacket_Autumn;
	class FS_Plash_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Cloak";
		descriptionShort = "Normal leather cloak. The carrier does not provide noticeable protection. Isn't that going to freeze at night and soften the bite of a blind dog. It is quite uncomfortable in the conditions of the Zone, but nevertheless, it is often used by bandits - perhaps only because of its appearance.";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1200;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,6};
		quickBarBonus = 4;
		heatIsolation = 0.7;
		absorbency = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.3;
					};
					class Shock
					{
						damage = 0.3;
					};
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
	class FS_Plash_beige: FS_Plash_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
		
	};
	class FS_Plash_black: FS_Plash_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
		
	};
};
