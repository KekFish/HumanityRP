////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_Smot\GASm\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:48 2020 : 'file' last modified on Tue Jun 02 00:10:27 2020
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGASFIL: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "FIL";
		
	};
};
class CfgSlots
{
	class Slot_FIL
	{
		name = "FIL";
		displayName = "Filter";
		selection = "GasFIL";
		ghostIcon = "Filter";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GasMask;
	class FS_GASMASK_PPM88: GasMask
	{
		scope = 2;
		displayName = "PPM-88";
		descriptionShort = "Personal protective equipment for respiratory organs, skin of the face and organs of vision from radioactive dust and toxic substances.";
		
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {3,4};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		attachments[] = {"fil"};
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"glass"};
		
		class ClothingTypes
		{
			
			
		};
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
