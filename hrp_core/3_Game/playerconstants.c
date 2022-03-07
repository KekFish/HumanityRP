modded class PlayerConstants 
{
	//----------------------------------------------------------
	//				SHOES DAMAGE/FEET BLEEDING
	//----------------------------------------------------------
	static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.07;
	static const int CHECK_EVERY_N_STEP = 15;//will process every n-th step(for performance reasons)
	//----------------------------------------------------------

	static const float LOW_WATER_THRESHOLD 						= PlayerConstants.SL_WATER_CRITICAL;

	static const float LOW_ENERGY_THRESHOLD 					= PlayerConstants.SL_ENERGY_CRITICAL;

	static const float BLOOD_REGEN_MODIFIER_ENERGY_LOW		= 0; 	//multiplier for blood regen rate 
	static const float BLOOD_REGEN_MODIFIER_ENERGY_MID		= 0.6;
	static const float BLOOD_REGEN_MODIFIER_ENERGY_HIGH		= 1.2;

	static const float BLOOD_REGEN_MODIFIER_WATER_LOW		= 0; 	//multiplier for blood regen rate (BLOOD_REGEN_MULTIPLIER_WATER_LOW ?)
	static const float BLOOD_REGEN_MODIFIER_WATER_MID		= 0.6;
	static const float BLOOD_REGEN_MODIFIER_WATER_HIGH		= 1.2;

	static const float IMMUNITY_THRESHOLD_LEVEL_HIGH = 0.90;
	static const float IMMUNITY_THRESHOLD_LEVEL_NORMAL = 0.70;
	static const float IMMUNITY_THRESHOLD_LEVEL_LOW = 0.40;
	static const float IMMUNITY_THRESHOLD_LEVEL_CRITICAL = 0.20;

}