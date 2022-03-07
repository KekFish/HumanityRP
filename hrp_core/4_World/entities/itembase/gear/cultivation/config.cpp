class CfgPatches
{
	class HumanityRP_Cultivation
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{



	class Edible_Base;
	class SlicedPumpkin: Edible_Base
	{


		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,50,25,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,100,25,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,75,75,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={1,75,0,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={2,4,4};
					nutrition_properties[]={5,25,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			
		};



	};
	class Potato: Edible_Base
	{
		
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,50,25,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,25,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,125,25,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,100,25,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,100,0,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,75,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			
		};
		
	};
	
	class Zucchini: Edible_Base
	{
		
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,75,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,125,50,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,100,0,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,125,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			
		};
		
		
	};
	
	class GreenBellPepper: Edible_Base
	{
		
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,50,25,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,25,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,125,25,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,100,0,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
		};
		
	};
	
	class Tomato: Edible_Base
	{
		
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,25,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,75,50,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,50,75,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,50,0,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			
			
		};
	};
	

	
};