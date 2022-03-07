modded class MissionGameplay extends MissionBase
{
	Widget 					s_logowidget; 
	
	ImageWidget 			s_logo;
	
	private int ml_lTime;
	string activatelogo = "true";

	
	override void OnMissionStart()
	{
		super.OnMissionStart();
		
		if(LogoActivated())
		{	
			s_logowidget = GetGame().GetWorkspace().CreateWidgets("HumanityRP/hrp_gui/gui/layouts/watermark.layout");
			s_logo = ImageWidget.Cast(s_logowidget.FindAnyWidget("logo"));
			s_logowidget.Show(false);
			ml_lTime = 0;
			
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(DelayLogoStartup, 1 * 1000, true);
			
		}
	}
	
	void DelayLogoStartup()
	{
		if(ml_lTime > 15)
		{
			s_logo.LoadImageFile(0, "set:logo image:logo");
			s_logowidget.Show(true);
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.DelayLogoStartup);
		}else{
			ml_lTime++;
		}
	}
	
	bool LogoActivated()
	{
		return true;
	}
	
}