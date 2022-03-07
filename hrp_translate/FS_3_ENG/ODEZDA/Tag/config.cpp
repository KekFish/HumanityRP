////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Tag\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Armband_Yellow;
	class Sweater_Gray;
	class LeatherBelt_Beige;
	class FS_TAG_ColorBase: LeatherBelt_Beige
	{
		scope = 0;
		displayName = "Chevron";
		descriptionShort = "Chevron that is fastened over the shoulder.";
		
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1,2};
		inventorySlot = "Armband";
		attachments[] = {""};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {1,1};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"vkcomfidovpublicc"};
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
		class ClothingTypes
		{
			
			
		};
	};
	class FS_TAG_Bandit: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ClearSky: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_DOLG: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_DOLG_KANON: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_monolit: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_monolit_KANON: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_NAEM: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_NAUKA: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_Odin: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_renegati: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_SVOBODA: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_1: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_2: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_3: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_4: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_5_Starsina: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_6_Letexa: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_7_StarLetexa: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_8_Kapitan: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_9_maer: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_10_PodPolkov: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_11_Polkov: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_12_GeneralMaer: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_13_GeneralLetex: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_14_GeneralPolk: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_ARMY_MEDIC: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_BlackAngel: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_FIDOv: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_CherepGroup: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_SpecFID: FS_TAG_ColorBase
	{
		scope = 2;
		displayName = "Шеврон уничтожителей ";
		descriptionShort = "Появились в зоне неизвестно когда. Про группировку почти ничего не известно. Известно что это специально подготовленные люди, которые преследуют свои цели. Если ты нашел этот шеврон, советую выкинуть. Они тебя найдут, и точно просто так не отпустят.";
		
		
	};
	class FS_TAG_Temnie: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_GREX: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
	class FS_TAG_Netrals: FS_TAG_ColorBase
	{
		scope = 2;
		
		
	};
};
