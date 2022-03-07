////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\Tac_plash\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:41 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
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
	class Balaclava3Holes_Beige;
	class PoliceVest;
	class FS_Plash_Tactical_color: PoliceVest
	{
		scope = 2;
		displayName = "Tactical cloak";
		descriptionShort = "Nice raincoat made of membrane fabric";
		
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		weight = 300;
		itemSize[] = {3,2};
		varWetMax = 0.79;
		heatIsolation = 0.6;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		
		class ClothingTypes
		{
			
			
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 301;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
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
	class FS_Plash_Tactical_blue: FS_Plash_Tactical_color
	{
		scope = 2;
		displayName = "Tactical cloak blue";
		
	};
	class FS_Plash_Tactical_green: FS_Plash_Tactical_color
	{
		scope = 2;
		displayName = "Tactical cloak green";
		
	};
	class FS_Plash_Tactical_brown: FS_Plash_Tactical_color
	{
		scope = 2;
		displayName = "Tactical cloak brown";
		
	};
	class FS_Plash_Tactical_black: FS_Plash_Tactical_color
	{
		scope = 2;
		displayName = "Tactical cloak black";
		
	};
	class FS_SKULL_Balaclava: Balaclava3Holes_Beige
	{
		scope = 2;
		displayName = "Tactical cloak beige";
		descriptionShort = "By FIDOv";
		
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 17;
		weight = 300;
		itemSize[] = {3,2};
		ragQuantity = 2;
		absorbency = 0.85;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_Balaclava_3holes"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
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
		class Protection
		{
			biological = 0.25;
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
