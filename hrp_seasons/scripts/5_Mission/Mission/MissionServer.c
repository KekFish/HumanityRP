// This is executed ONLY on the server
modded class MissionServer 
{
	////// ================ DZR CONFIG SYSTEM ================
	
	// FOLDERS AND FILES
	// Set up your folder structure and a file name.
	// All folders and files are created automatically.
	const static string hrp_config_modFolder = "HumanityRP\\";
    const static string hrp_config_fileName = "HumanityRP.json";
	
	const static string hrp_ProfileFolder = "$profile:\\";
	ref hrp_config_data_class m_defaultConfig;
	ref hrp_config_data_class m_existingConfig;
	
	// FOLDERS AND FILES
	
    void MissionServer()
    {
		//Just a serverside template for requests
		
		// Anytime server starts, we read config from file or set up a default if it does not exist.
		hrp_MissionServer_ReadConfigFile();
		
		
	}
	
	// Anytime a player connects, we send him the config from the server.
    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
		// Add all vanilla functions first
        super.InvokeOnConnect(player, identity);		
		
		//Not read the config values from the memory
		ref Param1<hrp_config_data_class> m_Data = new Param1<hrp_config_data_class>(GetDayZGame().ReadServerConfig());
		// Send a call to "dzr_config_and_rpc" to call the "DZR_ProcessServerRequest_Function()" with m_Data as arguement to the "identity" player.
		GetRPCManager().SendRPC( "HumanityRP", "hrp_ProcessServerRequest_Function", m_Data, true, identity);		
	}

	


	






	// Just an RCP template to process CLIENT requests
	void hrp_ProcessClientRequest_Function(CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target)
    {
        Param1<ref PlayerBase> data;
        if ( !ctx.Read( data ) ) return;
        if (type == CallType.Server)
        {
            if (data.param1 != NULL)
            {
                //string playerName    = data.param1.LoadPlayerName();
                //string senderName    = sender.GetName();
                //bool m_ShowNameToAll    = data.param1.isShowingNameToAll();
                //ref Param2<string, bool> m_Data = new Param2<string, bool>(playerName, m_ShowNameToAll);
                //GetRPCManager().SendRPC( "dzr_config_and_rpc", "DZR_MissionGameplay_GetNameFromServer", m_Data, true, sender);
			}
		}
	}
	
	void hrp_MissionServer_ReadConfigFile()
	{
		// check if folders exist and try writing it
		if (!FileExist(hrp_ProfileFolder+hrp_config_modFolder)){
			MakeDirectory(hrp_ProfileFolder+hrp_config_modFolder);	
			hrp_writeConfigFile();			
		}
		else 
		{	

			hrp_writeConfigFile();

		};
	}
	
	void hrp_writeConfigFile()
	{
		//FILE HANDLING
		
		string m_configFilePath = hrp_ProfileFolder+hrp_config_modFolder+hrp_config_fileName;
		//Check if config exist
		if (!FileExist(m_configFilePath)) 
		{
			//if no default loaded
			if (!m_defaultConfig) 
			{
				// Generate default and write to memeory and the file.
				m_defaultConfig = new hrp_config_data_class();
				GetDayZGame().SaveConfigOnServer(m_defaultConfig);
				JsonFileLoader<hrp_config_data_class>.JsonSaveFile(m_configFilePath, m_defaultConfig);
			}
			//So default exists, just write it to the file.
			GetDayZGame().SaveConfigOnServer(m_defaultConfig);
			JsonFileLoader<hrp_config_data_class>.JsonSaveFile(m_configFilePath, m_defaultConfig);
		} 
		else 
		{
			//Config exists, load it from file.
			JsonFileLoader<hrp_config_data_class>.JsonLoadFile(m_configFilePath, m_existingConfig);
			m_defaultConfig = new hrp_config_data_class();
			
			// But check if it is old or not. Compare config versions.
			if (m_defaultConfig.ConfigVersion != m_existingConfig.ConfigVersion)
			{
				//Teh config is outdated. Generate timestamp and create a backup of the old config.
				int hour;
				int minute;
				int second;
				int year;
				int month;
				int day;
				GetHourMinuteSecond(hour, minute, second);
				GetYearMonthDay(year, month, day);
				string suffix = year.ToString()+"-"+month.ToString()+"-"+day.ToString()+"_"+hour.ToString()+"."+minute.ToString()+"."+second.ToString();
				JsonFileLoader<hrp_config_data_class>.JsonSaveFile(m_configFilePath+"_BAK_"+suffix, m_existingConfig);
				GetDayZGame().SaveConfigOnServer(m_defaultConfig);
				JsonFileLoader<hrp_config_data_class>.JsonSaveFile(m_configFilePath, m_defaultConfig);
			}
			else 
			{
				//Versions match. Just use it in current mission.
				JsonFileLoader<hrp_config_data_class>.JsonLoadFile(m_configFilePath, m_existingConfig);
			}
			//Save to memory
			GetDayZGame().SaveConfigOnServer(m_existingConfig);
		}
		//Print config version and values to the log.
		//Print("[hrp Config][Server] ::: ACTIVE (Version: "+m_defaultConfig.ConfigVersion+" DEBUG: "+m_defaultConfig.EnableDebug+")");
		//Print("[hrp Config][Server] ::: Szansa na Krwawienie: "+m_defaultConfig.hrp_bleed_chance );
		//Print("[hrp Config][Server] ::: Szansa na Salmonelle: "+m_defaultConfig.hrp_salmonella_chance );
		//Print("[hrp Config][Server] ::: Siła antybiotyków: "+m_defaultConfig.hrp_antibiotics_strenght );
		//Print("[hrp Config][Server] ::: Uszkodzenie rękawiczek : "+m_defaultConfig.hrp_glove_damage );
		//Print("[hrp Config][Server] ::: Minimalna regeneracja zdrowia: "+m_defaultConfig.hrp_minimum_health_regen );
		//Print("[hrp Config][Server] ::: Maksymalna regeneracja zdrowia: "+m_defaultConfig.hrp_maximum_health_regen );
		//Print("[hrp Config][Server] ::: Regeneracja krwi z kroplówki na sekunde: "+m_defaultConfig.hrp_saline_blood_regen );
		//Print("[hrp Config][Server] ::: Regeneracja Krwi: "+m_defaultConfig.hrp_blood_regen );
		//Print("[hrp Config][Server] ::: Uszkodzenie butów: "+m_defaultConfig.hrp_movement_damage_per_step );
		//FILE HANDLING
	}

	
	////// ================ DZR CONFIG SYSTEM ================
}






