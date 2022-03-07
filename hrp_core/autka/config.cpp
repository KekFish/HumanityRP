class CfgPatches
{
	class HumanityRP_Autka
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{"DZ_Data"};
	};
};
class CfgMods
{
	class HumanityRP
	{
		dir="HumanityRP/";
		author="KekFish";
		type="mod";
		dependencies[]={};
	};
};
class CfgVehicles
{
	class CarScript;
	class OffroadHatchback: CarScript
	{

		fuelCapacity=50;
		fuelConsumption=22;

	};
	class CivilianSedan: CarScript
	{

		fuelCapacity=60;
		fuelConsumption=26;

	};
	class Hatchback_02: CarScript
	{

		fuelCapacity=60;
		fuelConsumption=15;

	};
	class Sedan_02: CarScript
	{

		fuelCapacity=45;
		fuelConsumption=16;

	};
	class Truck_01_Base: CarScript
	{

		fuelCapacity=150;
		fuelConsumption=50;

	};

};

