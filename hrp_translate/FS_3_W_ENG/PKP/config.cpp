////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\PKP\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:41 2020 : 'file' last modified on Tue Jun 02 01:09:48 2020
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
	class OpticsInfoRifle;
	class FS_PKP_Base: AKM
	{
		scope = 0;
		weight = 7140;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
		WeaponLength = 1.129067;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54"};
		magazines[] = {"FS_Mag_PKP_200Rnd"};
		magazineSwitchTime = 0.4;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {""};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.128;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			
			
			
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.105;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			
			
			
		};
	};
	class FS_PKP: FS_PKP_Base
	{
		scope = 2;
		displayName = "PKP Pecheneg";
		descriptionShort = "Russian single machine gun, developed on the basis of a modernized Kalashnikov machine gun. Designed to destroy enemy personnel, fire and vehicles, air targets.";
		
		attachments[] = {"weaponOpticsAK","weaponWrap","suppressorImpro","weaponMuzzleAK"};
		itemSize[] = {10,3};
		
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1100;
					
				};
			};
		};
	};
};
