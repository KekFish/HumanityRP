////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\RF\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:08 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class FS_RF_Jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "RF Fighter Equipment";
		descriptionShort = "Lightweight vest";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2300;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,6};
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
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.7;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.7;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.7;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.7;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.7;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.7;
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
	class FS_RF_Jacket_VKPO: FS_RF_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
	};
};
