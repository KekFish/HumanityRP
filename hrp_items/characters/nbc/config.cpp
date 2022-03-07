class cfgPatches
{
	class HumanityRP_nbc_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class NBCGloves_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.8;
		};
	};
	class SurgicalGloves_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.33;
		};
	};
	class NBCHoodBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.4;
		};
	};
	class GasMask: Clothing
	{
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0.4;
		};
	};
	class GP5GasMask: Clothing
	{
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0.8;
		};
	};
	class AirborneMask: Clothing
	{
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0.4;
		};
	};
	class GP5GasMask_Filter: Inventory_Base
	{
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0.8;
		};
	};
	class GorkaPants_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0.25;
			radiation = 0.25;
		};
	};
	class FirefightersPants_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.33;
		};
	};
	class NBCPantsBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.8;
		};
	};
	class Wellies_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.33;
		};
	};
	class NBCBootsBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.8;
		};
	};
	class GorkaEJacket_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.25;
		};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.33;
		};
	};
	class LabCoat: Clothing
	{
		class Protection
		{
			chemical = 0.0;
			radiation = 0.1;
		};
	};
	class NBCJacketBase: Clothing
	{
		class Protection
		{
			chemical = 0;
			radiation = 0.8;
			hasdosimeter = 1;
		};
	};
	class GasMask_Filter: Inventory_Base
	{
		class Protection
		{
			biological = 1;
			chemical = 0;
			radiation = 0.8;
		};
	};
};
