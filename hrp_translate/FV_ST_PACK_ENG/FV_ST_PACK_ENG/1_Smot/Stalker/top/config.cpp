////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Smot\Stalker\top\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:50 2020 : 'file' last modified on Tue Jun 02 00:10:27 2020
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
	class FS_ST_TOPS_ColorBase: HuntingJacket_Autumn
	{
		displayName = "High quality stalker jacket";
		descriptionShort = "Warm military jacket with body armor";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1600;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		attachments[] = {"dec"};
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
	class FS_ST_top_pixel: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ST_top_tan: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ST_top_Sea: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_Netral: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_Netral2: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_bandit: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_DOLG: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_SVOBODA: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_top_ClearSky: FS_ST_TOPS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_TOPS2_ColorBase: HuntingJacket_Autumn
	{
		displayName = "High quality stalker jacket";
		descriptionShort = "Warm military jacket with body armor";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1600;
		attachments[] = {"dec"};
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
	class FS_ST_topNoHood_pixel: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ST_topNoHood_tan: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ST_topNoHood_Sea: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_Netral: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_Netral2: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_bandit: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_DOLG: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_SVOBODA: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_topNoHood_ClearSky: FS_ST_TOPS2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
};
