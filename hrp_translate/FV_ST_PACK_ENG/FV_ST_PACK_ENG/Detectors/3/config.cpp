////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Detectors\3\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:54 2020 : 'file' last modified on Tue Jun 02 00:10:28 2020
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxydec: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Dec";
		
	};
};
class CfgSlots
{
	class Slot_DEC
	{
		name = "Dec";
		displayName = "Detector";
		selection = "dec";
		ghostIcon = "radio";
	};
};
class CfgVehicles
{
	class Flashlight;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class Compass;
	class FS_Detector_2_Medved: Compass
	{
		scope = 2;
		displayName = "Detector BEAR";
		descriptionShort = "previous generation detector"; 
		
		animClass = "Compass";
		itemSize[] = {1,2};
		weight = 190;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class compass_open
				{
					soundSet = "compass_open_SoundSet";
					id = 204;
				};
				class compass_close
				{
					soundSet = "compass_close_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_DETECTOR_3: Flashlight
	{
		scope = 2;
		displayName = "VELES detector";
		descriptionShort = "A modern detector that allows you to find all the artifacts known to science, the position of which is displayed on the display.";
		
		rotationFlags = 34;
		itemSize[] = {1,3};
		inventorySlot[] = {"dec"};
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
	class FS_DETECTOR_2: Flashlight
	{
		scope = 2;
		displayName = "Detector BEAR";
		descriptionShort = "previous generation detector"; 
		
		rotationFlags = 34;
		itemSize[] = {1,3};
		weight = 210;
		inventorySlot[] = {"dec"};
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
	class FS_DETECTOR_1: Flashlight
	{
		scope = 2;
		displayName = "Detector Response";
		descriptionShort = "Anomaly detector Response is the most primitive type of anomalous activity detector. Only the most common artifacts can be found with it.";
		
		rotationFlags = 34;
		itemSize[] = {1,3};
		weight = 210;
		inventorySlot[] = {"dec"};
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
