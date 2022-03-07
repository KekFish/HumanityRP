class MeatChunkMdfr: ModifierBase
{

	ItemBase MeatChunk;
	
	override void Init()
	{
		
		m_IsPersistent = true;
		m_ID 					= hrp_modifiers.MDF_MEATCHUNK;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		DisableActivateCheck();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override void OnActivate(PlayerBase player)
	{
		
		player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);

		ItemBase belt = player.GetInventory().FindAttachment(InventorySlots.HIPS);
		ItemBase artefact0 = belt.GetInventory().GetAttachmentFromIndex(0);
		ItemBase artefact1 = belt.GetInventory().GetAttachmentFromIndex(1);
		ItemBase artefact2 = belt.GetInventory().GetAttachmentFromIndex(2);
		
			if( artefact0 && artefact0.IsKindOf("DZRP_Artefact_Meat" ) )
			{
				MeatChunk = artefact0;
			}
			else if( artefact1 && artefact1.IsKindOf("DZRP_Artefact_Meat" ) )
			{
				MeatChunk = artefact2;
			}
			else if( artefact2 && artefact2.IsKindOf("DZRP_Artefact_Meat" ) )
			{
				MeatChunk = artefact2;
			}	
			
		
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
		
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		player.AddHealth("GlobalHealth", "Health", 0.03 * deltaT );

		player.GetRP().SetRecievedRadiation(2 * deltaT);
		
		MeatChunk.AddHealth("GlobalHealth", "Health", -5 * deltaT );
		
		
	}

	
};