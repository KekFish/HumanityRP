////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Rounds\bullet\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:18 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Projectiles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Projectiles"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_PowerGaus
	{
		name = "Bullet_PowerGaus";
	};
};
class CfgAmmo
{
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Bullet_762x54;
	class Arrow_Bolt;
	class Arrow_Boned;
	class Bullet_380;
	class Bullet_308Win;
	class Bullet_9x39;
	class Bullet_9x19;
	class Bullet_12GaugePellets;
	class Explosion_NonLethal;
	class Bullet_PowerGaus: Bullet_762x54
	{
		scope = 2;
		
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "Ammo_PowerGaus";
		hit = 550;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 52.2;
		airLock = 0;
		typicalSpeed = 5060;
		caliber = 12;
		airFriction = -0.0003;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		initSpeed = 5030;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		weight = 0.01;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 20000;
			};
			class Blood
			{
				damage = 20000;
			};
			class Shock
			{
				damage = 20000;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
};
