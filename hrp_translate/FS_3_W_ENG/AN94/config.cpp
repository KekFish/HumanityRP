////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\AN94\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:41 2020 : 'file' last modified on Tue Jun 02 01:09:47 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_AKM
	{
		units[] = {"AKM"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class AKM;
	class FS_AN94_Base: AKM
	{
		scope = 0;
		weight = 3840;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 0;
		
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		optics = 1;
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
		value = 0;
		chamberSize = 2;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer"};
		magazines[] = {"Mag_AK74_30Rnd","Mag_AK74_30Rnd_Black","Mag_AK74_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {0.9,0.9,0.9};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.105;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			
			
			
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.105;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			
			
			
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class FS_AN94: FS_AN94_Base
	{
		scope = 2;
		displayName = "AN-94 / АН-94";
		descriptionShort = "The automatic machine AN-94 is designed according to the classical scheme - with the magazine in front of the handle. It consists of a casing-box in which a firing mobile unit is located, pistol-type handles with a trigger mechanism attached to the casing from the bottom, and a butt. The shooting unit consists of a barrel and a receiver, inside which the bolt carrier is located, the bolt and the trigger. The automation works by the free rollback of the movable firing unit driven by the gas engine of the bolt carrier. Locking the barrel when fired - turn the shutter. Separate fuse and translator of fire located on the left side of the machine above the trigger guard.";
		
		attachments[] = {"weaponButtstockAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap"};
		itemSize[] = {8,3};
		dexterity = 2.75;
		
		
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_01x";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 75;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrelBase
				{
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel1: SmokingBarrelBase
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1: SmokingBarrelBase
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
				};
				class SmokingBarrelHot3: SmokingBarrelBase
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0.5,1};
				};
			};
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
	};
};
