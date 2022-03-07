////////////////////////////////////////////////////////////////////
//DeRap: FV_ST_PACK\saharov\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:05:05 2020 : 'file' last modified on Tue Jun 02 00:10:26 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters
	{
		units[] = {"SurvivorMale","SurvivorFemale","SurvivorParts","SurvivorPartsFemale","SurvivorPartsMale","zombieCoverallsBeige","zombieCoverallsBlue","zombieCoverallsGreen","zombieCoverallsGrey","zombieCoverallsWhite","zombieJacketBeige","zombieJacketBlack","zombieJacketBlue","zombieJacketBluechecks","zombieJacketBrown","zombieJacketGreenchecks","zombieJacketGrey","zombieJacketKhaki","zombieJacketMagenta","zombieJacketStripes","zombieShortskirtBeige","zombieShortskirtBlack","zombieShortskirtBrown","zombieShortskirtChecks","zombieShortskirtGreen","zombieShortskirtGrey","zombieShortskirtRed","zombieShortskirtStripes","zombieShortskirtWhite","zombieShortskirtYellow","zombieJacketBeigeNew","zombieJacketBlackNew","zombieJacketBlueNew"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgFSMs{};
class CfgVehicles
{
	class Man;
	class FS_Saharov: Man
	{
		scope = 2;
		
		simpleHiddenSelections[] = {"slot_melee_rifle","slot_melee_melee","slot_shoulder_rifle","slot_shoulder_melee"};
		woman = 0;
		class Lifespan
		{
			class Beard
			{
				mat[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)","dz\characters\heads\data\hhl_dummy_skin_material.rvmat","#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)","dz\characters\heads\data\hhl_dummy_skin_material.rvmat","#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)","dz\characters\heads\data\hhl_dummy_skin_material.rvmat"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat","DZ\characters\heads\data\hhl_dummy_skin_material.rvmat"};
		};
		accuracy = 1000;
		handGunBone = "RightHand";
		weaponBone = "RightHand_Dummy";
		inventorySlot = "Driver";
		attachments[] = {"Head","Shoulder","Melee","Headgear","Mask","Eyewear","Hands","LeftHand","Gloves","Armband","Vest","Body","Back","Hips","Legs","Feet"};
		simulation = "dayzplayer";
		class enfAnimSys
		{
			meshObject = "dz\characters\bodies\player_testing.xob";
			graphName = "dz\anims\workspaces\player\player_main\player_main.agr";
			defaultInstance = "dz\anims\workspaces\player\player_main\player_main.asi";
			skeletonName = "player_testing.xob";
			startNode = "MasterControl";
		};
		class AnimSystem
		{
			meshObject = "INVALID MESH OBJET NAME";
			animGraph = "INVALID ANIMGRAPH NAME";
		};
		class Skinning
		{
			class Steaks
			{
				item = "HumanSteakMeat";
				count = 10;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class Guts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class Lard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class Bones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.75,1};
			};
		};
		class DayZPlayer
		{
			class P3DAttachments
			{
				P3DProxies[] = {"spine1","righthand_dummy","spine2","head","rightlegroll","spine3","lefthand","pelvis","leftshoulder","rightshoulder"};
				BoneNames[] = {"Spine1","RightHand_Dummy","Spine2","Head","RightLegRoll","Spine3","LeftHand","Pelvis","LeftShoulder","RightShoulder"};
			};
			class CommandMoveDir
			{
				RunSpringTimeout = 0.1;
				RunSpringMaxChange = 4;
				DirFilterTimeout = 0.1;
				DirFilterSpeed = 6.28319;
				MaxSprintAngle = 45.01;
				ikSetup = "LR";
			};
			class CommandLookAt
			{
				HeadDirFilterTimeout = 0.2;
				HeadDirFilterSpeed = 3.14;
			};
		};
		class MeleeModes
		{
			class Fist
			{
				ammo = "MeleeFist";
				range = 1.2;
			};
			class Fist_Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.2;
			};
			class Fist_Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		storageCategory = 9;
		class InventoryEquipment
		{
			playerSlots[] = {"Slot_Shoulder","Slot_Melee","Slot_Vest","Slot_Body","Slot_Hips","Slot_Legs","Slot_Back","Slot_Headgear","Slot_Mask","Slot_Eyewear","Slot_Gloves","Slot_Feet","Slot_Armband"};
		};
		class AIPlayerParams
		{
			teamName = "Player";
		};
		directSpeakRange = 30;
		faction = "dz_Civ_US";
		rarityUrban = -1;
		Icon = "\dz\Characters\data\UI\icons\soldier_CA.paa";
		canCarryBackPack = 1;
		supplyRadius = 1.5;
		quickBarBonus = 2;
		customHeads[] = {};
		selectionPersonality = "personality";
		vehicleClass = "People";
		faceType = "MaleWhiteHeadNew";
		languages[] = {};
		threat[] = {1,0.05,0.05};
		extCameraPosition[] = {0.25,-0.25,-2.35};
		extCameraPositionMoving[] = {0.1,-0.25,-2.89};
		extCameraPositionRaisedWeapon[] = {0.55,-0.33,-1.51,-0.45,-0.33,-1.51};
		extCameraPositionRaisedWeaponMoving[] = {0.1,-0.32,-2.54};
		extCameraPositionRaised[] = {0.25,-0.16,-1.39,-0.15,-0.16,-1.39};
		extCameraPositionRaisedMoving[] = {0.25,-0.24,-2.53,-0.15,-0.24,-2.53};
		extCameraSpeedBound[] = {4.2,6.9};
		extCamTopZoomCoef = 0.725;
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
		launcherBone = "launcher";
		selectionHeadWound = "injury_head";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionHeadHide = "";
		selectionNeckHide = "";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		memoryPointCommonDamage = "l_femur_hit";
		memoryPointLeaningAxis = "leaning_axis";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointHeadAxis = "head_axis";
		selectionLBrow = "lBrow";
		selectionMBrow = "mBrow";
		selectionRBrow = "rBrow";
		selectionLMouth = "lMouth";
		selectionMMouth = "mMouth";
		selectionRMouth = "rMouth";
		selectionEyelid = "Eyelids";
		selectionLip = "LLip";
		class VegetationSounds
		{
			class bush_walkErc
			{
				soundSet = "bush_walkErc_SoundSet";
				animEventIds[] = {1,2,23,24,51,52};
			};
			class bush_walkCro
			{
				soundSet = "bush_walkCro_SoundSet";
				animEventIds[] = {21,22,31,32,33,34,131};
			};
			class bush_runErc
			{
				soundSet = "bush_runErc_SoundSet";
				animEventIds[] = {3,4,17,101,53,54};
			};
			class bush_sprintErc
			{
				soundSet = "bush_sprintErc_SoundSet";
				animEventIds[] = {5,6,35,36,37,38,100,110,111};
			};
			class bush_scuffErc
			{
				soundSet = "bush_scuffErc_SoundSet";
				animEventIds[] = {7,8};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		
	};
	class ProxyShoulder;
	class ProxyRPG7_Proxy: ProxyShoulder
	{
		
	};
	class ProxyArmband;
	class ProxyArmband_DZ: ProxyArmband
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
	class ProxyBody;
	class ProxyBody_DZ: ProxyBody
	{
		
	};
	class ProxyLegs;
	class ProxyLegs_DZ: ProxyLegs
	{
		
	};
	class ProxyFeet;
	class ProxyFeet_DZ: ProxyFeet
	{
		
	};
	class ProxyGloves;
	class ProxyGloves_DZ: ProxyGloves
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
	class ProxyBow;
	class ProxyBow_DZ: ProxyBow
	{
		
	};
	class ProxyHips;
	class ProxyHips_DZ: ProxyHips
	{
		
	};
	class ProxyAttachment;
	class ProxyLHand_DZ: ProxyAttachment
	{
		inventorySlot = "LeftHand";
		
	};
};
