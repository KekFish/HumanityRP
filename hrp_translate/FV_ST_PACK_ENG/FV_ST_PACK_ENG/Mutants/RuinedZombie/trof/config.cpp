////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Mutants\RuinedZombie\trof\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:05:01 2020 : 'file' last modified on Tue Jun 02 00:10:30 2020
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
	class FS_RuinedZmB_Head: Pumpkin
	{
		scope = 2;
		displayName = "Zombie head";
		descriptionShort = "His half of his body was torn to pieces, and he was still alive, hmm, all this is strange. Brains in place, maybe the scientists will be interested?";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3200;
		itemSize[] = {4,4};
		stackedUnit = "g";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		quantityBar = 0;
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
