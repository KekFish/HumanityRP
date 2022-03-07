////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_CFG\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:36 2020 : 'file' last modified on Tue Jun 02 01:37:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[] = {"Medical_DisinfectantSpray","Medical_Antibiotics","Medical_Bandage","Medical_Bloodbag","Medical_Defibrillator","Medical_Epinephrine","Medical_Morphine","Medical_Painkiller"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class VitaminBottle;
	class BakedBeansCan_Opened;
	class Edible_Base;
	class PainkillerTablets;
	class FirstAidKit;
	class BandageDressing;
	class Rice;
	class WaterBottle;
	class SodaCan_Pipsi;
	class Vodka;
	class TetracyclineAntibiotics;
	class PowderedMilk;
	class AmmoBox_792x57_25Rnd;
	class FS_ITEM_Antibiotics: PainkillerTablets
	{
		scope = 2;
		displayName = "Antibiotics";
		descriptionShort = "Antibiotics";
		
		rotationFlags = 17;
		itemSize[] = {1,2};
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_ANTIDOT: VitaminBottle
	{
		scope = 2;
		displayName = "Antidote Acizol";
		descriptionShort = "Remedy for poisoning hazardous chemical substances (AHOV). Promotes the acceleration of the elimination of poisons from the body, reduces the severity of intoxication in case of poisoning.";
		
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet = "VitaminBottle_open_SoundSet";
					id = 201;
				};
				class VitaminBottle_shake
				{
					soundSet = "VitaminBottle_shake_SoundSet";
					id = 202;
				};
				class VitaminBottle_close
				{
					soundSet = "VitaminBottle_close_SoundSet";
					id = 203;
				};
				class pickUpItem
				{
					soundSet = "vitaminbottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_BIG: FirstAidKit
	{
		scope = 2;
		displayName = "Large first aid kit";
		descriptionShort = "Lots of different pockets to carry more items";
		
		inventorySlot = "Belt_Back";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,6};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_LOW: FirstAidKit
	{
		scope = 2;
		displayName = "Medium first aid kit";
		descriptionShort = "Convenient compact first aid kit.";
		
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,5};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_SMALL: FirstAidKit
	{
		scope = 2;
		displayName = "Small first aid kit";
		descriptionShort = "Small first aid kit.";
		
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,4};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
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
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_BANDAGE: BandageDressing
	{
		scope = 2;
		displayName = "Sterile bandage";
		descriptionShort = "Aseptic bandage to stop bleeding and prevent infection from entering the wound. For normal bleeding, allows you to bandage the wound. Ineffective for arterial bleeding";
		
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		varQuantityInit = 4;
		varQuantityMin = 0;
		varQuantityMax = 4;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		itemSize[] = {1,2};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_FCP: BandageDressing
	{
		scope = 2;
		displayName = "Israeli bandage";
		descriptionShort = "Once in 1993, a conscript of the Israeli army, Bernard Ber-Naton, seeing the torment of soldiers trying to stop bleeding with outdated means and ridiculous attempts to create pressure on the wound with stones, pistol grips and rifle magazines, decided to put an end to this";
		
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		itemSize[] = {2,2};
		varQuantityInit = 9;
		varQuantityMin = 0;
		varQuantityMax = 9;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_IRP_B: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "IRP-B";
		itemSize[] = {2,4};
		descriptionShort = "The individual food ration IRP-B is intended for organizing meals in a combat situation for individual servicemen and personnel of small units when, according to the conditions of their tasks, it is impossible or impractical to organize food from military stationary or field kitchens, civilian catering establishments or for a fee from private individuals.";
		
		weight = 540;
		varQuantityInit = 715;
		varQuantityMin = 0;
		varQuantityMax = 715;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = 77;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_MRE: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "MRE";
		descriptionShort = "Meal, Ready-to-Eat – an individual diet, first adopted by the US Armed Forces in 1975. It is currently the most used individual ration by the US Armed Forces. MRE is intended for use within 21 days of deployment in combat conditions. The rations are packaged in a thick, sandy plastic bag. The ration is designed for one meal.";
		
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 1315;
		varQuantityMin = 0;
		varQuantityMax = 1315;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_IRP_UKR_OLD: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "ZNSP";
		descriptionShort = "Old-style Ukrainian individual diet. It stands for Zagalnoviy Nabir of Dry Products";
		
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 815;
		varQuantityMin = 0;
		varQuantityMax = 815;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_IRP_UKR: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "DPNP-P-B";
		descriptionShort = "Doboviy Poloviy Nabir Produktiv - Posilieniy ”is the latest version of the Ukrainian individual diet, developed by volunteers with products for almost two and a half kilograms. The disadvantages of past dry rations were eliminated, a flameless heater was added. Armed at the moment.";
		
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 815;
		varQuantityMin = 0;
		varQuantityMax = 815;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_AV3: BandageDressing
	{
		scope = 2;
		displayName = "ИПП-АВ-3";
		descriptionShort = "IPP-AV-3";
		
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		varQuantityInit = 9;
		varQuantityMin = 0;
		varQuantityMax = 9;
		itemSize[] = {3,3};
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_CHEESE: Rice
	{
		scope = 2;
		displayName = "CHEESE";
		descriptionShort = "Hard cheese. Not a bad sausage substitute, designed to slightly color the stalker diet. Usually it is dragged by newcomers from the mainland.";
		
		weight = 2;
		itemSize[] = {1,2};
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
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
			fullnessIndex = 2.5;
			energy = 265;
			water = 81.5;
			nutritionalIndex = 1;
			toxicity = 0;
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_VODKA: Vodka
	{
		scope = 2;
		displayName = "Hanka";
		descriptionShort = "Strong and wild vodka. When it enters the body, the capillaries of the brain are clogged with erythrocytes deformed due to ethanol, causing oxygen starvation of tissues, as well as dehydration, which causes a feeling of euphoria and a decrease in stress.";
		
		weight = 450;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class FS_ITEM_Kolbas: Rice
	{
		scope = 2;
		displayName = "Sausage";
		descriptionShort = "Often, for lack of a better thing, this sausage - a mixture of chicken and soy substitute - becomes the stalker's breakfast, lunch, and dinner. Due to the large amount of preservatives, it does not deteriorate for a long time.";
		
		weight = 233;
		itemSize[] = {2,2};
		varQuantityInit = 800;
		varQuantityMin = 0;
		varQuantityMax = 800;
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
			fullnessIndex = 2.5;
			energy = 565;
			water = 81.5;
			nutritionalIndex = 1;
			toxicity = 0;
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_COLA: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "Cola";
		descriptionShort = "Soda that adds energy for a short time. It is in enormous demand among yellow-haired beginners, which some traders skillfully use.";
		
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 530;
		varQuantityMin = 0;
		varQuantityMax = 530;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 63.5;
			water = 119;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class FS_ITEM_NonStop: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "Energy drink NonStop";
		descriptionShort = "It is often used by stalkers on multi-day hikes when there is no way to stop and rest. Contains easily digestible carbohydrates, as well as drugs that cause the release of adrenaline into the blood.";
		
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 530;
		varQuantityMin = 0;
		varQuantityMax = 530;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 33.5;
			water = 119;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class FS_ITEM_PsyBlocade: TetracyclineAntibiotics
	{
		scope = 2;
		displayName = "Psi blockade";
		descriptionShort = "A narcotic drug that blocks avalanche-like nerve impulses. Was bred by scientists of the Kiev Research Institute of ChEZ.";
		
		rotationFlags = 17;
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					
				};
			};
		};
		class Medicine
		{
			prevention = 0;
			treatment = 0.9;
			diseaseExit = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_Booster: WaterBottle
	{
		scope = 2;
		displayName = "Hercules";
		descriptionShort = "The main component is an artificially created steroid, chemically similar to testosterone. It is used by stalkers in long transitions to increase the threshold for muscle fatigue.";
		
		weight = 25;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_MolokoSgus: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Condensed milk";
		descriptionShort = "Condensed whole milk, very tasty and sweet ";
		
		itemSize[] = {2,2};
		weight = 40;
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = -1;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_HotCan: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Military canned food";
		descriptionShort = "Military canned food from the diet";
		
		itemSize[] = {2,2};
		weight = 40;
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		
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
			fullnessIndex = 1.5;
			energy = 223;
			water = 77;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
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
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
	class FS_ITEM_Antirad: VitaminBottle
	{
		scope = 2;
		displayName = "Antirad MEXAMINE";
		descriptionShort = "Radioprotective drug Mexamin. Under experimental conditions, it reduces the mortality of animals exposed to X-ray or gamma radiation, as well as high-energy protons. When applied, it causes narrowing of peripheral blood vessels and hypoxia (oxygen starvation), in particular, in the bone marrow and spleen, which in this case is a means of preventing and treating radiation sickness. Widespread throughout the Zone.";
		
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet = "VitaminBottle_open_SoundSet";
					id = 201;
				};
				class VitaminBottle_shake
				{
					soundSet = "VitaminBottle_shake_SoundSet";
					id = 202;
				};
				class VitaminBottle_close
				{
					soundSet = "VitaminBottle_close_SoundSet";
					id = 203;
				};
				class pickUpItem
				{
					soundSet = "vitaminbottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_EnergyShokolat: PowderedMilk
	{
		scope = 2;
		displayName = "Energy bar";
		descriptionShort = "Energy bar";
		
		rotationFlags = 17;
		weight = 0;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		absorbency = 0.9;
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
			fullnessIndex = 4.5;
			energy = 796;
			water = 5.5;
			nutritionalIndex = 1;
			toxicity = 0;
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
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_WATERbootle: WaterBottle
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WaterBottle0";
		descriptionShort = "$STR_CfgVehicles_WaterBottle1";
		
		weight = 25;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_SNICKERS: PowderedMilk
	{
		scope = 2;
		displayName = "Snickers";
		descriptionShort = "The Snickers bar was first made in 1923 in the United States by pastry chef Frank Mars. Mass production began only in 1930. In November 1929, a chocolate factory was built in Chicago, which was the first to make Snickers chocolate bars.";
		
		rotationFlags = 17;
		weight = 0;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		absorbency = 0.9;
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
			fullnessIndex = 4.5;
			energy = 296;
			water = 5.5;
			nutritionalIndex = 1;
			toxicity = 0;
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
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
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
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
