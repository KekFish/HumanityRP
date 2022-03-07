////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_lot\Seva\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:03 2020 : 'file' last modified on Mon Jun 01 22:47:51 2020
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
	class FS_PREDMET_ChertezSEVA: Inventory_Base
	{
		scope = 2;
		displayName = "Closed breathing suit drawing";
		descriptionShort = "Project";
		
		weight = 100;
		itemSize[] = {1,1};
		absorbency = 0.9;
		rotationFlags = 63;
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
	class FS_PREDMET_Detali_SEVA: Inventory_Base
	{
		scope = 2;
		displayName = "Closed Breathing Suit Details";
		descriptionShort = "Details";
		
		weight = 400;
		itemSize[] = {2,2};
		absorbency = 0.9;
		rotationFlags = 63;
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
};
