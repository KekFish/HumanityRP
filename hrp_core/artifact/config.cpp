class CfgPatches
{
	class hrp_Characters
	{
		requiredAddons[] = {"DZ_Characters"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		attachments[] = {"Head","Shoulder","Melee","Headgear","Mask","Eyewear","Hands","LeftHand","Gloves","Armband","Vest","Body","Back","Hips","Legs","Feet","Splint_Right","ART"};
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Shoulder","Slot_Melee","Slot_Vest","Slot_Body","Slot_Hips","Slot_Legs","Slot_Back","Slot_Headgear","Slot_Mask","Slot_Eyewear","Slot_Gloves","Slot_Feet","Slot_Armband","Slot_ART"};
		};
	};
};
