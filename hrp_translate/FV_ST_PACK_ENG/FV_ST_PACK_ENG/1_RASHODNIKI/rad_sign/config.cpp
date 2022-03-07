////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_RASHODNIKI\rad_sign\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:46 2020 : 'file' last modified on Tue Jun 02 00:10:27 2020
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
	class FS_SIGN_base: HouseNoDestruct
	{
		scope = 0;
		
		hiddenSelections[] = {"vkcomfidovpublic"};
	};
	class FS_SIGN_band: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_ClearSky: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_Dolg: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_Ecologs: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_Monolit: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_naem: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_renegat: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_trader: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_TraderAshot: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_Svoboda: FS_SIGN_base
	{
		scope = 2;
		
	};
	class FS_SIGN_Radiation: FS_SIGN_base
	{
		scope = 2;
		
	};
};
