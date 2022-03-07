//The part above was in Russian, if you are not Russian, delete it and use this one.
class CfgPatches
{
	class hrp_cassette_group //Here you specify your base class, just make it the same as the group name and that's it.
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","YK_Radio"}; //Do not forget the query to the main mod!!!
	};
};
class CfgVehicles
{
	class YK_Cassette_Base; //This is where the standard class for the tape is called, it's originally empty, but you need to inherit from it.
	class hrp_cassette_cyrlica: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Cyrlica"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_cyrlica"; 
		};
	};
	class hrp_cassette_wedrink: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - For this we Drink"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_wedrink"; 
		};
	};
	class hrp_cassette_kalinka: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Kalinka"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_kalinka"; 
		};
	};
	class hrp_cassette_kiss: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Kiss"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_kiss"; 
		};
	};
	class hrp_cassette_gaza: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Sektor Gaza Time"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_gaza"; 
		};
	};
	class hrp_cassette_vedeve: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Ve De Ve"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_vedeve"; 
		};
	};
	class hrp_cassette_bandit: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Bandit Radio"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_bandit"; 
		};
	};
	class hrp_cassette_goodstalker: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - He was a Good Stalker"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_goodstalker"; 
		};
	};
	class hrp_cassette_stalkerguitar: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Stalker Guitar Tracks"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_stalkerguitar"; 
		};
	};
	class hrp_cassette_bodo: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Bodo Umówiłem sie na 9:00"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_bodo"; 
		};
	};
	class hrp_cassette_czeslaw1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Czesław Niemen Dziwny Jest Ten Świat"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_czeslaw1"; 
		};
	};
	class hrp_cassette_czeslaw2: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Czesław Niemen Sen o Warszawie"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_czeslaw2"; 
		};
	};
	class hrp_cassette_daldaev1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Shamhan Daldaev Eto Kavkaz"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_daldaev1"; 
		};
	};
	class hrp_cassette_fogg1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Fogg Ostatnia Niedziela"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_fogg1"; 
		};
	};
	class hrp_cassette_ocean: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Ocean Man"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_ocean"; 
		};
	};
	class hrp_cassette_kavinsky: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Nightcall Drive"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_kavinsky"; 
		};
	};
	class hrp_cassette_oktoberklub: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Was Wollen Wir Trinken"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_oktoberklub"; 
		};
	};
	class hrp_cassette_wozniak: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Zegarmistrz Swiatla"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_wozniak"; 
		};
	};
	class hrp_cassette_hardbass1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Babushka"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass1"; 
		};
	};
	class hrp_cassette_hardbass2: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Cheeki Breeki Revolt"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass2"; 
		};
	};
	class hrp_cassette_hardbass3: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Gopnik"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass3"; 
		};
	};
	class hrp_cassette_hardbass4: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Red Roubles"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass4"; 
		};
	};
	class hrp_cassette_hardbass5: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Snakes In Tracksuits"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass5"; 
		};
	};
	class hrp_cassette_hardbass6: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Take Me To Russia"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass6"; 
		};
	};
	class hrp_cassette_hardbass7: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Uamee Protivogaz"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass7"; 
		};
	};
	class hrp_cassette_hardbass8: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Vodovorot Vodovorot"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass8"; 
		};
	};
	class hrp_cassette_hardbass9: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Narkobaron"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hardbass9"; 
		};
	};
	class hrp_cassette_studzianki1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Studzianki"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_studzianki1"; 
		};
	};
	class hrp_cassette_russianwarsongs1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Russian War Songs"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_russianwarsongs1"; 
		};
	};
	class hrp_cassette_freestylegoodbye1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Freestyle Goodbye Forever"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_freestylegoodbye1"; 
		};
	};

	class hrp_cassette_5nizzatykidal1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - 5nizzaty kidal"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_5nizzatykidal1"; 
		};
	};
	class hrp_cassette_bastamama1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Basta - Mama"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_bastamama1"; 
		};
	};
	class hrp_cassette_Bielyje1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Bielyje"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_Bielyje1"; 
		};
	};
	class hrp_cassette_BNA1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - BNA"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_BNA1"; 
		};
	};
	class hrp_cassette_clearskyradio1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Clear Sky Radio"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_clearskyradio1"; 
		};
	};
	class hrp_cassette_Mihail1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Mihail"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_Mihail1"; 
		};
	};
	class hrp_cassette_MyMother1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - My Mother"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_MyMother1"; 
		};
	};
	class hrp_cassette_Nalewaj1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Nalewaj"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_Nalewaj1"; 
		};
	};
	class hrp_cassette_Polka1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Polka"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_Polka1"; 
		};
	};
	class hrp_cassette_schweine1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Schweine"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_schweine1"; 
		};
	};
	class hrp_cassette_seryogakingring1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Seryoga King Ring"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_seryogakingring1"; 
		};
	};
	class hrp_cassette_totoafrica1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Toto - Africa"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_totoafrica1"; 
		};
	};
	class hrp_cassette_ussr1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Ussr Anthem"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_ussr1"; 
		};
	};
	class hrp_cassette_acdc1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - ACDC Back in black"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_acdc1"; 
		};
	};
	class hrp_cassette_acdc2: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - ACDC Highway to hell"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_acdc2"; 
		};
	};
	class hrp_cassette_acdc3: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - ACDC Thunderstruck"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_acdc3"; 
		};
	};
	class hrp_cassette_hallelujah1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Hallelujah"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_hallelujah1"; 
		};
	};
	class hrp_cassette_krawczyk1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Bo jestes ty"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_krawczyk1"; 
		};
	};
	class hrp_cassette_krawczyk2: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Chcialbym byc"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_krawczyk2"; 
		};
	};
	class hrp_cassette_krawczyk3: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Parostatkiem"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_krawczyk3"; 
		};
	};
	class hrp_cassette_redsun1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Red sun in the sky"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_redsun1"; 
		};
	};
	class hrp_cassette_horosho1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Horosho"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_horosho1"; 
		};
	};
	class hrp_cassette_ja_ciebie_kochala1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Ja ciebie kochala"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_ja_ciebie_kochala1"; 
		};
	};
	class hrp_cassette_kalinkaNew1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Kalinka New"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_kalinkaNew1"; 
		};
	};
	class hrp_cassette_redalert1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Red Alert 3 theme soviet march"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_redalert1"; 
		};
	};
	class hrp_cassette_russian1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Russian"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_russian1"; 
		};
	};
	class hrp_cassette_the_farewell1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - The Farewell"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_the_farewell1"; 
		};
	};
	class hrp_cassette_we_re_not_gonna_take_it_with1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - We re not gonna take it with"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_we_re_not_gonna_take_it_with1"; 
		};
	};
	class hrp_cassette_paint_it_black1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Paint it black"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_paint_it_black1"; 
		};
	};
	class hrp_cassette_einem_polenst_dtchen1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Einem Polenstdtchen"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_einem_polenst_dtchen1"; 
		};
	};
	class hrp_cassette_sabaton_40_11: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - 40:1"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_sabaton_40_11"; 
		};
	};
	class hrp_cassette_smuglianka1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Smuglianka"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_smuglianka1"; 
		};
	};
	class hrp_cassette_lady_hear_me_tonight1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Lady hear me tonight"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_lady_hear_me_tonight1"; 
		};
	};
	class hrp_cassette_sleepwalking1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Sleepwalking"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_sleepwalking1"; 
		};
	};
	class hrp_cassette_who_will_save_the_world1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Who will save the world"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_who_will_save_the_world1"; 
		};
	};
	class hrp_cassette_you_re_my_heart_you_re_my_soul1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - You`re my heart you`re my soul"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_you_re_my_heart_you_re_my_soul1"; 
		};
	};
	class hrp_cassette_cerwonecolare1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Cerwone"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_cerwonecolare1"; 
		};
	};
	class hrp_cassette_jichaly_kozaky1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Jichaly Kozaky"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_jichaly_kozaky1"; 
		};
	};
	class hrp_cassette_katyusha1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Katyusha"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_katyusha1"; 
		};
	};
	class hrp_cassette_my_dad_is_a_war_criminal1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - My dad is a war criminal"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_my_dad_is_a_war_criminal1"; 
		};
	};
	class hrp_cassette_n_rnberg_orstka1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Orstka"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_n_rnberg_orstka1"; 
		};
	};
	class hrp_cassette_n_rnberg_valasy1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Valasy"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_n_rnberg_valasy1"; 
		};
	};
	class hrp_cassette_ruska_dawaj_dawaj1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Ruska dawaj dawaj"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_ruska_dawaj_dawaj1"; 
		};
	};
	class hrp_cassette_bosanska_artiljerija1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Bosanska artiljerija"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_bosanska_artiljerija1"; 
		};
	};
	class hrp_cassette_croatian_turbofolk1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Croatian turbofolk"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_croatian_turbofolk1"; 
		};
	};
	class hrp_cassette_himna_za_zivot_srbije1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Himna za zivot srbije"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_himna_za_zivot_srbije1"; 
		};
	};
	class hrp_cassette_serbia_strong1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Serbia STRONG"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_serbia_strong1"; 
		};
	};
	class hrp_cassette_escape_the_pi_a_colada1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Escape the piacolada"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_escape_the_pi_a_colada1"; 
		};
	};
	class hrp_cassette_jak_mak_owicz1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - jak mak-owicz"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_jak_mak_owicz1"; 
		};
	};
	class hrp_cassette_moje_miasto_bia_ystok1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Moje miasto bialystok"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_moje_miasto_bia_ystok1"; 
		};
	};
	class hrp_cassette_san_francisco1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - San Francisco"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_san_francisco1"; 
		};
	};
	class hrp_cassette_fazlija_helikopter1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Helikopter"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_fazlija_helikopter1"; 
		};
	};
	class hrp_cassette_pudzian_band_dawaj_na_ring1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Dawaj na ring"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_pudzian_band_dawaj_na_ring1"; 
		};
	};
	class hrp_cassette_redbone_come_and_get_your_love1: YK_Cassette_Base 
	{
		scope = 2;
		displayName = "Kaseta - Dawaj na ring"; 
		descriptionShort = "Kaseta która przypomina stare czasy"; 
		class CfgCassette
		{
			soundSet = "hrp_SoundSet_redbone_come_and_get_your_love1"; 
		};
	};
};
class CfgSoundSets
{
	class Mods_SoundSet_Base;
	class hrp_SoundSet_cyrlica : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_cyrlica_Shader"};
	};
	class hrp_SoundSet_wedrink : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_wedrink_Shader"};
	};
	class hrp_SoundSet_kalinka : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_kalinka_Shader"};
	};
	class hrp_SoundSet_kiss : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_kiss_Shader"};
	};
	class hrp_SoundSet_gaza : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_gaza_Shader"};
	};
	class hrp_SoundSet_vedeve : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_vedeve_Shader"};
	};
	class hrp_SoundSet_bandit : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_bandit_Shader"};
	};
	class hrp_SoundSet_goodstalker : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_goodstalker_Shader"};
	};
	class hrp_SoundSet_stalkerguitar : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_stalkerguitar_Shader"};
	};
	class hrp_SoundSet_bodo : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_bodo_Shader"};
	};
	class hrp_SoundSet_czeslaw1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_czeslaw1_Shader"};
	};
	class hrp_SoundSet_czeslaw2 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_czeslaw2_Shader"};
	};
	class hrp_SoundSet_daldaev1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_daldaev1_Shader"};
	};
	class hrp_SoundSet_fogg1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_fogg1_Shader"};
	};
	class hrp_SoundSet_ocean : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_ocean_Shader"};
	};
	class hrp_SoundSet_kavinsky : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_kavinsky1_Shader"};
	};
	class hrp_SoundSet_oktoberklub : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_oktoberklub1_Shader"};
	};
	class hrp_SoundSet_wozniak : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_wozniak1_Shader"};
	};
	class hrp_SoundSet_hardbass1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass1_Shader"};
	};
	class hrp_SoundSet_hardbass2 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass2_Shader"};
	};
	class hrp_SoundSet_hardbass3 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass3_Shader"};
	};
	class hrp_SoundSet_hardbass4 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass4_Shader"};
	};
	class hrp_SoundSet_hardbass5 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass5_Shader"};
	};
	class hrp_SoundSet_hardbass6 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass6_Shader"};
	};
	class hrp_SoundSet_hardbass7 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass7_Shader"};
	};
	class hrp_SoundSet_hardbass8 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass8_Shader"};
	};
	class hrp_SoundSet_hardbass9 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_hardbass9_Shader"};
	};
	class hrp_SoundSet_studzianki1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_studzianki1_Shader"};
	};
	class hrp_SoundSet_freestylegoodbye1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_freestylegoodbye1_Shader"};
	};
	class hrp_SoundSet_russianwarsongs1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_russianwarsongs1_Shader"};
	};
	class hrp_SoundSet_5nizzatykidal1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_5nizzatykidal1_Shader"};
	};
	class hrp_SoundSet_bastamama1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_bastamama1_Shader"};
	};
	class hrp_SoundSet_Bielyje1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_Bielyje1_Shader"};
	};
	class hrp_SoundSet_BNA1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_BNA1_Shader"};
	};
	class hrp_SoundSet_clearskyradio1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_clearskyradio1_Shader"};
	};
	class hrp_SoundSet_Mihail1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_Mihail1_Shader"};
	};
	class hrp_SoundSet_MyMother1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_MyMother1_Shader"};
	};
	class hrp_SoundSet_Nalewaj1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_Nalewaj1_Shader"};
	};
	class hrp_SoundSet_Polka1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_Polka1_Shader"};
	};
	class hrp_SoundSet_schweine1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_schweine1_Shader"};
	};
	class hrp_SoundSet_seryogakingring1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_seryogakingring1_Shader"};
	};
	class hrp_SoundSet_totoafrica1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_totoafrica1_Shader"};
	};
	class hrp_SoundSet_ussr1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_ussr1_Shader"};
	};
	class hrp_SoundSet_acdc1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_acdc1_Shader"};
	};
	class hrp_SoundSet_acdc2 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_acdc2_Shader"};
	};
	class hrp_SoundSet_acdc3 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_acdc3_Shader"};
	};
	class hrp_SoundSet_hallelujah1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_ahallelujah1_Shader"};
	};
	class hrp_SoundSet_krawczyk1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_krawczyk1_Shader"};
	};
	class hrp_SoundSet_krawczyk2 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_krawczyk2_Shader"};
	};
	class hrp_SoundSet_krawczyk3 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_krawczyk3_Shader"};
	};
	class hrp_SoundSet_redsun1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_redsun1_Shader"};
	};
	class hrp_SoundSet_horosho1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_horosho1_Shader"};
	};
	class hrp_SoundSet_ja_ciebie_kochala1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_ja_ciebie_kochala1_Shader"};
	};
	class hrp_SoundSet_kalinkaNew1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_kalinkaNew1_Shader"};
	};
	class hrp_SoundSet_redalert1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_redalert1_Shader"};
	};
	class hrp_SoundSet_russian1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_russian1_Shader"};
	};
	class hrp_SoundSet_the_farewell1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_the_farewell1_Shader"};
	};
	class hrp_SoundSet_we_re_not_gonna_take_it_with1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_we_re_not_gonna_take_it_with1_Shader"};
	};
	class hrp_SoundSet_paint_it_black1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_paint_it_black1_Shader"};
	};

	class hrp_SoundSet_einem_polenst_dtchen1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_einem_polenst_dtchen1_Shader"};
	};
	class hrp_SoundSet_sabaton_40_11 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_sabaton_40_11_Shader"};
	};
	class hrp_SoundSet_smuglianka1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_smuglianka1_Shader"};
	};
	class hrp_SoundSet_lady_hear_me_tonight1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_lady_hear_me_tonight1_Shader"};
	};
	class hrp_SoundSet_sleepwalking1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_sleepwalking1_Shader"};
	};
	class hrp_SoundSet_who_will_save_the_world1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_who_will_save_the_world1_Shader"};
	};
	class hrp_SoundSet_you_re_my_heart_you_re_my_soul1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_you_re_my_heart_you_re_my_soul1_Shader"};
	};
	class hrp_SoundSet_cerwonecolare1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_cerwonecolare1_Shader"};
	};
	class hrp_SoundSet_jichaly_kozaky1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_jichaly_kozaky1_Shader"};
	};
	class hrp_SoundSet_katyusha1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_katyusha1_Shader"};
	};
	class hrp_SoundSet_my_dad_is_a_war_criminal1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_my_dad_is_a_war_criminal1_Shader"};
	};
	class hrp_SoundSet_n_rnberg_orstka1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_n_rnberg_orstka1_Shader"};
	};
	class hrp_SoundSet_n_rnberg_valasy1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_n_rnberg_valasy1_Shader"};
	};
	class hrp_SoundSet_ruska_dawaj_dawaj1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_ruska_dawaj_dawaj1_Shader"};
	};
	class hrp_SoundSet_bosanska_artiljerija1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_bosanska_artiljerija1_Shader"};
	};
	class hrp_SoundSet_croatian_turbofolk1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_croatian_turbofolk1_Shader"};
	};
	class hrp_SoundSet_himna_za_zivot_srbije1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_himna_za_zivot_srbije1_Shader"};
	};
	class hrp_SoundSet_serbia_strong1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_serbia_strong1_Shader"};
	};
	class hrp_SoundSet_escape_the_pi_a_colada1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_escape_the_pi_a_colada1_Shader"};
	};
	class hrp_SoundSet_jak_mak_owicz1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_jak_mak_owicz1_Shader"};
	};
	class hrp_SoundSet_moje_miasto_bia_ystok1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_moje_miasto_bia_ystok1_Shader"};
	};
	class hrp_SoundSet_san_francisco1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_san_francisco1_Shader"};
	};
	class hrp_SoundSet_fazlija_helikopter1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_fazlija_helikopter1_Shader"};
	};
	class hrp_SoundSet_pudzian_band_dawaj_na_ring1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_pudzian_band_dawaj_na_ring1_Shader"};
	};
	class hrp_SoundSet_redbone_come_and_get_your_love1 : Mods_SoundSet_Base
	{
		soundShaders[] = {"hrp_redbone_come_and_get_your_love1_Shader"};
	};
};
class CfgSoundShaders
{
	class YK_Cassette_SoundShader_Base;
	
