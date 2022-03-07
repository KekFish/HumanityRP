////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Mutants\krovoSOS\Trofe\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:05:00 2020 : 'file' last modified on Tue Jun 02 00:10:30 2020
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
	class FS_KrovoSOS_Tentacles: Inventory_Base
	{
		scope = 2;
		displayName = "Bloodsucker Tentacles";
		descriptionShort = "Sticky, smelly tentacles, but among merchants, this is a notable trophy for which they can open their wallets";
		
		weight = 600;
		itemSize[] = {2,3};
		varQuantityInit = 300;
		varQuantityMin = 300;
		varQuantityMax = 300;
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
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 120;
			water = 1.5;
			nutritionalIndex = 1;
			toxicity = 20000;
		};
		class DamageApplied
		{
			dispersion = 0;
			bleedThreshold = 0.3;
			Health = 20;
			Blood = 100;
			Shock = 20;
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
	class FS_KrovoSOS_Head: Pumpkin
	{
		scope = 2;
		displayName = "Bloodsucker Head";
		descriptionShort = "Great, she barely suffered, the merchants will give a good fee for this trophy";
		
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
	class FS_KrovoSOS_Head_blood: Pumpkin
	{
		scope = 2;
		displayName = "Bloodsucker Head";
		descriptionShort = "Great, she barely suffered, the merchants will give a good fee for this trophy";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3200;
		itemSize[] = {4,4};
		stackedUnit = "g";
		varQuantityInit = 2300;
		varQuantityMin = 2300;
		varQuantityMax = 2300;
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
	class FS_KrovoSOS_Head_Dark: Pumpkin
	{
		scope = 2;
		displayName = "Dark Bloodsucker Head";
		descriptionShort = "Great, she barely suffered, the merchants will give a good fee for this trophy";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3200;
		itemSize[] = {4,4};
		stackedUnit = "g";
		varQuantityInit = 2300;
		varQuantityMin = 2300;
		varQuantityMax = 2300;
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
	class FS_KrovoSOS_Head_BolotTvar: Pumpkin
	{
		scope = 2;
		displayName = "Swamp Thing Head";
		descriptionShort = "All sticky and mucus, stinks of a swamp, and who needs it? probably the merchants will give a normal fee for this shit";
		
		ContinuousActions[] = {};
		InteractActions[] = {};
		lootCategory = "Crafted";
		weight = 3200;
		itemSize[] = {4,4};
		stackedUnit = "g";
		varQuantityInit = 2300;
		varQuantityMin = 0;
		varQuantityMax = 2300;
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
