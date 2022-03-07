////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Weapons\BenelliM4\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:18 2020 : 'file' last modified on Tue Jun 02 01:39:45 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_SKS
	{
		units[] = {"SKS","SKS_Black","SKS_Green"};
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
	class SKS;
	class FS_BenelliM4_ShotGun_Base: SKS
	{
		scope = 0;
		weight = 3850;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.6,50,160,4,10};
		DisplayMagazine = 0;
		WeaponLength = 1.11042;
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaPellets_tracer","Ammo_12gaNeedles"};
		magazines[] = {};
		barrelArmor = 2200;
		ejectType = 1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		simpleHiddenSelections[] = {"hide_barrel"};
		cursor = "aimBowGhost";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		
		reloadAction = "ReloadSks";
		hiddenSelections[] = {"camoGround","Clip_rounds","clip"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			soundSetShotExt[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			
			
			reloadTime = 0.275;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
					muzzleIndex = 0;
				};
				class SmokeCloud_2
				{
					overrideParticle = "2weapon_shot_winded_smoke";
					overridePoint = "Usti hlavne_2";
					muzzleIndex = 1;
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_winch70_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlash_2
				{
					overrideParticle = "2weapon_shot_winch70_01";
					overridePoint = "Usti hlavne_2";
					illuminateWorld = 1;
					muzzleIndex = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
			
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
		};
		class AnimationSources
		{
			class Clip_rounds
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Clip
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class FS_BenelliM4_ShotGun: FS_BenelliM4_ShotGun_Base
	{
		scope = 2;
		displayName = "Benelli M4 ShotGun";
		descriptionShort = "a smooth-bore semi-automatic magazine self-loading shotgun, developed in Italy by Benelli. ---- FS MOD";
		
		attachments[] = {"weaponOptics"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					
				};
			};
		};
	};
};
