////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\GasBall\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:15 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
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
	class GasMask;
	class FS_GasBallon_colorBase: GasMask
	{
		scope = 0;
		displayName = "System of closed breathing";
		descriptionShort = "The usual closed-air system, especially not durable, but popular among stalkers.";
		
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 1830;
		itemSize[] = {3,5};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		
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
	class FS_GasBallon_Odinocki: FS_GasBallon_colorBase
	{
		scope = 2;
		
		
	};
	class FS_GasBallon_DOLG: FS_GasBallon_colorBase
	{
		scope = 2;
		
		
	};
};
