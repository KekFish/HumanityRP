modded class DayZPlayerMeleeFightLogic_LightHeavy
{
	override bool EvaluateFinisherAttack(InventoryItem weapon, Object target)
	{
		if (GetGame().IsServer())
		{
			if (m_IsFinisher)
			{
				ref Timer tajmer = new Timer();
				target.ProcessDirectDamage(DT_CLOSE_COMBAT, weapon, "", DetermineFinisherAmmo(m_HitType), "0 0 0", 1.0);
				
				//Component can't be easily used, since the function uses DAMAGE ZONE. Investigating later.
				/*string name = target.GetActionComponentName(m_MeleeCombat.GetHitZoneIdx(),"fire");
				target.ProcessDirectDamage(DT_CLOSE_COMBAT, weapon, name, "FinisherHit", "0 0 0", 1.0);*/
				target.AddHealth( "","Health", -target.GetMaxHealth("","") );


				return true;
			}
		}
		//Finisher attack not performed
		return false;
	}
	
}