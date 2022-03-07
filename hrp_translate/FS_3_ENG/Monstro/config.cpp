////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Monstro\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:14 2020 : 'file' last modified on Tue Jun 02 01:39:40 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Animals_ursus_arctos
	{
		units[] = {"Animal_UrsusArctos"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Animal_UrsusArctos;
	class FS_HIMERA_COLORBASE: Animal_UrsusArctos
	{
		simulation = "dayzanimal";
		scope = 2;
		
		armor = 1.2;
		displayName = "$STR_CfgVehicles_Animal_UrsusArctos0";
		descriptionShort = "$STR_CfgVehicles_Animal_UrsusArctos1";
		aiAgentTemplate = "Predator_UrsusArctos";
		injuryLevels[] = {1,0.5,0.2,0};
		hiddenSelections[] = {"vkcomfidovpublic"};
		DamageSphereAmmos[] = {"MeleeBear","MeleeBearShock","MeleeWolf"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 4000;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.56;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 4000;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.78;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 4000;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 4000;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 4000;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		
		
		class Skinning
		{
			class ObtainedGolov
			{
				item = "FS_HIMERA_HEAD";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "DZ\animals_bliss\ursus_arctos\data\ursus_arctos_skeleton.xob";
			graphname = "DZ\animals_bliss\animations\!graph_files\bear\Bear_Graph.agr";
			defaultinstance = "DZ\animals_bliss\animations\!graph_files\bear\BearSkeleton_AnimInstance.asi";
			startnode = "MasterBear_SM";
			skeletonName = "ursus_arctos_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawBigBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawBigSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawBigRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawBigRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawBigStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawBigStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawBigStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawBigJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawBigImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class BearAttack
				{
					soundSet = "FS_3_HIMERA_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 21;
				};
				class BearBreath
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class BearGrowl
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class BearMumble
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class BearRoar
				{
					soundSet = "FS_3_HIMERA_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class BearRoarShort
				{
					soundSet = "FS_3_HIMERA_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class BearSigh
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class BearSighLong
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class BearSighShort
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class BearSnarl
				{
					soundSet = "FS_3_HIMERA_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class BearSnarlLong
				{
					soundSet = "FS_3_HIMERA_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class BearSnort
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class BearGrowl_1
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class BearGrowl_3
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class BearGrowl_4
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class BearGrowl_5
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class BearGrowl_6
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class BearGrowl_7
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 17;
				};
				class BearGrowl_8
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class BearGrowl_9
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 19;
				};
				class BearGrowl_10
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class BearGrowl_12
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 22;
				};
				class BearGrowl_13
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 23;
				};
				class BearRoar_1
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 24;
				};
				class BearRoar_2
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 25;
				};
				class BearRoar_3
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 26;
				};
				class BearRoar_5
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 27;
				};
				class BearRoar_6
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 28;
				};
				class BearRoar_7
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 29;
				};
				class BearSighLong_0
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 30;
				};
				class BearSighLong_1
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 31;
				};
				class BearSighLong_2
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 32;
				};
				class BearSnarlLong_0
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 33;
				};
				class BearSnarlLong_1
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 34;
				};
				class BearSnarlLong_2
				{
					soundSet = "FS_3_HIMERA_DISET_Soundset";
					noise = "WolfRoarNoise";
					id = 35;
				};
			};
			class Damages
			{
				class BearBiteDamage
				{
					damage = "BearBiteDamage";
					id = 1;
				};
				class BearLeftPawDamage
				{
					damage = "BearLeftPawDamage";
					id = 2;
				};
				class BearRightPawDamage
				{
					damage = "BearRightPawDamage";
					id = 3;
				};
				class BearBiteDamageIntimidate
				{
					damage = "BearBiteDamageIntimidate";
					id = 11;
				};
				class BearLeftPawDamageIntimidate
				{
					damage = "BearLeftPawDamageIntimidate";
					id = 12;
				};
				class BearRightPawDamageIntimidate
				{
					damage = "BearRightPawDamageIntimidate";
					id = 13;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0,0.24,0.55,1.72,3.5,8};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class FS_HIMERA_v1: FS_HIMERA_COLORBASE
	{
		scope = 2;
		displayName = "Chimera";
		descriptionShort = "Chimera is a hairless cat/dog-like creature, close to the size of an adult lion, with two heads and a broad tail. Chimeras are extremely strong and they're able to turn a car over alone. They are the most deadly mutant encountered, jumping incredible distances and doing extreme damage. Though physically weaker than the Pseudogiant, the Chimera is considered deadlier due to its extremely fast speeds and aggressiveness.";
		
		class Skinning
		{
			class ObtainedGolov
			{
				item = "FS_HIMERA_HEAD";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class FS_HIMERA_v2: FS_HIMERA_COLORBASE
	{
		scope = 2;
		displayName = "Chimera";
		descriptionShort = "Chimera is a hairless cat/dog-like creature, close to the size of an adult lion, with two heads and a broad tail. Chimeras are extremely strong and they're able to turn a car over alone. They are the most deadly mutant encountered, jumping incredible distances and doing extreme damage. Though physically weaker than the Pseudogiant, the Chimera is considered deadlier due to its extremely fast speeds and aggressiveness.";
		
		class Skinning
		{
			class ObtainedGolov
			{
				item = "FS_HIMERA_HEAD";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class FS_HIMERA_v3: FS_HIMERA_COLORBASE
	{
		scope = 2;
		displayName = "Dark Chimera";
		descriptionShort = "Chimera is a hairless cat/dog-like creature, close to the size of an adult lion, with two heads and a broad tail. Chimeras are extremely strong and they're able to turn a car over alone. They are the most deadly mutant encountered, jumping incredible distances and doing extreme damage. Though physically weaker than the Pseudogiant, the Chimera is considered deadlier due to its extremely fast speeds and aggressiveness.";
		
		class Skinning
		{
			class ObtainedGolov
			{
				item = "FS_HIMERA_HEAD";
				count = 1;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
};
