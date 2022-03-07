modded class GasMask_Filter extends ItemBase
{
	override void OnQuantityChanged(float delta)
	{
		super.OnQuantityChanged(delta);
		
		if (GetQuantity() == 0)
		{
			SetHealth("","",1);
		}
	}
	
}