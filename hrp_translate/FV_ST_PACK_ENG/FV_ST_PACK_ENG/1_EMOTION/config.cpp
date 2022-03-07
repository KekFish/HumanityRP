////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\1_EMOTION\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:46 2020 : 'file' last modified on Tue Jun 02 00:10:26 2020
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
	class FS_EMOTION_Base: Sweater_Gray
	{
		scope = 0;
		displayName = "HELP TO EXPRESS YOUR THOUGHTS";
		descriptionShort = "Careful, she will shoot you, glows in the dark.!";
		
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1,1};
		inventorySlot = "Armband";
		attachments[] = {""};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {1,1};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {""};
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_DOLG: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "DEBT";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_ADMIN: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "ADMIN";
		

		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_AFK: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "LEFT AFK";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_CHISTOE_NEBO: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "CLEAR SKY";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_MONOLIT: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "MONOLITH";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_NAEMNIK: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "MERCENARY";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_ODINOCKA: FS_EMOTION_Base
	{
		displayName = "Lonely";
		scope = 2;
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_Grupa: FS_EMOTION_Base
	{
		displayName = "LOOKING FOR A PARTY";
		scope = 2;
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_PROVODNIK: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "CONDUCTOR";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_OxotaNa: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "LOOKING FOR A RIDE";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_SMOKE: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "LEFT TO SMOKE";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_STALKER: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "STALKER";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_SVOBODA: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "FREEDOM";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_TopStrelok: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "TOP ARROWS EPTA";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_LABORANT: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "LABORANT";
		
		class ClothingTypes
		{
			
			
		};
	};
	class FS_EMOTION_OPASNIY: FS_EMOTION_Base
	{
		scope = 2;
		displayName = "DANGEROUS ";
		
		class ClothingTypes
		{
			
			
		};
	};
};
