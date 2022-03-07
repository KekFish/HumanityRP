// Script File



modded class alpRadiationSick4Mdfr: ModifierBase
{

		
	
	

	override void OnTick(PlayerBase player, float deltaT)
	{

		
		//setting illness
		//SetSickness(player);

		//thirsty
		float metabolic_speed = PlayerConstants.METABOLIC_SPEED_WATER_SPRINT;
		float water = player.GetStatWater().Get();
		player.GetStatWater().Add( (-metabolic_speed * deltaT) );
					
		//sickness

		float 		vomit 	= 0.985;
		float 		bleed 	= 0.995;
		float  		health 	= 0.999;
				
			
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
			player.DecreaseHealth("","Shock", PlayerConstants.UNCONSCIOUS_THRESHOLD);
		}						
	}

};