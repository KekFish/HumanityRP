////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\bandit\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:53 2020 : 'file' last modified on Tue Jun 02 00:10:26 2020
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
	class HuntingJacket_Autumn;
	class FS_BanditJacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Bandit";
		descriptionShort = "";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 600;
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
	class FS_BanditJacket_black: FS_BanditJacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Bandit jacket";
		descriptionShort = "The traditional clothing of a bandit is a leather jacket with sewn-in armor elements. Provides protection to the owner from harmful influences - however, extremely insufficient in the harsh conditions of the Zone.";
		
	};
	class FS_BanditJacket_Beige: FS_BanditJacket_ColorBase
	{
		scope = 2;
		displayName = "Leather Jacket";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
	class FS_BanditJacket_white: FS_BanditJacket_ColorBase
	{
		scope = 2;
		displayName = "Leather Jacket";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
	class FS_ClearSky_NoobJacket: FS_BanditJacket_ColorBase
	{
		scope = 2;
		displayName = "Snaryaga Clear Sky";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
	class FS_NoobJacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Bandit";
		descriptionShort = "";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 600;
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
	class FS_NoobJacket_black: FS_NoobJacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Gangster jacket without hood";
		descriptionShort = "The traditional clothing of a bandit is a leather jacket with sewn-in armor elements. Provides protection to the owner from harmful influences - however, extremely insufficient in the harsh conditions of the Zone.";
		
	};
	class FS_NoobJacket_Beige: FS_NoobJacket_ColorBase
	{
		scope = 2;
		displayName = "Leather jacket without hood";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
	class FS_NoobJacket_white: FS_NoobJacket_ColorBase
	{
		scope = 2;
		displayName = "Leather jacket without hood";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
	class FS_NoobJacket_ClearSky: FS_NoobJacket_ColorBase
	{
		scope = 2;
		displayName = "Snaryaga Clear sky without a hood";
		descriptionShort = "An ordinary thick leather jacket, of which there are many. Slightly enhances bullet and fragmentation protection. Ineffective against abnormal and other influences.";
		visibilityModifier = 0.8;
		
	};
};
