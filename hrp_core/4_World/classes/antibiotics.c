modded class AntibioticsMdfr
{
	
	override void OnTick(PlayerBase player, float deltaT)
	{
		player.AntibioticsAttack( GetDayZGame().ReadServerConfig().hrp_antibiotics_strenght * deltaT );
	}
	
}
