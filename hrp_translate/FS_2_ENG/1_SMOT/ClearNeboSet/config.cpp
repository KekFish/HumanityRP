////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\ClearNeboSet\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:05 2020 : 'file' last modified on Mon Jun 01 22:47:51 2020
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
	class JungleBoots_Beige;
	class BallisticHelmet_Green;
	class FS_ClearSky_Helmet_ColorBase: BallisticHelmet_Green
	{
		displayName = "Clear Sky helmet";
		descriptionShort = "Ballistic helmet, with goggles. ------------ Mod FIDOv STALKER PACK. Have a nice game.";
		
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		weight = 1400;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		headSelectionsToHide[] = {"Clipping_HelmetMich"};
		hiddenSelections[] = {"vkcomfidovpublic1"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 160;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.21;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
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
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ClearSky_Helmet: FS_ClearSky_Helmet_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		color = "Green";
	};
	class FS_ClearSky_Jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Heavy Equipment Clear Sky";
		descriptionShort = " MOD FIDOv _FS_";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2700;
		itemSize[] = {4,4};
		itemsCargoSize[] = {8,6};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic2"};
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
	class FS_ClearSky_Jacket: FS_ClearSky_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
	};
	class FS_ClearSky_Boots_ColorBase: JungleBoots_Beige
	{
		displayName = "Heavy Boots Clear Sky";
		descriptionShort = "Heavy, loud but very durable boots";
		
		inventorySlot = "Feet";
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {5,3};
		weight = 3230;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0.1;
		heatIsolation = 0.5;
		soundAttType = "Boots";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			
			
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 490;
					
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.1;
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
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ClearSky_Boots: FS_ClearSky_Boots_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
	};
};
