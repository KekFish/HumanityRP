modded class BloodRegenMdfr
{



override void OnTick(PlayerBase player, float deltaT)
	{
		float regen_modifier_water = GetRegenModifierWater( player.GetStatWater().Get() );
		float regen_modifier_energy = GetRegenModifierEnergy( player.GetStatEnergy().Get() );
		float blood_regen_speed = GetDayZGame().ReadServerConfig().hrp_blood_regen * regen_modifier_water * regen_modifier_energy;
		/*
		PrintString("regen_modifier_water" + regen_modifier_water);
		PrintString("regen_modifier_energy" + regen_modifier_energy);
		PrintString("blood_regen_speed" + blood_regen_speed);
		*/
		player.AddHealth("","Blood", blood_regen_speed * deltaT );
	}

}