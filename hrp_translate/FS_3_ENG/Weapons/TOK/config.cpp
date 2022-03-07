////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Weapons\TOK\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:19 2020 : 'file' last modified on Tue Jun 02 01:39:45 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Melee_Powered
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Powered_Base;
	class StunBaton;
	class FS_TOK_TEST1: StunBaton
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_StunBaton0";
		descriptionShort = "$STR_CfgVehicles_StunBaton1";
		
		inventorySlot[] = {"Shoulder","Melee"};
		rotationFlags = 1;
		weight = 800;
		itemSize[] = {1,4};
		itemBehaviour = 1;
		fragility = 0.008;
		lootTag[] = {"Police"};
		lootCategory = "Tools";
		energyResources[] = {{"power",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					
				};
			};
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 3;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeLightBluntShock";
				range = 1.5;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 1.5;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 2;
			};
		};
	};
	class FS_TOK_TEST1Fidov: StunBaton
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_StunBaton0";
		descriptionShort = "$STR_CfgVehicles_StunBaton1";
		
		inventorySlot[] = {"Shoulder","Melee"};
		rotationFlags = 1;
		weight = 800;
		itemSize[] = {1,4};
		itemBehaviour = 1;
		fragility = 0.008;
		lootTag[] = {"Police"};
		lootCategory = "Tools";
		energyResources[] = {{"power",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					
				};
			};
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 3;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeLightBluntShock";
				range = 1.5;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 1.5;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 2;
			};
		};
	};
	class FS_TOK_TEST1FidovNo
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_StunBaton0";
		descriptionShort = "$STR_CfgVehicles_StunBaton1";
		
		inventorySlot[] = {"Shoulder","Melee"};
		rotationFlags = 1;
		weight = 800;
		itemSize[] = {1,4};
		itemBehaviour = 1;
		fragility = 0.008;
		lootTag[] = {"Police"};
		lootCategory = "Tools";
		energyResources[] = {{"power",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					
				};
			};
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 3;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeLightBluntShock";
				range = 1.5;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 1.5;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 2;
			};
		};
	};
};
