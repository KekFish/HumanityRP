modded class AirborneMask extends ClothingBase
{
    override void MutePlayer(PlayerBase player, bool state)
    {        
        if ( GetGame() )
        {    
            if (( GetGame().IsServer() && GetGame().IsMultiplayer() ) || ( GetGame().GetPlayer() == player ))
            {
                GetGame().SetVoiceEffect(player, VoiceEffectObstruction, false);
            }
        }
    }

    override bool IsObstructingVoice()
	{
		return false;
	}
}