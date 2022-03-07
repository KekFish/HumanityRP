////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Mutants\snork\trof\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:05:03 2020 : 'file' last modified on Tue Jun 02 00:10:30 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Rice;
	class Pumpkin;
	class Inventory_Base;
	class FS_Snork_glove: Inventory_Base
	{
		scope = 2;
		displayName = "Ręka Breka";
		descriptionShort = "Udało ci się pokonać stalowego zjeba. Może naukowcy ci zapłacą za tą ręke";
		
		weight = 300;
		itemSize[] = {2,4};
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		absorbency = 0.9;
		rotationFlags = 63;
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
		class DamageApplied
		{
			dispersion = 0;
			bleedThreshold = 0.3;
			Health = 20;
			Blood = 100;
			Shock = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_Snork_Head: Pumpkin
	{
		scope = 2;
		displayName = "Snork's head";
		descriptionShort = "Smelly head snork, scientists will gladly buy for their research.";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3000;
		itemSize[] = {3,3};
		stackedUnit = "g";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		quantityBar = 1;
		absorbency = 0.2;
		inventorySlot = "";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_Snork_Head_boss: Pumpkin
	{
		scope = 2;
		displayName = "Experimental snork head";
		descriptionShort = "What did they do with him? head all in needles, scars, nails and stinks of horror! Probably they tried to put them to sleep, but it did not end well. Scientists will give money for this sample";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3000;
		itemSize[] = {3,3};
		stackedUnit = "g";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		quantityBar = 1;
		absorbency = 0.2;
		inventorySlot = "";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
};
