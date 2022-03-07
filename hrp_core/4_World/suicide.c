modded class EmoteSuicide extends EmoteBase
{

	override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
	{
        float z_tick_Base = m_Player.StatGet( AnalyticsManagerServer.STAT_PLAYTIME );


		is_fullbody = true;
		callback_ID = -1;
		stancemask = 0;
		string suicideStr;
		ItemBase weapon;
		weapon = m_Player.GetItemInHands();
		if (weapon)
		{
			if (weapon.ConfigIsExisting("suicideAnim"))
			{
				suicideStr = weapon.ConfigGetString("suicideAnim");
			}
			
			if (weapon.IsKindOf("Pistol_Base"))
			{
				callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_PISTOL;
				stancemask = DayZPlayerConstants.STANCEMASK_CROUCH;
				//m_Player.OverrideShootFromCamera(false);
			}
			else if (Weapon_Base.Cast(weapon)) //long firearms
			{
				callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_RIFLE;
				stancemask = DayZPlayerConstants.STANCEMASK_CROUCH;
				//m_Player.OverrideShootFromCamera(false);
			}
			else
			{
				switch (suicideStr)
				{
					case "onehanded":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_1HD;
						stancemask = DayZPlayerConstants.STANCEMASK_CROUCH;
					break;
					
					case "fireaxe":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_FIREAXE;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "pitchfork":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_PITCHFORK;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "sword":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_SWORD;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "spear":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_SPEAR;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "woodaxe":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_WOODAXE;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "sickle":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_SICKLE;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
					
					case "hoe":
						callback_ID = DayZPlayerConstants.CMD_SUICIDEFB_HOE;
						stancemask = DayZPlayerConstants.STANCEMASK_ERECT;
					break;
				}
			}
			
			
			
		}
		if (callback_ID > -1)
			{
				if (z_tick_Base > 1600) //400 is 5 Mins.. 
				{	
			
					return true;
				}
				if (z_tick_Base < 1600) //400 is 5 Mins.. 
				{		
					
					return false;	
				}
			}

            return false;
	}
	
	
	
	
}
