////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_Test\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:41 2021 : 'file' last modified on Mon Dec 21 05:19:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Structures_Wrecks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class FS_TEST_Moy_Stol_Doma: HouseNoDestruct
	{
		scope = 2;
		
	};
	class FS_Test_MaterialSMDI: HouseNoDestruct
	{
		scope = 2;
		
	};
};
