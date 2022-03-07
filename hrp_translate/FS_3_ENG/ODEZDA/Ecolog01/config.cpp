////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Ecolog01\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:15 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
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
	class FS_ECO01_Jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "SSP-99 Ecologist";
		descriptionShort = "SSP-99 - standard overalls of scientific groups operating in the Zone.";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 3500;
		itemSize[] = {6,6};
		itemsCargoSize[] = {7,8};
		quickBarBonus = 5;
		heatIsolation = 0.8;
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
						damage = 0.5;
					};
				};
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
	class FS_ECO01_Jacket: FS_ECO01_Jacket_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_ECO01_Jacket_Pro: FS_ECO01_Jacket_ColorBase
	{
		scope = 2;
		displayName = "Overalls SSP-99M";
		descriptionShort = "High-quality modified overalls SSP-99. Added torso protection from bullet and shrapnel damage. Designed to equip the protection of scientific expeditions.";
		
		
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
	};
	class FS_Eco01_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "SSP-99 Ecologist";
		descriptionShort = "SSP-99 - standard overalls of scientific groups operating in the Zone. For complete protection, use the top module";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemsCargoSize[] = {4,4};
		weight = 1100;
		itemSize[] = {3,3};
		quickBarBonus = 3;
		absorbency = 1;
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
	class FS_ECO01_pants: FS_Eco01_Pants_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_ECO01_pants_Pro: FS_Eco01_Pants_ColorBase
	{
		scope = 2;
		displayName = "Overalls SSP-99M";
		descriptionShort = "High-quality modified overalls SSP-99. Added torso protection from bullet and shrapnel damage. Designed to equip the protection of scientific expeditions.";
		
		
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
	};
};
