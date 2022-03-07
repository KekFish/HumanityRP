////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_Char\barmen\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:02 2020 : 'file' last modified on Mon Jun 01 22:47:50 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[] = {"Hermit_NewAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class FS_Saharov;
	class FS_Barmen_Char: FS_Saharov
	{
		scope = 2;
	};
	class FS_Barmen_War: FS_Saharov
	{
		scope = 2;
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
	};
};
