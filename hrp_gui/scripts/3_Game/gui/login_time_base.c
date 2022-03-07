modded class LoginTimeBase extends UIScriptedMenu
{
	protected TextWidget m_txtDescription;
	protected TextWidget m_txtLabel;
	protected ButtonWidget m_btnLeave;
	protected bool m_IsStatic;
	ImageWidget Background;

	void LoginTimeBase()
	{
		g_Game.SetKeyboardHandle(this);
		m_IsStatic = false;
	}

	void ~LoginTimeBase()
	{
		g_Game.SetKeyboardHandle(NULL);
	}

	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("HumanityRP/hrp_gui/gui/layouts/dialog_login_time.layout");

		m_txtDescription = TextWidget.Cast(layoutRoot.FindAnyWidget("txtDescription"));
		m_txtLabel = TextWidget.Cast(layoutRoot.FindAnyWidget("txtLabel"));
		m_btnLeave = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnLeave"));
		Background = ImageWidget.Cast(layoutRoot.FindAnyWidget("Background"));

		Background.Show(true);

		return layoutRoot;
	}

	override void Update(float timeslice)
	{
		if (GetGame().GetInput().LocalPress("UAUIBack", false))
		{
			Leave();
		}
	}

	override bool OnClick(Widget w, int x, int y, int button)
	{
		super.OnClick(w, x, y, button);
		if (w == m_btnLeave)
		{
			Leave();
			return true;
		}
		return false;
	}

	void Show()
	{
		if (layoutRoot)
			layoutRoot.Show(true);
	}

	void Hide()
	{
		if (layoutRoot)
			layoutRoot.Show(false);
	}

	void SetTime(int time)
	{
		m_txtLabel.SetText("#menu_loading_in " + time.ToString() + " #dayz_game_seconds");
	}

	/*void SetStatus(string status)
	{
		m_txtDescription.SetText(status);
	}

	bool IsStatic()
	{
		return m_IsStatic;
	}*/

	void Leave()
	{
#ifdef PLATFORM_CONSOLE
		g_Game.SetGameState(DayZGameState.MAIN_MENU);
		g_Game.SetLoadState(DayZLoadState.MAIN_MENU_START);
#endif
		g_Game.GetCallQueue(CALL_CATEGORY_SYSTEM).Call(GetGame().DisconnectSessionForce);

		Close();
	}
};