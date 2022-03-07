////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\GoPro\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:42 2021 : 'file' last modified on Mon Dec 21 05:19:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class PersonalRadio;
	class FS_ITEM_GoPro: PersonalRadio
	{
		scope = 2;
		displayName = "GoPro";
		descriptionShort = "Backpack-mountable GoPro action camera";
		lootTag[] = {"Police","Hunting","Camping","Military_east"};
		
		weight = 200;
		absorbency = 0.5;
		itemSize[] = {1,1};
		inventorySlot[] = {"WalkieTalkie"};
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
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
		simulation = "itemTransmitter";
		inputRange[] = {2,5,10};
		range = 50000;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 1e-05;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet = "turnOnRadio_SoundSet";
					id = 1006;
				};
				class turnOffRadio
				{
					soundSet = "turnOffRadioNoise_SoundSet";
					id = 1007;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyWalkieTalkie: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"WalkieTalkie"};
		
	};
};
