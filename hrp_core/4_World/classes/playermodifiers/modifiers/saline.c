modded class SalineMdfr
{

    override void OnTick(PlayerBase player, float deltaT)
	{
		player.AddHealth("", "Blood", GetDayZGame().ReadServerConfig().hrp_saline_blood_regen * deltaT);
		player.GetStatWater().Add( PlayerConstants.SALINE_WATER_REGEN_PER_SEC * deltaT );
	}

}