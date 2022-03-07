////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\USAS12\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:33:07 2021 : 'file' last modified on Fri Nov 27 23:18:08 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_FAL
	{
		units[] = {"FAL"};
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
class OpticsInfoShotgun;
class cfgWeapons
{
	class FAL;
	class FS_USAS12_Base: FAL
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.752228;
		barrelArmor = 3.888;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"FS_Mag_USAS12_10Rnd","FS_Drum_USAS12_20Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1.4,1.4,1.4};
		swayModifier[] = {2.3,2.3,1.3};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadFal";
		modes[] = {"FullAuto","SemiAuto"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.2;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
			
			
			
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.2;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun{};
	};
	class FS_USAS12: FS_USAS12_Base
	{
		scope = 2;
		displayName = "USAS12";
		descriptionShort = "Daewoo USAS-12 автоматическое ружьё, разработанное Джоном Тревором в конце 1980-х годов";
		
		attachments[] = {""};
		itemSize[] = {7,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700;
					
				};
			};
		};
	};
};
