modded class MainMenu extends UIScriptedMenu 
{
	protected Widget				discrod_button;
	protected Widget				www_button;
	protected Widget				m_CharacterRotationFrame;

	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "HumanityRP/hrp_gui/gui/layouts/main_menu.layout" );
		
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "character_button" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "settings_button" );
		m_Exit						= layoutRoot.FindAnyWidget( "exit_button" );

		discrod_button				= layoutRoot.FindAnyWidget( "discord_button" );
		www_button				= layoutRoot.FindAnyWidget( "www_button" );
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget( "character_rotation_frame" );

		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );
		m_LastFocusedButton			= m_Play;
		m_ScenePC					= m_Mission.GetIntroScenePC();
		
		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}
		
		string version;
		GetGame().GetVersion( version );
		m_Version.SetText( "#main_menu_version" + " " + version );
		
		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus( null );

		Refresh();
		
		GetDayZGame().GetBacklit().MainMenu_OnShow();
	
		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		
		return layoutRoot;
	}
	
	override bool OnMouseButtonDown( Widget w, int x, int y, int button )
	{
		if ( w == m_CharacterRotationFrame )
		{	
			if (m_ScenePC)
				m_ScenePC.CharacterRotationStart();
			return true;
		}
		
		return false;
	}
	
	override bool OnMouseButtonUp( Widget w, int x, int y, int button )
	{
		if (m_ScenePC)
			m_ScenePC.CharacterRotationStop();
		
		return false;
	}
	
	override bool OnClick( Widget w, int x, int y, int button )
	{
		if( button == MouseState.LEFT )
		{
			if( w == m_Play )
			{
				m_LastFocusedButton = m_Play;
				g_Game.ConnectFromServerBrowser( "54.37.129.157", 2302, "" );
				return true;
			}

			else if ( w == m_CustomizeCharacter )
			{
				OpenMenuCustomizeCharacter();
				return true;
			}
			else if ( w == m_SettingsButton )
			{
				OpenSettings();
				return true;
			}
			else if ( w == m_Exit )
			{
				Exit();
				return true;
			}
			else if ( w == discrod_button )
			{
				GetGame().OpenURL("https://discord.gg/Mfh73wTSHB");
				return true;
			}
			else if ( w == www_button )
			{
				GetGame().OpenURL("http://humanityrp.pl/");
				return true;
			}
		}
		return false;
	}
	
	bool IsFocusable( Widget w )
	{
		if( w )
		{
			if( w == m_Play || w == m_CustomizeCharacter || w == m_SettingsButton || w == m_Exit || w == discrod_button);
			{
				return true;
			}
		}
		return false;
	}
	
	void OpenStats()
	{
		
	}

	override void LoadMods()
	{
		return;
	}
	
	override void Play()
	{
		return;
	}
}
