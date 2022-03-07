modded class PlayerBase
{

	override float GetHealthRegenSpeed()
	{
		float blood =  GetHealth("GlobalHealth", "Blood");
		float blood_scale_normalized = Math.InverseLerp(PlayerConstants.BLOOD_THRESHOLD_FATAL, GetMaxHealth("", "Blood"), blood);
		blood_scale_normalized = Math.Clamp(blood_scale_normalized,0,1);
		return Math.Lerp(GetDayZGame().ReadServerConfig().hrp_minimum_health_regen, GetDayZGame().ReadServerConfig().hrp_maximum_health_regen, blood_scale_normalized);
	}

	override void OnCommandSwimStart()
	{
		super.OnCommandSwimStart();
		
		if ( GetInventory() ) { GetInventory().UnlockInventory(LOCK_FROM_SCRIPT); }
		//if ( GetItemInHands() ) { GetItemAccessor().HideItemInHands(false); }
	}
	
	override void OnCommandSwimFinish()
	{
		if ( GetInventory() ) { GetInventory().LockInventory(LOCK_FROM_SCRIPT); }
		//if ( GetItemInHands() ) { GetItemAccessor().HideItemInHands(true); }
		
		super.OnCommandSwimFinish();
	}


	override void ProcessFeetDamageServer(int pUserInt)
	{
		//InventorySlots.HEADGEAR
		EntityAI shoes = GetInventory().FindAttachment(InventorySlots.FEET);
		
		string surface;	int liquid;
		GetGame().SurfaceUnderObject(this, surface, liquid);
		float modifier_surface = Surface.GetParamFloat(surface, "footDamage");
		
		if( shoes && shoes.GetHealthLevel() < 4 )
		{
			shoes.AddHealth("","", - 1 * modifier_surface * GetDayZGame().ReadServerConfig().hrp_movement_damage_per_step * (float)PlayerConstants.CHECK_EVERY_N_STEP);
			
			/*
			Print("modifier_surface:"+modifier_surface);
			Print(shoes.GetHealth("",""));
			*/
			return;
		}

		float rnd = Math.RandomFloat01();
		
		float modifier_movement = GetFeetDamageMoveModifier();
		
		
		
		/*
		Print(surface);
		Print(Surface.GetParamFloat(surface, "footDamage"));
		*/
		
		float chance = modifier_movement * modifier_surface * PlayerConstants.BAREFOOT_MOVEMENT_BLEED_MODIFIER * (float)PlayerConstants.CHECK_EVERY_N_STEP;
		//Print(chance);
		//Print("chance:" +chance);
		if( rnd < chance )
		{
			if(pUserInt % 2 == 0)//!right foot
			{
				if(GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("RightFoot"))
				{
					//added
					//Print("right foot bleeding");
					SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
					
				}
				
			}
			else//!left foot
			{
				if(GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftFoot"))
				{
					//added
					//Print("left foot bleeding");
					SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
					
				}
			}
		}
	}
	
    
	override void ProcessHandDamage(float delta_time, HumanMovementState pState)
	{
		if( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
		{
			if(pState.m_iMovement == DayZPlayerConstants.MOVEMENTIDX_SLIDE)
			{
				//Print("sliding down");
				EntityAI gloves = GetInventory().FindAttachment(InventorySlots.GLOVES);
			
				if( gloves && gloves.GetHealthLevel() < 4 )
				{
					gloves.AddHealth("","", GetDayZGame().ReadServerConfig().hrp_glove_damage * delta_time);
					return;
				}
				
				if(	Math.RandomFloat01() < PlayerConstants.CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC * delta_time)
				{
					if(Math.RandomFloat01() < 0.5)
					{
						if(GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll"))
						{
							SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
						}
					}
					else
					{
						if(GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("RightForeArmRoll"))
						{
							SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
						}
					}
				}
				
			}
		}
	}
	
}
