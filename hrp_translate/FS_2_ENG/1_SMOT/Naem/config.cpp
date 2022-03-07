////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\Naem\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:07 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class BallisticHelmet_Green;
	class NVGoggles;
	class FS_Naem_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Mercenary's equipment";
		descriptionShort = "Mercenary equipment------------------ FIDOv STALKER PACK MOD";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1200;
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,6};
		quickBarBonus = 5;
		heatIsolation = 0.6;
		absorbency = 0.1;
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
					hitpoints = 200;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
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
	class FS_Naem_Jacket_Standart: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_BlueCamo: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_GreenCamo: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_CamoSword: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_CamoNRF: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_CamoUK: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Jacket_CamoUS: FS_Naem_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "Mercenary Stockings";
		descriptionShort = "Regular Mercenary Pants";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		weight = 1200;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.6;
		visibilityModifier = 0.95;
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
					hitpoints = 200;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
			};
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
	class FS_Naem_Pants_Standart: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_BlueCamo: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_GreenCamo: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_CamoSword: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_CamoNRF: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_CamoUK: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Naem_Pants_CamoUS: FS_Naem_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
};
