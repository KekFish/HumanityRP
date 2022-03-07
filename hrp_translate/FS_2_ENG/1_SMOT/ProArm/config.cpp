////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\ProArm\config.bin
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
	class TortillaBag;
	class BallisticHelmet_Green;
	class FS_ProARM_Helm_ColorBase: BallisticHelmet_Green
	{
		displayName = "Elite Combatant's Helm";
		descriptionShort = "Strong and good helmet. Covering completely the entire face. The helmet has a built-in gas mask. The lenses are illuminated";
		
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		weight = 1100;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		headSelectionsToHide[] = {"Clipping_HelmetMich"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 140;
					
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
						damage = 0;
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
						damage = 0;
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
	class FS_ProARM_Helm_Naem: FS_ProARM_Helm_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Helm - Mercenary";
		
	};
	class FS_ProARM_Helm_DOLG: FS_ProARM_Helm_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Helm - DEBT";
		
	};
	class FS_ProARM_Helm_Svoboda: FS_ProARM_Helm_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Helmet - FREEDOM";
		
	};
	class FS_ProARM_Jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Elite Combatant's Tunic";
		descriptionShort = "Comfortable jacket with steel plates for better body protection. Special alloy plates, they do not impede movement";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1600;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,7};
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
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
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
	class FS_ProARM_Jacket_Naem: FS_ProARM_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Tunic - Mercenary";
		
	};
	class FS_ProARM_Jacket_DOLG: FS_ProARM_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Tunic - DUTY";
		
	};
	class FS_ProARM_Jacket_Svoboda: FS_ProARM_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Tunic - FREEDOM";
		
	};
	class FS_ProARM_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "Elite Combatant's Pants";
		descriptionShort = "Comfortable and very nice pants.";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1100;
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
	class FS_ProARM_pants_Naem: FS_ProARM_Pants_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Pants - Mercenary";
		
	};
	class FS_ProARM_pants_DOLG: FS_ProARM_Pants_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Pants - DUTY";
		
	};
	class FS_ProARM_pants_Svoboda: FS_ProARM_Pants_ColorBase
	{
		scope = 2;
		displayName = "Elite Combatant's Pants - FREEDOM";
		
	};
};
