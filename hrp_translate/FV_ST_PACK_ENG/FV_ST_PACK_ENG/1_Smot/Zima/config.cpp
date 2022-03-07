////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Smot\Zima\config.bin
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
	class FS_Winter_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Winter Jacket";
		descriptionShort = "Warm down jacket";
		
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
	class FS_Winter_Olive: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter Jacket";
		descriptionShort = "Warm down jacket";
		
	};
	class FS_Winter_Gold: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Yellow winter jacket";
		descriptionShort = "Warm down jacket";
		
	};
	class FS_Winter_Bandit: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter Bandit Jacket";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
	class FS_Winter_Dolg: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter jacket Duty";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
	class FS_Winter_monolit: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter jacket Monolith";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
	class FS_Winter_Naemnik: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter Jacket Mercenary";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
	class FS_Winter_Svoboda: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter jacket Freedom";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
	class FS_Winter_Nental: FS_Winter_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Winter jacket Neutral";
		descriptionShort = "Warm airbrushed down jacket";
		
	};
};
