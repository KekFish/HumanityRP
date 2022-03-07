////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\Voe\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:10 2020 : 'file' last modified on Mon Jun 01 22:47:53 2020
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
	class FS_OldMilitary_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Guardsman Jacket";
		descriptionShort = "Soviet, which means quality! ---- MOD FIDOv _FS_";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1700;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,6};
		quickBarBonus = 5;
		heatIsolation = 0.7;
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
					hitpoints = 100;
					
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
	class FS_OldMilitary_Standart: FS_OldMilitary_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
	};
	class FS_OldMilitaryPants_ColorBase: CargoPants_Beige
	{
		displayName = "Guardsman Pants";
		descriptionShort = "Soviet, which means quality!";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1500;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.7;
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
					hitpoints = 100;
					
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
	class FS_OldMilitaryPants_Standart: FS_OldMilitaryPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
	};
};
