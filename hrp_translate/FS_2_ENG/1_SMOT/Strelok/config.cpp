////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\Strelok\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:09 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class FS_ST_combez_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Overalls";
		descriptionShort = "The main combat equipment of stalkers";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2200;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,8};
		quickBarBonus = 5;
		heatIsolation = 0.8;
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
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0.4;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
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
	class FS_ST_combez_odinocka: FS_ST_combez_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ST_combez_Monolit: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - Monolith";
		visibilityModifier = 0.95;
		
		
	};
	class FS_ST_combez_Naemniki: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - Mercenaries";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_DOLG: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - DUTY";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_Svoboda: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - FREEDOM";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_SpecFID: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - Destroyers";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_MEDIC: FS_ST_combez_ColorBase
	{
		scope = 2;
		displayName = "Jumpsuit - Medica";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_ColorBase: CargoPants_Beige
	{
		displayName = "Stalker's pants";
		descriptionShort = "MOD FIDOv _FS_";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		weight = 1700;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
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
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
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
	class FS_ST_combez_pants_odinocka: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_Monolit: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_Naemniki: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_DOLG: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_Svoboda: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_SpecFID: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		displayName = "Pants - Destroyers";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_MEDIC: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		displayName = "Pants - Medic";
		visibilityModifier = 0.95;
		
	};
	class FS_ST_combez_pants_WarEcolog: FS_ST_combez_pants_ColorBase
	{
		scope = 2;
		displayName = "Pants - Armed Ecologist";
		visibilityModifier = 0.95;
		
		
	};
};
