class CfgPatches
{
	class DZ_Weapons_Muzzles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemBarrel: Inventory_Base
	{
	};
	class ItemSuppressor: Inventory_Base
	{
		barrelArmor=6000;
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		repairableWithKits[]={5};
		repairCosts[]={50};
		barrelArmor=900;
		noiseShootModifier=-0.85;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
				};
			};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		barrelArmor=2000;
		noiseShootModifier=-0.93;
		};
	class AK_Suppressor: ItemSuppressor
	{
		
		barrelArmor=2000;
		noiseShootModifier=-0.93;
				
	};
	class PistolSuppressor: ItemSuppressor
	{
		
		barrelArmor=1000;
		noiseShootModifier=-0.95;
		
	};
	class MakarovPBSuppressor: ItemSuppressor
	{
		barrelArmor=1000;
		noiseShootModifier=-0.99;
		
		
	};
};