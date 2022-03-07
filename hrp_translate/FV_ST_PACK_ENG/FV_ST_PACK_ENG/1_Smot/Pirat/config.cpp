////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Smot\Pirat\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:49 2020 : 'file' last modified on Tue Jun 02 00:10:27 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[] = {"SunGlasses"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Gear_Optics"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class AviatorGlasses;
	class FS_Pirat_eye: AviatorGlasses
	{
		scope = 2;
		displayName = "Eye patch";
		descriptionShort = "How did I lose my eye? it's a long story.";
		
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		weight = 36;
		itemSize[] = {1,1};
		lootTag[] = {"Military_west","Military_east","Civilian"};
		lootCategory = "Eyewear";
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SportGlasses_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SportGlasses_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyNVG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "NVG";
		
	};
};
