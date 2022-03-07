////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\Eco\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:06 2020 : 'file' last modified on Mon Jun 01 22:47:51 2020
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
	class NBCPantsBase;
	class NBCJacketGray;
	class TortillaBag;
	class NBCBootsGray;
	class FS_EcoBag_colorBase: TortillaBag
	{
		scope = 2;
		displayName = "Rear Module SSP-99 Ecologist";
		descriptionShort = "The SSP-99 chemical protection suit created for work in the Zone. Used by expeditions of scientists and environmental stalkers who collaborate with them. Built-in air filtration and conditioning system. Not designed for warfare. MOD BY FIDOv = FS_MOD =";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		attachments[] = {""};
		itemSize[] = {6,6};
		itemsCargoSize[] = {7,9};
		weight = 3100;
		absorbency = 0;
		heatIsolation = 0.08;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomFidovPublic"};
		class ClothingTypes
		{
			
			
		};
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_Eco_Orange_Bag: FS_EcoBag_colorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Eco_Green_Bag: FS_EcoBag_colorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Eco_ColorBase: NBCJacketGray
	{
		scope = 0;
		displayName = "SSP-99 Ecologist";
		descriptionShort = "The SSP-99 chemical protection suit created for work in the Zone. Used by expeditions of scientists and environmental stalkers who collaborate with them. Built-in air filtration and conditioning system. Not designed for warfare.";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		weight = 1500;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		quickBarBonus = 3;
		heatIsolation = 0.8;
		absorbency = 0.1;
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomFidovPublic1","vkcomFidovPublic2"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 170;
					
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
			};
		};
		class ClothingTypes
		{
			
			
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_Eco_Gray_Jacket: FS_Eco_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Eco_Orange_Jacket: FS_Eco_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_Eco_Green_Jacket: FS_Eco_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ECO_Pants_ColorBase: NBCPantsBase
	{
		scope = 0;
		displayName = "Pants SSP-99 Ecologist";
		descriptionShort = "Pants from the set SSP-99 Ecologist. --------------- MOD FIDOv Stalker, Have a nice game";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
	};
	class FS_ECO_Gray_Pants: FS_ECO_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
	class FS_ECO_Green_Pants: FS_ECO_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
	class FS_ECO_Orange_Pants: FS_ECO_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
	class FS_ECO_Boots_Colorbase: NBCBootsGray
	{
		scope = 0;
		displayName = "Shoe covers SSP-99 Ecologist";
		descriptionShort = "Bohilas from the SSP 99 kit Ecologist.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
	};
	class FS_ECO_Gray_Boots: FS_ECO_Boots_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
	class FS_ECO_Orange_Boots: FS_ECO_Boots_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
	class FS_ECO_Green_Boots: FS_ECO_Boots_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		
	};
};
