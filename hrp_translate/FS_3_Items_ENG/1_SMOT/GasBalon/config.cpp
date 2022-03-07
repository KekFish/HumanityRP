////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\GasBalon\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:40 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GP5GasMask;
	class FS_GAS_balon: GP5GasMask
	{
		scope = 2;
		displayName = "Closed breathing system";
		descriptionShort = "Closed breathing system";
		
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 2730;
		itemSize[] = {5,5};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {""};
		
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
		class ClothingTypes
		{
			
			
		};
		class Protection
		{
			biological = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymask_filter: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"GasMaskFilter"};
		
	};
};
