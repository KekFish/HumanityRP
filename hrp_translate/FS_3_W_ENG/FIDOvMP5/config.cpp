////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\FIDOvMP5\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:33:05 2021 : 'file' last modified on Fri Nov 27 23:18:08 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_UMP
	{
		units[] = {"UMP45"};
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
	class UMP45;
	class FS_MP5_Base: UMP45
	{
		scope = 0;
		weight = 1700;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.75,20,170,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.66353;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"Mag_MP5_15Rnd","Mag_MP5_30Rnd","FS_Mag_MP5_30Rnd","FS_Mag_MP5_15Rnd","FS_Mag_MP5_30Rnd_Type2","FS_Mag_MP5_drum"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1,1,1};
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadAction = "ReloadUMP";
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.067;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
	};
	class FS_MP5: FS_MP5_Base
	{
		scope = 2;
		displayName = "MP-5";
		descriptionShort = "MP5 9x19 By FIDOv";
		
		attachments[] = {"pistolMuzzle","weaponOptics"};
		itemSize[] = {6,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 11550;
					healthLevels[] = {{1,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.7,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.5,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0,{"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"}}};
				};
			};
		};
	};
};
