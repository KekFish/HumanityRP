////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Weapons\TOZ\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:19 2020 : 'file' last modified on Tue Jun 02 01:39:45 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_B95
	{
		units[] = {"b95","b95_Black","b95_Green"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoRifle;
class cfgWeapons
{
	class B95;
	class FS_toz_Base: B95
	{
		scope = 0;
		weight = 3200;
		itemSize[] = {9,3};
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaPellets_tracer","Ammo_12gaNeedles"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.85;
		muzzles[] = {"this","SecondMuzzle"};
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadAction = "ReloadB95";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\B95\b95_reload2",0.8,1,20};
		reloadSound[] = {"",0.0562341,1,20};
		shotAction = "";
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		hiddenSelections[] = {"camoGround"};
		simpleHiddenSelections[] = {"bullet","bullet2","hide_barrel"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne_2";
			muzzleEnd = "konec hlavne_2";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			modes[] = {"Single","Burst"};
			magazines[] = {};
			chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaPellets_tracer","Ammo_12gaNeedles"};
			barrelArmor = 1000;
			initSpeedMultiplier = 1;
			irDistance = 0;
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.00562341,1};
			soundBullet[] = {};
			class Single: Mode_SemiAuto
			{
				soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 0.1;
				dispersion = 0.001;
				magazineSlot = "magazine";
			};
			class Burst: Mode_Burst
			{
				soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
				reloadTime = 0.1;
				dispersion = 0.001;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoRifle
			{
				memoryPointCamera = "eye";
				
				distanceZoomMin = 50;
				distanceZoomMax = 200;
				discreteDistance[] = {50,100,200};
				discreteDistanceInitIndex = 0;
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
	};
	class FS_TOZ34: FS_toz_Base
	{
		scope = 2;
		displayName = "TOZ-34";
		descriptionShort = "A double-barreled hunting rifle of light type with a low landing of barrels, intended for commercial and amateur hunting.";
		
		attachments[] = {"weaponWrap"};
		hiddenSelections[] = {"camo"};
		itemSize[] = {9,3};
		dexterity = 3.3;
		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					
				};
			};
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
					overrideParticle = "weapon_shot_winded_smoke";
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
					overrideParticle = "weapon_shot_winch70_01";
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
	};
	class FS_TOZ34_MINI: FS_toz_Base
	{
		scope = 2;
		displayName = "Trim TOZ-34";
		descriptionShort = "A double-barreled hunting rifle of light type with a low landing of barrels, intended for commercial and amateur hunting.";
		
		attachments[] = {"weaponWrap"};
		hiddenSelections[] = {"camo"};
		itemSize[] = {5,2};
		dexterity = 3.3;
		weight = 1800;
		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					
				};
			};
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
					overrideParticle = "weapon_shot_winded_smoke";
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
					overrideParticle = "weapon_shot_winch70_01";
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
	};
};
