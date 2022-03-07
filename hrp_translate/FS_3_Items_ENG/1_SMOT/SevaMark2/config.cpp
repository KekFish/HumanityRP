////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\SevaMark2\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:40 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GP5GasMask;
	class FS_SevaMark2_XyunaBase: GP5GasMask
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		descriptionShort = "Engineered Seva Overalls, Quality materials, tempered glass, improved protection against external threats, covered with a protective layer that prevents wetness and wind.";
		
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 2730;
		itemSize[] = {5,5};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		
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
		class ClothingTypes
		{
			
			
		};
		class Protection
		{
			biological = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
	class FS_SevaMark2_ClearSky: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA CHN";
		
	};
	class FS_SevaMark2_DOLG: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA DEBT";
		
	};
	class FS_SevaMark2_Svoboda: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA FREEDOM";
		
	};
	class FS_SevaMark2_Svoboda2: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA FREEDOM";
		
	};
	class FS_SevaMark2_Naim: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA Mercenary";
		
	};
	class FS_SevaMark2_Monolit: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA Monolith";
		
	};
	class FS_SevaMark2_EcoOrange: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA Eco-Orange";
		
	};
	class FS_SevaMark2_EcoGreen: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA Eco-Green";
		
	};
	class FS_SevaMark2_brown: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		
	};
	class FS_SevaMark2_Green: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		
	};
	class FS_SevaMark2_Camo: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		
	};
	class FS_SevaMark2_Camo2: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		
	};
	class FS_SevaMark2_Black: FS_SevaMark2_XyunaBase
	{
		scope = 2;
		displayName = "Quality coveralls SEVA";
		
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymask_filter: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"GasMaskFilter"};
		
	};
};
