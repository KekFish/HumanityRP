////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_mutants\KROS\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:04 2020 : 'file' last modified on Mon Jun 01 22:47:51 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[] = {"Hermit_NewAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class FS_KrovoSOS_Base;
	class FS_KrovososType2_Base: FS_KrovoSOS_Base
	{
		scope = 0;
		displayName = "Bloodsucker";
		
		descriptionShort = "Mutant";
		hiddenSelections[] = {"vkcomfidovpublic"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1100;
					
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 1100;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "FV_ST_PACK_KrovososPopadanie_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "FV_ST_PACK_KrovososPopadanie_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "FV_ST_PACK_KrovososAttack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "FV_ST_PACK_KrovososProstoy_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "FV_ST_PACK_KrovososProstoy";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "FV_ST_PACK_Bolot_tvarAGGR_Soundset";
					id = 20;
				};
			};
		};
	};
	class FS_KrovososType2_Albinos: FS_KrovososType2_Base
	{
		scope = 2;
		displayName = "Albino bloodsucker";
		
		descriptionShort = "Mutant";
		
	};
	class FS_KrovososType2_Brown: FS_KrovososType2_Base
	{
		scope = 2;
		displayName = "Bloodsucker ";
		
		descriptionShort = "Mutant";
		
	};
	class FS_KrovososType2_Volkodav: FS_KrovososType2_Base
	{
		scope = 2;
		displayName = "Bloodsucker Wolfhound";
		
		descriptionShort = "Mutant";
		hiddenSelections[] = {"vkcomfidovpublic","FUR"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1100;
					
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 1400;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "FV_ST_PACK_KrovososProstoy_Soundset";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "FV_ST_PACK_KrovososBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "FV_ST_PACK_KrovososPopadanie_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "FV_ST_PACK_KrovososPopadanie_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "FS2_KrosMEDVED_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "FV_ST_PACK_KrovososProstoy_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "FV_ST_PACK_KrovososProstoy";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "FS2_KrosMEDVED_AGR_Soundset";
					id = 20;
				};
			};
		};
	};
	class FS_KrovososType2_Volkodav_Ser: FS_KrovososType2_Volkodav
	{
		scope = 2;
		
		displayName = "Bloodsucker Wolfhound";
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
		
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		
	};
};
