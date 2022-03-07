////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\EX\head\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:55 2020 : 'file' last modified on Tue Jun 02 00:10:28 2020
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
class DefaultAction;
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Switchable_Base;
	class BandanaHead_RedPattern;
	class FS_EXO_Head_ColorBase: BandanaHead_RedPattern
	{
		displayName = "Helmet exoskeleton";
		descriptionShort = "The helmet from the exoskeleton. Can Attach Mouthguard or Visor";
		
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1300;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		attachments[] = {""};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","steklo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
						startOnHealth = 0.2;
					};
					class Blood
					{
						damage = 0;
						startOnHealth = 0.2;
					};
					class Shock
					{
						damage = 0.1;
						startOnHealth = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
						startOnHealth = 0.2;
					};
					class Blood
					{
						damage = 0.3;
						startOnHealth = 0.1;
					};
					class Shock
					{
						damage = 0.2;
						startOnHealth = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.4;
						startOnHealth = 0.5;
					};
					class Blood
					{
						damage = 0.4;
						startOnHealth = 0.5;
					};
					class Shock
					{
						damage = 0.4;
						startOnHealth = 0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EXO_Head_Bandit: FS_EXO_Head_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Head_Dolg: FS_EXO_Head_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Head_Free: FS_EXO_Head_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Head_Monolit: FS_EXO_Head_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Head_Specnaz: FS_EXO_Head_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Head_tank: FS_EXO_Head_ColorBase
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
};
