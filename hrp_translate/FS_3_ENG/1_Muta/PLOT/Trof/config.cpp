////////////////////////////////////////////////////////////////////
//DeRap: FS_3\1_Muta\PLOT\Trof\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:14 2020 : 'file' last modified on Tue Jun 02 01:39:41 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Rice;
	class Pumpkin;
	class Inventory_Base;
	class FS_Plot_Golova: Inventory_Base
	{
		scope = 2;
		displayName = "Head of Flesh";
		descriptionShort = "It stinks of horror. Horror";
		
		weight = 1300;
		itemSize[] = {3,3};
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		absorbency = 0.9;
		rotationFlags = 63;
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
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 150;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 5005;
			agents = 5;
		};
		class DamageApplied
		{
			dispersion = 0;
			bleedThreshold = 0.3;
			Health = 20;
			Blood = 100;
			Shock = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_Plot_Pelvis: Rice
	{
		scope = 2;
		displayName = "Back of Flesh";
		descriptionShort = "It stinks of horror.";
		
		weight = 2300;
		itemSize[] = {5,4};
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		absorbency = 0.9;
		rotationFlags = 63;
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
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 150;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 5005;
			agents = 5;
		};
		class DamageApplied
		{
			dispersion = 0;
			bleedThreshold = 0.3;
			Health = 20;
			Blood = 100;
			Shock = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
};
