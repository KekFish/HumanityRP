modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	
		super.RegisterRecipies();
		RegisterRecipe(new RepairGasMask_Filter);
		RegisterRecipe(new CraftManiacMask);
		RegisterRecipe(new CraftVodka);
		RegisterRecipe(new CraftLeatherGloves);
		RegisterRecipe(new CraftLeatherHat);
		RegisterRecipe(new CraftLeatherJacket);
		RegisterRecipe(new CraftLeatherPants);
		RegisterRecipe(new CraftLeatherStorageVest);
		RegisterRecipe(new CraftLeatherWaterPouch);
		RegisterRecipe(new CraftEmptyPlanterBox);
		RegisterRecipe(new CraftNail);
		RegisterRecipe(new CraftNailBox);
		RegisterRecipe(new CraftBletki);
		RegisterRecipe(new CraftBarrel);
		RegisterRecipe(new CraftSeaChest);
		RegisterRecipe(new CraftFlour);
	}
}