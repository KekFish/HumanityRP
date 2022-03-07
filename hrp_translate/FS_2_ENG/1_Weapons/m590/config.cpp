////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_Weapons\m590\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:11 2020 : 'file' last modified on Mon Jun 01 22:47:53 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Shotguns_MP133
	{
		units[] = {"ShotgunMp133","ShotgunMp133_Pistol_Grip"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Mp133Shotgun;
	class FS_m590_ShotgunBase: Mp133Shotgun
	{
		scope = 0;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.63525;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,0.5};
		cartridgeCreateTime[] = {0.15,0.42};
		reloadSkips[] = {0.16,0.2,0.33,0.54,0.535};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_pump_0",1,1,20};
		reloadAction = "ReloadMP133";
		shotAction = "ReloadMP133Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
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
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class FS_m590_Shotgun: FS_m590_ShotgunBase
	{
		scope = 2;
		displayName = "MOSSBERG 590 SHOTGUN";
		descriptionShort = "The main task of the engineers in the development of this shotgun was to create a practical tool for law enforcement agencies that would help them solve a variety of situations that arose. The main difference between the 590 and the 500 is the increased safety margin. The shotgun itself is coated with a special solution that better protects against corrosion.";
		
		animName = "ShotgunMp133";
		attachments[] = {""};
		itemSize[] = {4,1};
		weight = 1700;
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
