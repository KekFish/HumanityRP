////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Predmet\SoivetMedKit\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:18 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[] = {"Medical_DisinfectantSpray","Medical_Antibiotics","Medical_Bandage","Medical_Bloodbag","Medical_Defibrillator","Medical_Epinephrine","Medical_Morphine","Medical_Painkiller"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class SalineBagIV;
	class FS_Aptecka_colorbase: SalineBagIV
	{
		scope = 0;
		displayName = "Army first aid kit individual";
		descriptionShort = "Compact first aid kit for self-help quick help";
		
		rotationFlags = 17;
		itemSize[] = {1,1};
		inventorySlot[] = {"MedicalBandage"};
		weight = 50;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"vkcomfidovpublic"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet = "BloodBag_start_SoundSet";
					id = 201;
				};
				class BloodBag_spear
				{
					soundSet = "BloodBag_spear_SoundSet";
					id = 202;
				};
				class BloodBag_loop
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 203;
				};
				class BloodBag_loop2
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 204;
				};
				class BloodBag_end
				{
					soundSet = "BloodBag_end_SoundSet";
					id = 205;
				};
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_Aptecka_Orange: FS_Aptecka_colorbase
	{
		scope = 2;
		
	};
	class FS_Aptecka_Blue: FS_Aptecka_colorbase
	{
		scope = 2;
		
	};
	class FS_Aptecka_Yello: FS_Aptecka_colorbase
	{
		scope = 2;
		
	};
};
