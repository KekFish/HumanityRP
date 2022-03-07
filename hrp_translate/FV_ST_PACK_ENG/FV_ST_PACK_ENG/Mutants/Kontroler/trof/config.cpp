////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Mutants\Kontroler\trof\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:59 2020 : 'file' last modified on Tue Jun 02 00:10:29 2020
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
	class FS_Kontroler_Brain: Pumpkin
	{
		scope = 2;
		displayName = "Controller's Brain";
		descriptionShort = "The brain removed from the controller is still moving. Strange as it may seem, but the brain is still alive. I'll take it to the scientists, they are willing to pay for this shit";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 1500;
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
