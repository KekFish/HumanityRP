modded class Mass_BarrelHolder
{
    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }
	
	
	override bool IsHeavyBehaviour() 
    {
        return true;
    }
};
modded class PlayerBase
{
    override bool CanSprint()
    {
        ItemBase item;
		if (GetMMIOClothesConfig().!LargeRuckBagSprint)
        {
            if (Class.CastTo(item, FindAttachmentBySlotName("Back")))
            {
                if (item && item.IsInherited(MassRuckBagDesert) || item && item.IsInherited(Mass_BarrelHolder)  )
                    return false;
            
            }
		}
		return super.CanSprint();
    }
}