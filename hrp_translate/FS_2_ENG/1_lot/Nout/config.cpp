////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_lot\Nout\config.bin
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
	class FS_PREDMET_Noutbuk: Inventory_Base
	{
		scope = 2;
		displayName = "Notebook";
		descriptionShort = "2 giga, 2 cores, 512MB Vidyuha.";
		
		weight = 1500;
		itemSize[] = {3,3};
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
