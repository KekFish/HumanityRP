class CfgPatches
{
	class mah_item_scripts
	{
		units[] = {
			"mah_batterycase",
			"mah_nbcpouch",
			"mah_scoutcase"
		};
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Gear_Containers",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class mah_item
	{	dir="HumanityRP";
		credits="Mahauu";
		author="Mahauu";
		type = "mod";
	};
};
class CfgSlots
{
	class Slot_B1
	{
		name="B1";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B2
	{
		name="B2";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B3
	{
		name="B3";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B4
	{
		name="B4";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B5
	{
		name="B5";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B6
	{
		name="B6";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B7
	{
		name="B7";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B8
	{
		name="B8";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B9
	{
		name="B9";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B10
	{
		name="B10";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B11
	{
		name="B11";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B12
	{
		name="B12";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B13
	{
		name="B13";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B14
	{
		name="B14";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_B15
	{
		name="B15";
		displayName="$STR_CfgBatteryD0";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
	class Slot_NBC1
	{
		name="NBC1";
		displayName="Rekawiczki NBC";
		ghostIcon="set:dayz_inventory image:gloves";
	};
	class Slot_NBC2
	{
		name="NBC2";
		displayName="Buty NBC";
		ghostIcon="set:dayz_inventory image:feet";
	};
	class Slot_NBC3
	{
		name="NBC3";
		displayName="Kaptur NBC";
		ghostIcon="set:dayz_inventory image:headgear";
	};
	class Slot_NBC4
	{
		name="NBC4";
		displayName="Kurtka NBC";
		ghostIcon="set:dayz_inventory image:body";
	};
	class Slot_NBC5
	{
		name="NBC5";
		displayName="Spodnie NBC";
		ghostIcon="set:dayz_inventory image:legs";
	};
	class Slot_GasMaskNBC
	{
		name="GasMaskNBC";
		displayName="Maska Gazowa";
		ghostIcon="set:dayz_inventory image:mask";
	};
	class Slot_PetrolLighter
	{
		name="PetrolLighter";
		displayName="Zapalniczka";
		ghostIcon="set:dayz_inventory image:dot";
	};
	class Slot_CanOpener
	{
		name="CanOpener";
		displayName="Otwieracz do konserw";
		ghostIcon="set:dayz_inventory image:dot";
	};
	class Slot_Matchbox
	{
		name="Matchbox";
		displayName="Zapałki";
		ghostIcon="set:dayz_inventory image:dot";
	};
	class Slot_GasStove
	{
		name="GasStove";
		displayName="Kuchenka gazowa";
		ghostIcon="set:dayz_inventory image:dot";
	};

};
class CfgVehicles
{
	class Clothing;
	class Inventory_Base;
	class FirstAidKit;
	class SmallProtectorCase;

	class PortableGasStove: Inventory_Base
	{
		inventorySlot[]= {	
			"GasStove"
		};
	};
	class Matchbox: Inventory_Base
	{
		inventorySlot[]= {	
			"Matchbox"
		};

	};
	class CanOpener: Inventory_Base
	{
		inventorySlot[]= {	
			"CanOpener"
		};

	};
	class PetrolLighter: Inventory_Base
	{
		inventorySlot[]= {	
			"PetrolLighter"
		};

	};
	class NBCGloves_ColorBase: Clothing
	{	
		inventorySlot[]= {
			"Gloves",	
			"NBC1"
		};
	};
	class NBCBootsBase: Clothing
	{	
		inventorySlot[]= {
			"Feet",
			"NBC2"
		};
	};
	class NBCHoodBase: Clothing
	{	
		inventorySlot[]= {
			"Headgear",	
			"NBC3"
		};
	};
	class NBCJacketBase: Clothing
	{	
		inventorySlot[]= {
			"Body",
			"NBC4"
		};
	};
	class NBCPantsBase: Clothing
	{	
		inventorySlot[]= {
			"Legs",
			"NBC5"
		};
	};
	class GP5GasMask: Inventory_Base
	{	
		inventorySlot[]= {
			"Mask",	
			"GasMaskNBC"
		};
	};
	class AirborneMask: Inventory_Base
	{	
		inventorySlot[]= {
			"Mask",	
			"GasMaskNBC"
		};
	};
	class Battery9V: Inventory_Base
	{	
		inventorySlot[]= {	
			"B1",
			"B2",
			"B3",
			"BatteryD",
			"B4",
			"B5",
			"B6",
			"B7",
			"B8",
			"B9",
			"B10",
			"B11",
			"B12",
			"B13",
			"B14",
		};
	};
	class mah_batterycase: Inventory_Base
	{
		scope = 2;
		title = "Pudełko na baterie";
		displayName = "Pudełko na baterie";
		descriptionShort = "Masywne opakowanie na baterie";
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		animClass="Knife";
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\HumanityRP\mah_item\data\batterycase.paa",


		};
		itemSize[] = {2,2};
		weight = 250;
		epairableWithKits[]={8};
		repairCosts[] = {25};
		attachments[] = {
			"B1",
			"B2",
			"B3",
			"BatteryD",
			"B4",
			"B5",
			"B6",
			"B7",
			"B8",
			"B9",
			"B10",
			"B11",
			"B12",
			"B13",
			"B14"
		};
	};
	class mah_nbcpouch: FirstAidKit
	{
		scope=2;
		displayName="Pojemnik na strój NBC";
		descriptionShort="Bezpiecznie miejsce na Twój strój NBC";
		model="\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		allowOwnedCargoManipulation=0;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		attachments[] = {
			"NBC1",
			"NBC2",
			"NBC3",
			"NBC4",
			"NBC5",
			"GasMaskNBC"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\HumanityRP\mah_item\data\nbcpouch.paa",

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\DZ\gear\containers\data\FirsAidKit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\DZ\gear\containers\data\FirsAidKit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\DZ\gear\containers\data\FirsAidKit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class mah_scoutcase: SmallProtectorCase
	{
		scope=2;
		displayName="Zestaw kucharza polowego";
		descriptionShort="Mocne pudełko do przechowywania rzeczy do gotowania";
		model="\dz\gear\containers\Protector_Case.p3d";
		rotationFlags=17;
		weight=980;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		attachments[] = {
			"GasCanister",
			"GasStove",
			"CookingEquipment",
			"CookingEquipment",
			"Knife",
			"CanOpener",
			"PetrolLighter",
			"Matchbox"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\HumanityRP\mah_item\data\scoutcase.paa",


		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\DZ\gear\containers\data\Protector_Case_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
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
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};