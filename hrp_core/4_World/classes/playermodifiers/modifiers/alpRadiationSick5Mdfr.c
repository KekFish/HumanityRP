// Script File



modded class alpRadiationSick5Mdfr: ModifierBase
{


	override void OnTick(PlayerBase player, float deltaT)
	{

		
		//death
		if ( player.GetSingleAgentCount( alpeAgents.RADIATION ) >= ALP_RADPOISON.L6 )
		{
			player.SetHealth("","",0);		
		}
		
		//SetSickness(player);

		//thirsty
		float metabolic_speed = PlayerConstants.METABOLIC_SPEED_WATER_SPRINT;
		float water = player.GetStatWater().Get();
		player.GetStatWater().Add( (-metabolic_speed * deltaT) );
					
		//sickness

		float 		vomit 	= 0.970;
		float 		bleed 	= 0.800;
		float  		health 	= 0.900;
		
			
		//infection
		
		//vomiting
		if (Math.RandomFloat01()  >= vomit) 
		{
			SymptomBase symptom = player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
				
			if( symptom )
			{
				symptom.SetDuration(5);
			
				if (m_Player.GetStatWater().Get() > (WATER_DRAIN_FROM_VOMIT))
					m_Player.GetStatWater().Add(-1 * WATER_DRAIN_FROM_VOMIT);
				if (m_Player.GetStatEnergy().Get() > (ENERGY_DRAIN_FROM_VOMIT))
					m_Player.GetStatEnergy().Add(-1 * ENERGY_DRAIN_FROM_VOMIT);
			}
		}	
		//bleeding	
		if (Math.RandomFloat01()  >= bleed) 
		{
			player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(BLEEDINGZONES.GetRandomElement());	
		}	
		
		//damage health
		if (Math.RandomIntInclusive(0,1000) >= health) 
		{
			player.DecreaseHealth("","Shock", PlayerConstants.UNCONSCIOUS_THRESHOLD );
		}						
	}
	

};