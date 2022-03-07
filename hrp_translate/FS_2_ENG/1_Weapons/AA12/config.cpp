////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_Weapons\AA12\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:11 2020 : 'file' last modified on Mon Jun 01 22:47:53 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_SaigaK
	{
		units[] = {"Saiga12K"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Saiga;
	class FS_AA12_Base: Saiga
	{
		scope = 0;
		weight = 5200;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug"};
		magazines[] = {"FS_Mag_AA12_Drum32Rnd"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.95;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {2,2,1};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		modes[] = {"FullAuto","Single"};
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
	class FS_AA12: FS_AA12_Base
	{
		scope = 2;
		displayName = "AA-12";
		descriptionShort = "The automatic shotgun is a shotgun created by Maxwell Atchisson based on the earlier Atchisson Assault Shotgun.";
		
		itemSize[] = {7,3};
		attachments[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 550;
					
				};
			};
		};
	};
};
