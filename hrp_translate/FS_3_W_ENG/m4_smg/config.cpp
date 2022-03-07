////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\m4_smg\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:33:06 2021 : 'file' last modified on Fri Nov 27 23:18:08 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_cz61
	{
		units[] = {"cz61"};
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
class CfgWeapons
{
	class CZ61;
	class FS_M4SMG_Base: CZ61
	{
		scope = 0;
		weight = 1280;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,10,190,4,10};
		WeaponLength = 0.541088;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"FS_Mag_M4SMG_30Rnd"};
		magazineSwitchTime = 0.3;
		barrelArmor = 1800;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CZ61_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			
			
			
			reloadTime = 0.125;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CZ61_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			
			
			
			reloadTime = 0.067;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
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
			discreteDistance[] = {75,150};
			discreteDistanceInitIndex = 0;
			
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class FS_M4SMG: FS_M4SMG_Base
	{
		scope = 2;
		displayName = "Spectre M4";
		descriptionShort = "M4 SMG 9mm";
		
		attachments[] = {"pistolMuzzle"};
		itemSize[] = {3,3};
		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					
				};
			};
		};
	};
};
