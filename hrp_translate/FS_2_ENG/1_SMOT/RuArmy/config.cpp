////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\RuArmy\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:08 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class FS_RusVKPO_jacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "VKPO Kitel";
		descriptionShort = "Equipment of the Russian army";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.79000002;
		heatIsolation=0.69999999;
		ragQuantity=4;
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
	class FS_RusVKPO_jacket: FS_RusVKPO_jacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_RusVKPO_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "VKPO Pants";
		descriptionShort = "Additionally, a pocket is sewn in for your tapik. BY FIDOV -VKS 25RTP 8665 .. 16-17";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[]={4,3};
		itemsCargoSize[]={6,4};
		weight=530;
		ragQuantity=3;
		varWetMax=1;
		heatIsolation=0.69999999;
		quickBarBonus=2;
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
	class FS_RusVKPO_Pants: FS_RusVKPO_Pants_ColorBase
	{
		scope = 2;
		displayName = "Hunter Pants";
		visibilityModifier = 0.95;
		
	};
};
