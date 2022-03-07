////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\Detector_samopal\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:41 2021 : 'file' last modified on Mon Dec 21 05:19:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Tools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Flashlight;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class Compass;
	class FS_Detector_Samopal: Flashlight
	{
		scope = 2;
		displayName = "Homemade detector";
		descriptionShort = "The cheapest and simplest detector based on a conventional mine detector. Junior researcher Ilya Petrovich Khmelchenko (Hypothermist), was able to create a device in the ChEZ conditions that allows one to determine anomalies and find artifacts. Disadvantages - bulky design, unreliability, weak sensors.";
		
		rotationFlags = 34;
		itemSize[] = {1,6};
		inventorySlot[] = {"melee"};
		weight = 2210;
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
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Attack_flashlight_Light1
				{
					soundSet = "Char_Attack_pipemetal_light1_SoundSet";
					id = 806;
				};
				class Attack_flashlight_Light2
				{
					soundSet = "Char_Attack_pipemetal_light2_SoundSet";
					id = 807;
				};
				class Attack_flashlight_Heavy1
				{
					soundSet = "Char_Attack_pipemetal_heavy1_SoundSet";
					id = 808;
				};
				class Attack_flashlight_Heavy2
				{
					soundSet = "Char_Attack_pipemetal_heavy2_SoundSet";
					id = 809;
				};
			};
		};
	};
};
