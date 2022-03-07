////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_lot\license\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:03 2020 : 'file' last modified on Mon Jun 01 22:47:50 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Pumpkin;
	class FS_License_Base: Inventory_Base
	{
		scope = 0;
		displayName = "FS MOD LITSUKH. ";
		descriptionShort = "Feeds mod not otherwise";
		
		weight = 100;
		itemSize[] = {1,1};
		absorbency = 0.9;
		rotationFlags = 63;
		hiddenSelections[] = {"vkcomfidovpubllc"};
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
	};
	class FS_License_L1: FS_License_Base
	{
		scope = 2;
		displayName = "Weapon license LEVEL 1";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols";
		visibilityModifier = 0.8;
		
	};
	class FS_License_L2: FS_License_Base
	{
		scope = 2;
		displayName = "Weapon license LEVEL 2";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols - Shotguns";
		visibilityModifier = 0.8;
		
	};
	class FS_License_L3: FS_License_Base
	{
		scope = 2;
		displayName = "Weapon license LEVEL 3";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols - Shotguns - PP";
		visibilityModifier = 0.8;
		
	};
	class FS_License_L4: FS_License_Base
	{
		scope = 2;
		displayName = "Weapon license LEVEL 4";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols - Shotguns - PP - Assault Rifles";
		visibilityModifier = 0.8;
		
	};
	class FS_License_L5: FS_License_Base
	{
		scope = 2;
		displayName = "Weapon license LEVEL 5";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols - Shotguns - PP - Assault Rifles - Sniper Rifles";
		visibilityModifier = 0.8;
		
	};
	class FS_License_L6: FS_License_Base
	{
		scope = 2;
		displayName = "weapon license LEVEL 6 - EXPERT";
		descriptionShort = "Weapon license, storage and use permitted. Category - Pistols - Shotguns - PP - Assault Rifles - Sniper Rifles - Heavy Machine Guns";
		visibilityModifier = 0.8;
		
	};
};
