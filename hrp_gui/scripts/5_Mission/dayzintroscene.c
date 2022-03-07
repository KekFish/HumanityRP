modded class DayZIntroScene : Managed
{
	protected ref IntroSceneCharacter	m_Character;
	protected Camera 					m_Camera;
	protected vector 					m_CameraTrans[4];
	protected vector 					m_CharacterPos;
	protected vector 					m_CharacterRot;
	protected Weather					m_Weather;	
	protected vector 					m_Target;

	protected ref OptionsMenu	m_OptionsMenu = new OptionsMenu;

	void DayZIntroScene()
	{
		World w = g_Game.GetWorld();
		
		string root_path = "cfgCharacterScenes " + g_Game.GetWorldName();
		
		int count = g_Game.ConfigGetChildrenCount(root_path);
		int index = Math.RandomInt(0, count - 1);
		string childName;
		g_Game.ConfigGetChildName(root_path, index, childName);
	
		string scene_path = root_path + " " + childName;
		m_Target = SwapYZ(g_Game.ConfigGetVector(scene_path + " target"));
		vector cameraPosition = Vector(13885.7, 8.2773, 13436.3);
		vector cameraOrientation = Vector(-113.396, -6.82294, 0);
		vector characterPosiotion = Vector(13883.4, 6.95222, 13435.9);
		TIntArray date = new TIntArray;
		TFloatArray storm = new TFloatArray;
		g_Game.ConfigGetIntArray(scene_path + " date", date);
		float fov = 0.75;
		float overcast = 1;
		float rain = 0.329;
		float fog = 0.331;
		float windspeed = 14.3431;
		
		World world = g_Game.GetWorld();
	
		if (world && date.Count() >= 5)
		{
			world.SetDate(2020, 1, 15, 11, 00);
		}
	
		GetGame().ObjectDelete( m_Camera );
		Class.CastTo(m_Camera, g_Game.CreateObject("staticcamera", cameraPosition, true));
		
		Math3D.MatrixIdentity4(m_CameraTrans);
		
		if (m_Camera)
		{
			  //m_Camera.SetPosition(Vector(m_Camera.GetPosition()[0],m_Camera.GetPosition()[1]+0,m_Camera.GetPosition()[2]));
			  m_Camera.LookAt(characterPosiotion);
			  m_Camera.SetFOV(fov);
			  m_Camera.SetFocus(3, 0.052); //5.0, 1.0
			  
			  m_Camera.SetActive(true);
			  
			  // m_CameraTrans mozliwe ze to to
			  Math3D.DirectionAndUpMatrix(m_Target - SnapToGround(characterPosiotion), "0 0 1", m_CameraTrans);
			  m_CameraTrans[3] = m_Camera.GetPosition();
			  m_CharacterPos = characterPosiotion;
			  
			  float pos_x = m_CharacterPos[0];
			  float pos_z = m_CharacterPos[2];
			  float pos_y = GetGame().SurfaceY(pos_x, pos_z);
			  vector ground_demo_pos = Vector(pos_x, pos_y, pos_z);
			  m_CharacterPos = ground_demo_pos;
			  
			  vector to_cam_dir = m_Camera.GetPosition() - m_CharacterPos;
			  m_CharacterRot[0] = Math.Atan2(to_cam_dir[0], to_cam_dir[2]) * Math.RAD2DEG;
		}
		
		m_Weather = g_Game.GetWeather();
		m_Weather.GetOvercast().SetLimits( overcast, overcast );
		m_Weather.GetRain().SetLimits( rain, rain );
		m_Weather.GetFog().SetLimits( fog, fog );
		
		m_Weather.GetOvercast().Set( overcast, 0, 0);
		m_Weather.GetRain().Set( rain, 0, 0);
		m_Weather.GetFog().Set( fog, 0, 0);
		
		if ( storm.Count() == 3 )
		{
			m_Weather.SetStorm(storm.Get(0),storm.Get(1),storm.Get(2));
		}
		
		if ( windspeed != -1 )
		{
			m_Weather.SetWindSpeed(windspeed);
			m_Weather.SetWindMaximumSpeed(windspeed);
			m_Weather.SetWindFunctionParams(1,1,1);
		}
		
		m_Character = new IntroSceneCharacter();
		m_Character.LoadCharacterData(m_CharacterPos, m_CharacterRot);
		
		PPEffects.Init();
		PPEffects.DisableBurlapSackBlindness(); //HOTFIX
		//Vignette
		//PPEffects.SetVignette(0.3, 0,0,0);
	}
	
	
	//==============================================
	// GetIntroSceneCharacter
	//==============================================
	IntroSceneCharacter GetIntroCharacter()
	{
		return m_Character;
	}
	
	//==============================================
	// GetIntroCamera
	//==============================================
	Camera GetIntroCamera()
	{
		return m_Camera;
	}
	
	//==============================================
	// ResetIntroCamera
	//==============================================
	void ResetIntroCamera()
	{
		if ( GetIntroCharacter().GetCharacterObj() )
		{
			GetIntroCamera().LookAt( GetIntroCharacter().GetPosition() + Vector( 1, 1, 0) );
			//GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater( SceneCharacterSetPos, 250 );			
		}
	}
	
	protected void GetSelectedUserName()
	{
		string name;
		BiosUserManager user_manager = GetGame().GetUserManager();
		if( user_manager )
		{
			BiosUser user = user_manager.GetSelectedUser();
			if( user )
			{
				g_Game.SetPlayerGameName( user.GetName() );
				return;
			}
		}
		g_Game.SetPlayerGameName(GameConstants.DEFAULT_CHARACTER_NAME);
	}
	
	// ------------------------------------------------------------
	protected vector SwapYZ(vector vec)
	{
		vector tmp;
		tmp[0] = vec[0];
		tmp[1] = vec[2];
		tmp[2] = vec[1];
	
		return tmp;
	}
	
	// ------------------------------------------------------------
	protected vector SnapToGround(vector pos)
	{
		float pos_x = pos[0];
		float pos_z = pos[2];
		float pos_y = GetGame().SurfaceY(pos_x, pos_z);
		vector tmp_pos = Vector(pos_x, pos_y, pos_z);
		tmp_pos[1] = tmp_pos[1] + pos[1];
	
		return tmp_pos;
	}
};
