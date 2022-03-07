////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Seva\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
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
	class FS_SevaModule_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Overalls SEVA";
		descriptionShort = "specially for you - overalls SEVA. As you ordered: a closed respiratory system, plus heat resistance, a contour of electrical protection and anti-corrosion materials of an external coating. In addition - built-in containers for artifacts. An indispensable thing for a stalker!";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 3600;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
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
	class FS_SevaModule_Odinochka: FS_SevaModule_ColorBase
	{
		scope = 2;
		
	};
	class FS_SevaModule_Monolit: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Monolith";
		visibilityModifier = 0.95;
		
		
	};
	class FS_SevaModule_Naemniki: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Mercenaries";
		visibilityModifier = 0.95;
		
	};
	class FS_SevaModule_DOLG: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - LONG";
		visibilityModifier = 0.95;
		
	};
	class FS_SevaModule_Svoboda: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - FREEDOM";
		visibilityModifier = 0.95;
		
	};
	class FS_SevaModule_SpecFID: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Destroyer";
		visibilityModifier = 0.95;
		
	};
	class FS_SevaModule_MEDIC: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Medic";
		visibilityModifier = 0.95;
		
	};
};
