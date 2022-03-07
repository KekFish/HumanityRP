////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\Geiger_pripat\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:42 2021 : 'file' last modified on Mon Dec 21 05:19:17 2020
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
	class FS_Geiger_Pripat: Flashlight
	{
		scope = 2;
		displayName = "Dosimeter - Pripyat";
		descriptionShort = "One of the most popular radiometers since the early 90s. It was actively used in the Chernobyl zone after the accident because of its lightness and affordable price. Nowadays, it costs from 3,000 to 6,000 thousand rubles and the easiest way to buy it is from your hands.";
		
		rotationFlags = 34;
		itemSize[] = {1,3};
		inventorySlot[] = {"WalkieTalkie"};
		weight = 210;
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
