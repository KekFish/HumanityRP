////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\VAL\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:43 2020 : 'file' last modified on Tue Jun 02 01:09:48 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_VSS
	{
		units[] = {"VSS"};
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
	class vss;
	class FS_VAL_Base: vss
	{
		scope = 0;
		weight = 2240;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,150,4,10};
		WeaponLength = 0.78;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"FS_Mag_VAL_20Rnd","Mag_VSS_10Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		reloadAction = "ReloadVSS";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			
			
			
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.075;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			
			
			
		};
		class NoiseShoot
		{
			strength = 7;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceInitIndex = 0;
			
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
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
					overrideParticle = "weapon_shot_vss_01";
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
				maxOverheatingValue = 20;
				shotsToStartOverheating = 3;
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
	};
	class FS_AS_VAL: FS_VAL_Base
	{
		scope = 2;
		displayName = "AS VAL";
		descriptionShort = "Silent machine gun, developed in Klimovsk TsNIIochtomash by designers P. Serdyukov and V. Krasnikov in the second half of the 1980s on the basis of the silent VSS sniper rifle and in service with the special forces of Russia. Val and Vintorez are 70% unified, which has a positive effect on production and operation. By FIDOv";
		
		attachments[] = {"weaponWrap","weaponOpticsAK"};
		itemSize[] = {8,3};
		
		
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
