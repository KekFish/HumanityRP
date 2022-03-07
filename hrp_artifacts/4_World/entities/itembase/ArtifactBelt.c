class ArtifactBelt : MilitaryBelt
{

	override void EEItemAttached(EntityAI item, string slot_name)
	{
	
		super.EEItemAttached(item, slot_name);
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		
		if(	item.IsKindOf("DayZRPArts_Base" ) && player )
		{
		
			player.ActivateArtifact(item);
			
		}
		
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
	
		super.EEItemDetached(item, slot_name);
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		
		if(	item.IsKindOf("DayZRPArts_Base" ) && player )
		{
		
			player.DeactivateArtifact(item);
			
		}
		
	}

}