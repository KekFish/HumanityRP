modded class PlayerBase
{
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
	
		super.EEItemAttached(item, slot_name);
		
		if(	item.IsKindOf("ArtifactBelt" ) && player )
		{

			ItemBase artefact0 = item.GetInventory().GetAttachmentFromIndex(0);
			ItemBase artefact1 = item.GetInventory().GetAttachmentFromIndex(1);
			ItemBase artefact2 = item.GetInventory().GetAttachmentFromIndex(2);
			
				if( artefact0 )
				{
					ActivateArtifact(artefact0);
				}
				if( artefact1 )
				{
					ActivateArtifact(artefact1);
				}
				if( artefact2 )
				{
					ActivateArtifact(artefact2);
				}	
			
		}
		
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
	
		super.EEItemDetached(item, slot_name);
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		
		if(	item.IsKindOf("ArtifactBelt" ) && player )
		{

			ItemBase artefact0 = item.GetInventory().GetAttachmentFromIndex(0);
			ItemBase artefact1 = item.GetInventory().GetAttachmentFromIndex(1);
			ItemBase artefact2 = item.GetInventory().GetAttachmentFromIndex(2);
			
				if( artefact0 )
				{
					ActivateArtifact(artefact0);
				}
				if( artefact1 )
				{
					ActivateArtifact(artefact1);
				}
				if( artefact2 )
				{
					ActivateArtifact(artefact2);
				}	
			
		}
		
	}	
	
	void ActivateArtifact(EntityAI item)
	{
		PlayerBase player = this;
		string classname = item.GetType();
		
		Print("Artefakt: " + item.GetType()+ " Obecny");
		
		if(	classname == "DZRP_Artefact_Meat"  )
		{
			player.GetModifiersManager().ActivateModifier( hrp_modifiers.MDF_MEATCHUNK );
		}
	}
	
	void DeactivateArtifact(EntityAI item)
	{
		PlayerBase player = this;
		string classname = item.GetType();
		
		Print("Artefakt: " + item.GetType()+ " Nieobecny");
		
		if(	classname == "DZRP_Artefact_Meat"  )
		{
			player.GetModifiersManager().DeactivateModifier( hrp_modifiers.MDF_MEATCHUNK );
		}
	}

}