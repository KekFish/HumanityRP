////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Weapons\AEK918G\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:51 2020 : 'file' last modified on Tue Jun 02 00:10:28 2020
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
class OpticsInfoRifle;
class cfgWeapons
{
	class AKM;
	class FS_AK918G_Base: AKM
	{
		scope = 0;
		weight = 1440;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
		WeaponLength = 0.829067;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"FS_mag_AEK918g_30Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"vkcomfidovpublic"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ots14_Shot_SoundSet","ots14_Tail_SoundSet","ots14_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ots14_silencerPro_SoundSet","ots14_silencerTail_SoundSet","ots14_silencerInteriorTail_SoundSet"},{"ots14_silencerHomeMade_SoundSet","ots14_silencerHomeMadeTail_SoundSet","ots14_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			
			
			
			reloadTime = 0.085;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.0021;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ots14_Shot_SoundSet","ots14_Tail_SoundSet","ots14_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ots14_silencerPro_SoundSet","ots14_silencerTail_SoundSet","ots14_silencerInteriorTail_SoundSet"},{"ots14_silencerHomeMade_SoundSet","ots14_silencerHomeMadeTail_SoundSet","ots14_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			
			
			
			reloadTime = 0.068;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.0021;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
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
				class drop
				{
					soundset = "rifle_drop_SoundSet";
					id = 898;
				};
				class bodyfall_rifle_light
				{
					soundSet = "pickUpRifleLight_SoundSet";
					id = 13400;
				};
				class bodyfall_rifle
				{
					soundset = "pickUpRifle_SoundSet";
					id = 13401;
				};
			};
		};
	};
	class FS_AEK918G: FS_AK918G_Base
	{
		scope = 2;
		displayName = "AEK 918G";
		descriptionShort = "The AEK-918g submachine gun"; 
		
		attachments[] = {};
		itemSize[] = {6,3};
		
		
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 40;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
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
	class FS_AEK918G_green: FS_AEK918G
	{
		scope = 2;
		
		
	};
	class FS_AEK918G_blue: FS_AEK918G
	{
		scope = 2;
		
		
	};
	class FS_AEK918G_RED: FS_AEK918G
	{
		scope = 2;
		
		
	};
	class FS_AEK918G_LIME: FS_AEK918G
	{
		scope = 2;
		
		
	};
	class FS_AEK918G_BadOrange: FS_AEK918G
	{
		scope = 2;
		
	};
};
