// This is exeuted ONLY on clients
modded class MissionGameplay
{
	////// ================ DZR CONFIG SYSTEM ================
	
	//CONFIG mirrors the same values from serverside. You can use those values anywhere below in this file.
	// Always add new variables both here and serverside.
	string 	hrp_webhook_logs_items;
	float	hrp_bleed_chance;
	float	hrp_salmonella_chance;
	float 	hrp_antibiotics_strenght;
	float   hrp_glove_damage;
	float 	hrp_minimum_health_regen;
	float 	hrp_maximum_health_regen;
	float 	hrp_saline_blood_regen;
	float 	hrp_blood_regen;
	float 	hrp_movement_damage_per_step;
	//ref array<string> MyConfigSetting_array;
	//CONFIG
	
	// Useful utilities (optional)
	bool	EnableDebug;
	int		ConfigVersion;
	// Useful utilities
	
	ref hrp_config_data_class g_ClientConfig;
	
	void MissionGameplay()
	{
		GetRPCManager().AddRPC( "HumanityRP", "hrp_ProcessServerRequest_Function", this, SingleplayerExecutionType.Both );	
	}
	
	void hrp_ProcessServerRequest_Function(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
	{
		
		Param1<hrp_config_data_class> data;
		if ( !ctx.Read( data ) ) return;
		
		if (type == CallType.Client)
		{
			g_ClientConfig = data.param1;
			////Print("[DZR Config]::: DZR_MissionGameplay_SaveConfigOnClient :: Reading game to store on client ");
			if(g_ClientConfig){
				
				//CONFIG
				// Always add new variables both here and serverside.
				hrp_webhook_logs_items = g_ClientConfig.hrp_webhook_logs_items;
				hrp_bleed_chance = g_ClientConfig.hrp_bleed_chance;
				hrp_salmonella_chance = g_ClientConfig.hrp_salmonella_chance;
				hrp_antibiotics_strenght = g_ClientConfig.hrp_antibiotics_strenght;
				hrp_glove_damage = g_ClientConfig.hrp_glove_damage;
				hrp_minimum_health_regen = g_ClientConfig.hrp_minimum_health_regen;
				hrp_maximum_health_regen = g_ClientConfig.hrp_maximum_health_regen;
				hrp_saline_blood_regen = g_ClientConfig.hrp_saline_blood_regen;
				hrp_blood_regen = g_ClientConfig.hrp_blood_regen;
				hrp_movement_damage_per_step = g_ClientConfig.hrp_movement_damage_per_step;
				

				EnableDebug = g_ClientConfig.EnableDebug;
				ConfigVersion = g_ClientConfig.ConfigVersion;
				//CONFIG
				
				//Print version and values to the log file				
				//Print("[hrp Config][Client] ::: ACTIVE (Version: "+g_ClientConfig.ConfigVersion+" DEBUG: "+g_ClientConfig.EnableDebug+")");
				//Print("[hrp Config][Client] ::: Szansa na Krwawienie: "+g_ClientConfig.hrp_bleed_chance );
			}
		}
	}
	

}		

