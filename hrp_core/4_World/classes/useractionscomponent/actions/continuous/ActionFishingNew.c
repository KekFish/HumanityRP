modded class ActionFishingNewCB : ActionContinuousBaseCB
{

	ref array<string> 	m_JunkTypes = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot","Netting","KKCR_empty_jar","KKCR_can_lid"};
	
}


modded class ActionFishingNew
{
	override int EvaluateFishingResult(ActionData action_data)
	{
		if (action_data.m_Player.IsQuickFishing())
			return 1;
		
		FishingActionData fad = FishingActionData.Cast(action_data);
		float rnd = fad.m_Player.GetRandomGeneratorSyncManager().GetRandom01(RandomGeneratorSyncUsage.RGSGeneric);
		float daytime_modifier = 0.5;
		float hook_modifier = 0.33;
		float chance;
		
		daytime_modifier = GetGame().GetDayTime();
		if ( (daytime_modifier > 18 && daytime_modifier < 22) || (daytime_modifier > 5 && daytime_modifier < 9) )
		{
			daytime_modifier = 0.30;
		}
		else
		{
			daytime_modifier = 0.15;
		}
		
		//fishing with an empty hook
		if (fad.IsBaitEmptyHook())
		{
			hook_modifier = 0.01;
		}
		
		chance = 1 - (((fad.FISHING_SUCCESS * daytime_modifier) + fad.m_RodQualityModifier)) * hook_modifier;
		
		if (rnd > chance)
		{
			return 1;
		}
		else if (rnd < fad.FISHING_BAIT_LOSS && !fad.IsBaitEmptyHook()) // restricts the loss of an empty hook (low chance is enough)
		{
			return 0;
		}
		return -1;
	}
}