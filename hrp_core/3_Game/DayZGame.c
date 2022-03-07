////// ================ DZR CONFIG SYSTEM ================
class hrp_config_data_class
{
	//CONFIG
	// Decalre any settings here:
	// Always add new variables both here and сlientside.
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
	
	void hrp_config_data_class ()
	{
		// DEFAULT CONFIG VALUES
		// These settings will be used ONLY if you have no config.json yet. The file will be created with these values.
		// Or if config.json exists BUT ConfigVersion is not matching. The old file will be backed up and a new one will be createwd with these values.
		// Always add new variables both here and сlientside.
		hrp_webhook_logs_items = "Enter your webhook url here";
		hrp_bleed_chance = 0.3;
		hrp_salmonella_chance = 0.1;
		hrp_antibiotics_strenght = 2;
		hrp_glove_damage = -3;
		hrp_minimum_health_regen = 0.005;
		hrp_maximum_health_regen = 0.030;
		hrp_saline_blood_regen = 3;
		hrp_blood_regen = 0.30;
		hrp_movement_damage_per_step = 0.04;

		//MyConfigSetting_array = new array<string >;
		//MyConfigSetting_array.Insert("This is your array");
		//MyConfigSetting_array.Insert("Add any items to this settings array like this");
		//MyConfigSetting_array.Insert("My test text in array");
		//MyConfigSetting_array.Insert("And so on");
		// DEFAULT CONFIG VALUES
		
		// Useful utilities defaults (optional)
		EnableDebug = true; // Display diagnostic information to see how masking and distances change. Disables all diagnostics globally.
		ConfigVersion = 3; // If the mod config is updated and your version is different, your config will be backed up and the new config will be applied. You can restore your settings from your backup file manually.
		// Useful utilities defaults		
	}	
}

// This is a global namespace. Server can access it from any server file or code.
modded class DayZGame 
{ 
	
	protected ref hrp_config_data_class hrp_config_data;
	
	// You will request the config from anywhere serverside using this function ReadServerConfig()
	// It will return dzr_idz_config_data_class with default values to you.
	hrp_config_data_class ReadServerConfig()
	{
		if(hrp_config_data){
			return hrp_config_data;
		}
		return null;
	}
	
	void SaveConfigOnServer(ref hrp_config_data_class new_config) 
	{
		hrp_config_data = new_config;
	}	
}
////// ================ DZR CONFIG SYSTEM ================