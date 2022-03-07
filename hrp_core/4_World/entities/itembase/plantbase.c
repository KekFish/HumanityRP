modded class PlantBase extends ItemBase
{


    override void RemovePlant()
	{
		if ( GetGame() && GetGame().IsServer() )
		{
			UnlockFromParent();
			
			RemoveSlot();
		}
	}
	
	override void RemovePlantEx( vector pos )
	{
		if ( GetGame() && GetGame().IsServer() )
		{
			UnlockFromParent();
			
			RemoveSlot();
		}
	}


}