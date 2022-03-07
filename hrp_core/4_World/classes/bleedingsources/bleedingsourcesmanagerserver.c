modded class BleedingSourcesManagerServer
{
	override void ProcessHit(float damage, EntityAI source, int component, string zone, string ammo, vector modelPos)
	{
		float dmg_max = m_Player.GetMaxHealth(zone, "Blood");
		float dmg = damage;
		float bleed_threshold = GetGame().ConfigGetFloat( "CfgAmmo " + ammo + " DamageApplied " + "bleedThreshold" );
		bleed_threshold = Math.Clamp(bleed_threshold,0,1);
		//Print("dmg_max = " + dmg_max);
		//Print("dmg = " + dmg);
		//Print("bleed_threshold = " + bleed_threshold);

		//hackerino for zombino:
		if (source.IsZombie())
		{

			if (Math.RandomFloat01() <  GetDayZGame().ReadServerConfig().hrp_bleed_chance)
			{
				AttemptAddBleedingSource(component);
				
				if (Math.RandomFloat01() < GetDayZGame().ReadServerConfig().hrp_salmonella_chance)
				{
					m_Player.InsertAgent(eAgents.SALMONELLA, 1);
				}

				if (m_Player.GetRP().GetRadiation()>0)
				{
					m_Player.InsertAgent(alpeAgents.RADIATION, 75);
				}
			}
		}
		else if ( dmg > (dmg_max * (1 - bleed_threshold)) )
		{
			AttemptAddBleedingSource(component);
			//Print("BLEEDING");

			if (m_Player.GetRP().GetRadiation()>0)
			{
				m_Player.InsertAgent(alpeAgents.RADIATION, 75);
			}
		}
	}
}