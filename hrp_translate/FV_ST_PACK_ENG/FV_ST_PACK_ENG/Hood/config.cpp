////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\Hood\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:55 2020 : 'file' last modified on Tue Jun 02 00:10:26 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[] = {"BaseballCap_Blue","BaseballCap_Beige","BaseballCap_Black","BaseballCap_Olive","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Camo","BaseballCap_CMMG_Black","BaseballCap_CMMG_Pink","MotoHelmet_Black","MotoHelmet_Blue","MotoHelmet_Green","MotoHelmet_Red","MotoHelmet_White","Headtorch_Grey","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_black","BoonieHat_Blue","BoonieHat_DPM","BoonieHat_dubok","BoonieHat_flecktran","BoonieHat_NavyBlue","BoonieHat_olive","BoonieHat_orange","BoonieHat_red","BoonieHat_Tan","FlatCap_Black","FlatCap_Grey","FlatCap_Brown","FlatCap_Blue","FlatCap_Red","FlatCap_Check_Black","FlatCap_Check_Brown","FlatCap_Check_Grey","GhillieHoodWoodland"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class BaseballCap_Blue;
	class FS_Hood_Colorbase: BaseballCap_Blue
	{
		displayName = "Hood";
		descriptionShort = "Hood of some sort?";
		
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 110;
		itemSize[] = {3,2};
		absorbency = 0.8;
		heatIsolation = 0.25;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_baseballcap"};
		hiddenSelections[] = {"vkcomfidovpublicc"};
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
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_hood_1: FS_Hood_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMxHelmet_visor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "DBHelmetVisor";
		
	};
	class ProxyMxHelmet_mouthguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "DBHelmetMouth";
		
	};
	class Proxyhelmet_flashlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "helmetFlashlight";
		
	};
};
