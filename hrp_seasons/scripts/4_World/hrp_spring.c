



#ifdef HRP_SPRING
modded class Plant_Pepper : PlantBase
{
	void Plant_Pepper()
	{
		m_FullMaturityTime = 2250*5;
		m_SpoilAfterFullMaturityTime = 172800;
	}
};
modded class Plant_Potato : PlantBase
{
	void Plant_Potato()
	{
		m_FullMaturityTime = 2850*5;
		m_SpoilAfterFullMaturityTime = 172800;
	}
};
modded class Plant_Pumpkin : PlantBase
{
	void Plant_Pumpkin()
	{
		m_FullMaturityTime = 2850*5;
		m_SpoilAfterFullMaturityTime = 172800;
	}
};
modded class Plant_Tomato : PlantBase
{
	void Plant_Tomato()
	{
		m_FullMaturityTime = 1650*5;
		m_SpoilAfterFullMaturityTime = 172800;
	}
};
modded class Plant_Zucchini : PlantBase
{
	void Plant_Zucchini()
	{
		m_FullMaturityTime = 1350*5;
		m_SpoilAfterFullMaturityTime = 172800;
	}
};
#endif