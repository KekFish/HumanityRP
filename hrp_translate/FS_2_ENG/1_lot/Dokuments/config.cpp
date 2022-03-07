////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_lot\Dokuments\config.bin
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
	class FS_Document_1: Inventory_Base
	{
		scope = 2;
		displayName = "Documents";
		descriptionShort = "Documents with interesting information";
		
		weight = 300;
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
	class FS_Document_2: Inventory_Base
	{
		scope = 2;
		displayName = "Important documents";
		descriptionShort = "Documents with IMPORTANT information";
		
		weight = 300;
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
	class FS_Document_3: Inventory_Base
	{
		scope = 2;
		displayName = "Secret Documents";
		descriptionShort = "Documents with SECRET INFORMATION";
		
		weight = 300;
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
};