	class hrp_russianwarsongs1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\russian-war-songs",1}}; 
	};
	class hrp_freestylegoodbye1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\freestyle-goodbye-forever-fristail-proshhai-naveki",1}}; 
	};
	class hrp_studzianki1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\studzianki",1}}; 
	};
	class hrp_cyrlica_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\cyrlica",1}}; 
	};
	class hrp_wedrink_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\for-this-we-drink",1}}; 
	};
	class hrp_kalinka_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\kalinka",1}}; 
	};
	class hrp_kiss_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\kiss-the",1}}; 
	};
	class hrp_gaza_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\sektor-gaza-time",1}}; 
	};
	class hrp_vedeve_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\vedeve",1}}; 
	};
	class hrp_bandit_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\stalker\sound\bandit-radio",1}}; 
	};
	class hrp_goodstalker_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\stalker\sound\he-was-a-good-stalker",1}}; 
	};
	class hrp_stalkerguitar_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\stalker\sound\stalker-guitar-tracks",1}}; 
	};
	class hrp_bodo_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\bodo\sound\umowilemsie",1}}; 
	};
	class hrp_czeslaw1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\czeslaw\sound\czeslaw-niemen-dziwny-jest-ten-swiat",1}}; 
	};
	class hrp_czeslaw2_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\czeslaw\sound\czeslaw-niemen-sen-o-warszawie",1}}; 
	};
	class hrp_daldaev1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\daldaev\sound\shamhan-daldaev-eto-kavkaz",1}}; 
	};
	class hrp_fogg1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\fogg\sound\mieczyslaw-fogg-ostatnia-niedziela-1967",1}}; 
	};
	class hrp_ocean_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\oceanman\sound\ween-ocean-man",1}}; 
	};
	class hrp_kavinsky1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\kavinsky\sound\kavinsky-nightcall-drive-original-movie-soundtrack-official-audio",1}}; 
	};
	class hrp_oktoberklub1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\oktoberklub\sound\oktoberklub-was-wollen-wir-trinken",1}}; 
	};
	class hrp_wozniak1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wozniak\sound\zegarmistrz-swiatla",1}}; 
	};
	class hrp_hardbass1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\babushka",1}}; 
	};
	class hrp_hardbass2_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\cheeki-breeki-revolt",1}}; 
	};
	class hrp_hardbass3_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\gopnik",1}}; 
	};
	class hrp_hardbass4_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\red-roubles-boris-vs-xs-project",1}}; 
	};
	class hrp_hardbass5_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\snakes-in-tracksuits",1}}; 
	};
	class hrp_hardbass6_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\takemetorussia",1}}; 
	};
	class hrp_hardbass7_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\uamee-protivogaz",1}}; 
	};
	class hrp_hardbass8_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\vodovorot-vodovorot",1}}; 
	};
	class hrp_hardbass9_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardbass\sound\xs-project-narkobaron",1}}; 
	};
	class hrp_5nizzatykidal1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\5nizzatykidal",1}}; 
	};
	class hrp_bastamama1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\bastamama",1}}; 
	};
	class hrp_Bielyje1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\Bielyje",1}}; 
	};
	class hrp_BNA1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\BNA",1}}; 
	};
	class hrp_clearskyradio1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\clearskyradio",1}}; 
	};
	class hrp_Mihail1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\Mihail",1}}; 
	};
	class hrp_MyMother1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\MyMother",1}}; 
	};
	class hrp_Nalewaj1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\Nalewaj",1}}; 
	};
	class hrp_Polka1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\Polka",1}}; 
	};
	class hrp_schweine1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\schweine",1}}; 
	};
	class hrp_seryogakingring1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\seryogakingring",1}}; 
	};
	class hrp_totoafrica1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\totoafrica",1}}; 
	};
	class hrp_ussr1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\ussr",1}}; 
	};
	class hrp_acdc1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\acdc\sound\back_in_black",1}}; 
	};
	class hrp_acdc2_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\acdc\sound\highway_to_hell",1}}; 
	};
	class hrp_acdc3_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\acdc\sound\thunderstruck",1}}; 
	};
	class hrp_ahallelujah1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\hardrock\sound\hallelujah",1}}; 
	};
	class hrp_krawczyk1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\krawczyk\bojestesty",1}}; 
	};
	class hrp_krawczyk2_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\krawczyk\chialbym-byc",1}}; 
	};
	class hrp_krawczyk3_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\krawczyk\parostatek",1}}; 
	};
	class hrp_redsun1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\mem\sound\red_sun_in_the_sky",1}}; 
	};
	class hrp_horosho1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\horosho",1}}; 
	};
	class hrp_ja_ciebie_kochala1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\ja_ciebie_kochala",1}}; 
	};
	class hrp_kalinkaNew1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\kalinkaNew",1}}; 
	};
	class hrp_redalert1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\red_alert_3_theme_soviet_march",1}}; 
	};
	class hrp_russian1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\russian",1}}; 
	};
	class hrp_the_farewell1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\the_farewell",1}}; 
	};
	class hrp_we_re_not_gonna_take_it_with1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\sister\sound\we_re_not_gonna_take_it_with",1}}; 
	};
	class hrp_paint_it_black1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\stones\sound\paint_it_black",1}}; 
	};
	class hrp_einem_polenst_dtchen1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\achtung\sound\einem_polenst_dtchen",1}}; 
	};
	class hrp_sabaton_40_11_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\achtung\sound\sabaton_40_1",1}}; 
	};
	class hrp_smuglianka1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\achtung\sound\smuglianka",1}}; 
	};
	class hrp_lady_hear_me_tonight1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\gta\sound\lady_hear_me_tonight",1}}; 
	};
	class hrp_sleepwalking1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\gta\sound\sleepwalking",1}}; 
	};
	class hrp_who_will_save_the_world1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\modern\sound\who_will_save_the_world",1}}; 
	};
	class hrp_you_re_my_heart_you_re_my_soul1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\modern\sound\you_re_my_heart_you_re_my_soul",1}}; 
	};
	class hrp_cerwonecolare1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\cerwonecolare",1}}; 
	};
	class hrp_jichaly_kozaky1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\jichaly_kozaky",1}}; 
	};
	class hrp_katyusha1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\katyusha",1}}; 
	};
	class hrp_my_dad_is_a_war_criminal1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\my_dad_is_a_war_criminal",1}}; 
	};
	class hrp_n_rnberg_orstka1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\n_rnberg_orstka",1}}; 
	};
	class hrp_n_rnberg_valasy1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\n_rnberg_valasy",1}}; 
	};
	class hrp_ruska_dawaj_dawaj1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\rus\sound\ruska_dawaj_dawaj",1}}; 
	};
	class hrp_bosanska_artiljerija1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\serbian\sound\bosanska_artiljerija",1}}; 
	};
	class hrp_croatian_turbofolk1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\serbian\sound\croatian_turbofolk",1}}; 
	};
	class hrp_himna_za_zivot_srbije1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\serbian\sound\himna_za_zivot_srbije",1}}; 
	};
	class hrp_serbia_strong1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\serbian\sound\serbia_strong",1}}; 
	};
	class hrp_escape_the_pi_a_colada1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\escape_the_pi_a_colada",1}}; 
	};
	class hrp_jak_mak_owicz1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\jak_mak_owicz",1}}; 
	};
	class hrp_moje_miasto_bia_ystok1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\moje_miasto_bia_ystok",1}}; 
	};
	class hrp_san_francisco1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\san_francisco",1}}; 
	};

	class hrp_fazlija_helikopter1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\fazlija_helikopter",1}}; 
	};
	class hrp_pudzian_band_dawaj_na_ring1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\pudzian_band_dawaj_na_ring",1}}; 
	};
	class hrp_redbone_come_and_get_your_love1_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"\HumanityRP\hrp_cassette\cassettes\wiktor\sound\redbone_come_and_get_your_love",1}}; 
	};
};

