////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_mutants\anomaly\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:03 2020 : 'file' last modified on Mon Jun 01 22:47:51 2020
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
	class ZombieMaleBase;
	class FS_Anomaly_Base: ZombieMaleBase
	{
		scope = 0;
		hiddenSelections[] = {"vkComFidovPublic"};
		
		
		htMin = 6000;
		htMax = 8800;
		afMax = 400;
		mfMax = 333;
		mFact = 333;
		tBody = 573;
		displayName = "Tesla";
		descriptionShort = "The Tesla anomaly functions much like an Electro anomaly and deals electric damage, with the difference is that the Tesla is mobile. In that sense, it's the Electro's equivalent of the Comet. It takes the appearance of a fast-moving ball of pure electricity. It can be said the Tesla is the evolved or greater form of an Electro. It's possible that a particularly large or intense Electro anomaly went undisturbed or built up a massive charge for an extensive amount of time and became mobile as a result, either to discharge its built up energy or to 'hunt' for targets or prey.";
		class InputController
		{
			movementSpeedMapping[] = {-15.7,-15.7,0.3,0.3};
			lookAtFilterTimeout = 0.7;
			lookAtFilterSpeed = 1.17;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
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
						hitpoints = 50;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 12;
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
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "FS_2_Anomaly_AGGR_Soundset";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "FS_2_Anomaly_AGGR_Soundset";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "FS_2_Anomaly_AGGR_Soundset";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "FS_2_Anomaly_AGGR_Soundset";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "FS_2_Anomaly_AGGR_Soundset";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "FS_2_Anomaly_AGGR_Soundset";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "FS_2_Anomaly_Attack_Soundset";
					id = 20;
				};
			};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 2000;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
			class AttackRun
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
			class AttackShort
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
			class AttackShortLow
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
			class CrawlAttackMove
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
			class CrawlAttackStill
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 1009.75;
				time = 69.001;
				yawAngle = 190;
				pitchAngle = 130;
				attackWidth = 69;
				repeatable = 69;
				cooldown = 1.75;
			};
		};
	};
	class FS_anomaly_AI: FS_Anomaly_Base
	{
		scope = 2;
		displayName = "Anomaly";
		descriptionShort = "The Tesla anomaly functions much like an Electro anomaly and deals electric damage, with the difference is that the Tesla is mobile. In that sense, it's the Electro's equivalent of the Comet. It takes the appearance of a fast-moving ball of pure electricity. It can be said the Tesla is the evolved or greater form of an Electro. It's possible that a particularly large or intense Electro anomaly went undisturbed or built up a massive charge for an extensive amount of time and became mobile as a result, either to discharge its built up energy or to 'hunt' for targets or prey.";
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
