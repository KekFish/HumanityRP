////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\vdv\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:10 2020 : 'file' last modified on Mon Jun 01 22:47:53 2020
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
	class CargoPants_Beige;
	class HuntingJacket_Autumn;
	class TortillaBag;
	class FS_ImproStalkerBag_beige: TortillaBag
	{
		scope = 2;
		displayName = "Improved Stalker Backpack";
		descriptionShort = "Not a big, good quality backpack. You can't take a bunch of swag, but a couple of canned goods will definitely fit. ------- MOD BY FIDOv = FS_MOD =";
		
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		attachments[] = {""};
		itemSize[] = {4,4};
		itemsCargoSize[] = {10,5};
		weight = 700;
		absorbency = 0;
		heatIsolation = 0.5;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
	class FS_ImproStalkerJacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Improved stalker jacket";
		descriptionShort = "Stalker's warm thick jacket. That's straight quality";
		
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1600;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,6};
		quickBarBonus = 5;
		heatIsolation = 0.6;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
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
	class FS_ImproStalkerJacket_beige: FS_ImproStalkerJacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		
	};
	class FS_ImproStalkerPants_ColorBase: CargoPants_Beige
	{
		displayName = "Improved stalker's pants";
		descriptionShort = "Tighter and nicer stalker pants. It won't save you from a bullet, but it is possible from a bite from a blind dog.";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		weight = 1100;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.6;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
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
	class FS_ImproStalkerPants_beige: FS_ImproStalkerPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class PressVest_Blue;
	class FS_EXO_ColorBase: PressVest_Blue
	{
		displayName = "Exoskeleton";
		descriptionShort = "Increases Portable Protection";
		
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 10000;
		itemSize[] = {7,7};
		itemsCargoSize[] = {5,7};
		quickBarBonus = 8;
		absorbency = 0.1;
		heatIsolation = 0.2;
		visibilityModifier = 0.95;
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
					hitpoints = 50;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
			};
		};
	};
	class FS_EXO_Bandit: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Dolg: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Free: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Monolit: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_Specnaz: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_tank: FS_EXO_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_ColorBase: PressVest_Blue
	{
		displayName = "Exoskeleton Leg";
		descriptionShort = "Increases Portable Weight";
		
		inventorySlot = "Hips";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = -40000;
		itemSize[] = {7,10};
		itemsCargoSize[] = {3,5};
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.2;
		visibilityModifier = 0.95;
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
					hitpoints = 50;
					
				};
			};
		};
	};
	class FS_EXO_leg_Bandit: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_Dolg: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_Free: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_Monolit: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_Specnaz: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_EXO_leg_tank: FS_EXO_leg_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "Quality Stalker's Pants";
		descriptionShort = "Warm knee-length military pants MOD FIDOv Stalker";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1200;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
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
	class FS_ST_Pants_Pixel: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_tan: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_Sea: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_Netral: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_Netral2: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_Bandit: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_DOLG: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_SVOBODA: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ST_Pants_ClearSky: FS_ST_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_ColorBase: CargoPants_Beige
	{
		displayName = "Tactical Pants";
		descriptionShort = "For fighters of special services";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1000;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
					hitpoints = 100;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
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
	class FS_SKELETON_PANTS: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		class ClothingTypes
		{
			
			
		};
		
	};
	class FS_TacticalPants_vkpo: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_black: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_gorka_autumn: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_gorka_summer: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_Clear_Sky: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_Desert: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_Dolg: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_free: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_tan: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_olive: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_ttsco: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_TacticalPants_WoodLand: FS_TacticalPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ArmyPants_ColorBase: CargoPants_Beige
	{
		displayName = "Military pants";
		descriptionShort = "Warm knee-length military pants";
		
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1200;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
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
					hitpoints = 100;
					
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
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
	class FS_ArmyPants: FS_ArmyPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ArmyPants_Military: FS_ArmyPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		
	};
	class FS_ArmyPants_DOLG: FS_ArmyPants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		displayName = "Military pants DEBT";
		
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBokaBag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "BokaBag";
		
	};
	class ProxyzadBag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "zadBag";
		
	};
	class ProxyPeredBag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "PeredBag";
		
	};
};

