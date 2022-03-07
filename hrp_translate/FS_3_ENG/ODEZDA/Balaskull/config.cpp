////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Balaskull\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:14 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BalaclavaMask_Black;
	class FS_BalaklavaSkull_ColorBase: BalaclavaMask_Black
	{
		displayName = "Balaclava with skull";
		descriptionShort = "A special balaclava to hide your face, a piece of skull on your face, gives a more frightening appearance.";
		
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		weight = 180;
		itemSize[] = {3,2};
		ragQuantity = 1;
		absorbency = 1;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {""};
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
		class Protection
		{
			biological = 0.25;
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
	class FS_BalaklavaSkull: FS_BalaklavaSkull_ColorBase
	{
		scope = 2;
		color = "black";
		visibilityModifier = 0.85;
		
	};
};
