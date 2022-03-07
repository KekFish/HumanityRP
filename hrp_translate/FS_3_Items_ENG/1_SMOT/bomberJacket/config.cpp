////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\bomberJacket\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:39 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
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
	class JungleBoots_ColorBase;
	class FS_BomberJack_ColorBase: HuntingJacket_Autumn
	{
		scope = 0;
		displayName = "Bomberjacket";
		descriptionShort = "Warm thick jacket";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2600;
		itemSize[] = {4,4};
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
	class FS_BomberJack_Dolg: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket LONG";
		
		
	};
	class FS_BomberJack_Monolit: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Monolith";
		
		
	};
	class FS_BomberJack_Neitral: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Neitral";
		
		
	};
	class FS_BomberJack_Bandos: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Bandos";
		
		
	};
	class FS_BomberJack_svoboda: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket svoboda";
		
		
	};
	class FS_BomberJack_Brown: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Brown";
		
		
	};
	class FS_BomberJack_black: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Black";
		
		
	};
	class FS_BomberJack_Green: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Green";
		
		
	};
	class FS_BomberJack_blue: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Blue";
		
		
	};
};
