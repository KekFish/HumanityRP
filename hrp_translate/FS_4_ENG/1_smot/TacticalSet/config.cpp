////////////////////////////////////////////////////////////////////
//DeRap: FS_4\1_smot\TacticalSet\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:35:47 2021 : 'file' last modified on Tue Oct 06 21:01:34 2020
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
	class PlateCarrierVest;
	class TortillaBag;
	class FS_TacticalVest: PlateCarrierVest
	{
		scope = 2;
		displayName = "Heavy TacticalVest";
		descriptionShort = "Plenty of pockets and ease of use. By FIDOv";
		
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		weight = 4000;
		itemSize[] = {4,4};
		itemsCargoSize[] = {8,9};
		absorbency = 0.1;
		heatIsolation = 0.1;
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
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
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
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_TacticalVest_Black: FS_TacticalVest
	{
		scope = 2;
		displayName = "Heavy TacticalVest";
		descriptionShort = "Plenty of pockets and ease of use. By FIDOv";
		visibilityModifier = 0.8;
		
	};
	class FS_TacticalVest_Blue: FS_TacticalVest
	{
		scope = 2;
		displayName = "Heavy TacticalVest";
		descriptionShort = "Plenty of pockets and ease of use. By FIDOv";
		visibilityModifier = 0.8;
		
	};
	class FS_TacticalVest_Green: FS_TacticalVest
	{
		scope = 2;
		displayName = "Heavy TacticalVest";
		descriptionShort = "Plenty of pockets and ease of use. By FIDOv";
		visibilityModifier = 0.8;
		
	};
};
