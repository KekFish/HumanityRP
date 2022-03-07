////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\Tox\config.bin
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
	class BallisticHelmet_Green;
	class FS_TOX_HeadGear_ColorBase: BallisticHelmet_Green
	{
		displayName = "Chemical protection head";
		descriptionShort = "Special protection for working in infected areas.";
		
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		weight = 1100;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.5;
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
	class FS_TOX_HeadGear_orange: FS_TOX_HeadGear_ColorBase
	{
		scope = 2;
		
	};
	class FS_TOX_HeadGear_green: FS_TOX_HeadGear_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_HeadGear_Blue: FS_TOX_HeadGear_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_HeadGear_black: FS_TOX_HeadGear_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Ballon: TortillaBag
	{
		scope = 2;
		displayName = "Oxygen tank";
		descriptionShort = "Oxygen tank. MOD BY FIDOv = FS_MOD =";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		attachments[] = {""};
		itemSize[] = {3,5};
		itemsCargoSize[] = {6,7};
		weight = 700;
		absorbency = 0;
		heatIsolation = 0.5;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_TOX_Jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Chemical Suit Body";
		descriptionShort = "Special protection for working in infected areas";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1600;
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		quickBarBonus = 2;
		heatIsolation = 0.5;
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
	class FS_TOX_Jacket_orange: FS_TOX_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_TOX_Jacket_green: FS_TOX_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Jacket_Blue: FS_TOX_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Jacket_black: FS_TOX_Jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "Chemical Suit Pants";
		descriptionShort = "Special protection for working in infected areas.";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		weight = 1100;
		quickBarBonus = 2;
		absorbency = 0.1;
		heatIsolation = 0.5;
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
	class FS_TOX_Pants_orange: FS_TOX_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Pants_green: FS_TOX_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Pants_Blue: FS_TOX_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TOX_Pants_black: FS_TOX_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
};
