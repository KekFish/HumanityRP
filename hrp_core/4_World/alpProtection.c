// Script File




modded class alpProtection 
{
	
	
	override float GetProtection(int type, int loc, bool noResistance = false)
		{
			float attProtection = 0;
			
			if ( loc == InventorySlots.GetSlotIdFromString("Headgear") || loc == InventorySlots.GetSlotIdFromString("Mask") )
			{
				alpProtectionBonuses protectionHead = alp_WearingAttachment.Get( InventorySlots.GetSlotIdFromString("Headgear") );
				alpProtectionBonuses protectionMask = alp_WearingAttachment.Get( InventorySlots.GetSlotIdFromString("Mask") );
							
				float attProtectionHead,attProtectionMask;
				
				if ( protectionHead )
				{
					attProtectionHead = protectionHead.GetProtection(type);
				}	
				if ( protectionMask )
				{
					attProtectionMask = protectionMask.GetProtection(type);
				}			
				
				attProtection = Math.Clamp( (attProtectionHead + attProtectionMask),0,1);
			}
			else
			{
				
				
				if ( IsMaskFullBodyProtection() )
				{
					
					attProtection = GetProtection( type, InventorySlots.GetSlotIdFromString("Headgear") );
				}
				else
				{
					alpProtectionBonuses protection = alp_WearingAttachment.Get(loc);
					
					if ( protection )
					{
						attProtection = protection.GetProtection(type);
										
						
					}	
				
				}
							
			}

			float naturalResist = 0;
			
			if ( !noResistance )
			{
				naturalResist = GetNaturalResistance(type);
			}
			
			return attProtection + naturalResist;
		}

	
	override float GetTotalChemicalShield()
	{
		//head
		float respiratory = GetProtectionRespiratory( alpPROTECTION.CHEMICAL );
		
		float head = GetProtection( alpPROTECTION.CHEMICAL, InventorySlots.GetSlotIdFromString("Headgear") );
		
		//top
		float body = GetProtection( alpPROTECTION.CHEMICAL, InventorySlots.GetSlotIdFromString("Body") );
		float hands = GetProtection( alpPROTECTION.CHEMICAL, InventorySlots.GetSlotIdFromString("Gloves") );
		
		//bottom
		float legs = GetProtection( alpPROTECTION.CHEMICAL, InventorySlots.GetSlotIdFromString("Legs") );
		float feet = GetProtection( alpPROTECTION.CHEMICAL, InventorySlots.GetSlotIdFromString("Feet") );		
		
		float protection;
		
		if (IsMaskFullBodyProtection())
		{
			protection = respiratory * 0.3 +  head * 0.7;
		}
		else
		{
			protection = respiratory * 0.3 +  head * 0.2 + body * 0.3 + hands * 0.05 + legs * 0.1 + feet * 0.05;
		}
		
		protection = Math.Clamp(protection,0,1)*0;
		
		return protection;
	
	}	
	
}




