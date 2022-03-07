class AimSoundsConstants
{
	static const string SOUNDSET_IN = "_aim_in_SoundSet";
	static const string SOUNDSET_OUT = "_aim_out_SoundSet";
	static const string CONFIG_ENTRY = "aimSoundSet";
	static const string DEFAULT_SOUNDSET = "AK";

	static const float MAX_RANGE = 20;
}

modded class DayZPlayerImplement extends DayZPlayer
{
	protected bool m_AS_IsSoundSynchServer;
	protected bool m_AS_IsSoundSynchClient;

	protected bool m_AS_IsDebug = false;

	void DayZPlayerImplement()
	{
		RegisterNetSyncVariableBool("m_AS_IsSoundSynchServer");
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		AS_DebugPrint("AS_ShouldPlaySound: "+AS_ShouldPlaySound());
		AS_DebugPrint("m_Initialized: "+m_Initialized);
		
		if (AS_ShouldPlaySound() && m_Initialized)
		{
			m_AS_IsSoundSynchClient = m_AS_IsSoundSynchServer;

			bool exit;
			if (m_IsFireWeaponRaised)
			{
				exit = false;
			}
			else if (!m_IsFireWeaponRaised)
			{
				exit = true;
			}

			AS_DebugPrint("exit: "+exit);

			Weapon_Base weapon;
			if (!Class.CastTo(weapon, GetHumanInventory().GetEntityInHands()))
			{
				AS_DebugPrint("No entity in hands. Sound will not play.");
				return;
			}

			PlayAimSound(weapon, exit);
		}
	}

	override void HandleWeapons(float pDt, Entity pInHands, HumanInputController pInputs, out bool pExitIronSights)
	{
		super.HandleWeapons(pDt, pInHands, pInputs, pExitIronSights);

		Weapon_Base weapon;
		if (!Class.CastTo(weapon, pInHands)) return;

		if (m_IsFireWeaponRaised && !m_RaiseStarted) //enter
		{
			SendAimSound(weapon, false);
		}
		else if (!m_IsFireWeaponRaised && m_RaiseStarted) //exit
		{
			SendAimSound(weapon, true);
		}
	}

	void SendAimSound(Weapon_Base weapon, bool exit)
	{
		AS_DebugPrint("Sending aim sound for weapon: "+weapon);
		AS_SoundSynch();
	}

	protected void PlayAimSound(Weapon_Base weapon, bool exit)
	{
		if (GetGame().IsServer() && GetGame().IsMultiplayer()) return;

		string sound_set = GetAimSoundSet(weapon, exit);

		EffectSound sound;
		PlaySoundSet(sound, sound_set, 0, 0);
		sound.SetSoundAutodestroy(true);
		sound.SetSoundVolume(1);

		AS_DebugPrint("PlayAimSound sound: "+sound);
		AS_DebugPrint("PlayAimSound sound autodestroy: "+sound.IsSoundAutodestroy());
		AS_DebugPrint("PlayAimSound sound volume: "+sound.GetSoundVolume());
		AS_DebugPrint("PlayAimSound sound_set: "+sound_set);
	}

	protected string GetAimSoundSet(Weapon_Base weapon, bool exit)
	{
		string sound_set;

		if (!weapon)
		{
			if (exit)
				return AimSoundsConstants.DEFAULT_SOUNDSET + AimSoundsConstants.SOUNDSET_OUT;
			else
				return AimSoundsConstants.DEFAULT_SOUNDSET + AimSoundsConstants.SOUNDSET_IN;
		}

		sound_set = weapon.ConfigGetString(AimSoundsConstants.CONFIG_ENTRY);

		// Fallback - predict sound set
		if (!sound_set || sound_set.Length() == 0)
			sound_set = PredictAimSoundSet(weapon);

		if (exit)
			return sound_set + AimSoundsConstants.SOUNDSET_OUT;
		else
			return sound_set + AimSoundsConstants.SOUNDSET_IN;
	}

	protected string PredictAimSoundSet(Weapon_Base weapon)
	{
		if (!weapon)
			return AimSoundsConstants.DEFAULT_SOUNDSET;

		if (weapon.IsInherited(Pistol_Base) || weapon.IsInherited(Magnum_Base))
			return "FNX45";

		if (weapon.IsInherited(BoltActionRifle_InnerMagazine_Base))
			return "Mosin";
		
		if (weapon.IsInherited(BoltActionRifle_Base) || weapon.IsInherited(DoubleBarrel_Base))
			return "CR527";

		string cartridge_type = weapon.GetChamberAmmoTypeName(weapon.GetCurrentMuzzle());

		if (cartridge_type.Contains("12ga"))
			return "Saiga";

		if (cartridge_type.Contains("762x54") || cartridge_type.Contains("308Win"))
			return "SVD";
		
		if (cartridge_type.Contains("Ammo_380"))
			return "CZ61";
		
		if (cartridge_type.Contains("9x39"))
			return "VSS";

		return AimSoundsConstants.DEFAULT_SOUNDSET;
	}
	
	void AS_SoundSynch()
	{
		m_AS_IsSoundSynchServer = !m_AS_IsSoundSynchServer;
		SetSynchDirty();
	}

	bool AS_ShouldPlaySound()
	{
		return m_AS_IsSoundSynchClient != m_AS_IsSoundSynchServer;
	}

	void AS_DebugPrint(string message)
	{
		if (!m_AS_IsDebug) return;
		Print("[AimSounds] "+ message);
	}
}