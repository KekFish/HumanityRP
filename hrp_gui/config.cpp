/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class CfgPatches
{
    class hrp_gui
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
    };
};

class CfgMods
{
	class hrp_gui
	{
	    dir = "HumanityRP";
		picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
		name = "HumanityRP Custom GUI";
		credits = "humanityrp.pl";
	    author = "MrKamil404";
	    authorID = "";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

		dependencies[]= 
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class imageSets
			{
				files[] = 
				{
					"HumanityRP/hrp_gui/gui/imagesets/gui.imageset"
				};
			};
			class widgetStyles
			{
				files[] =
				{
					"HumanityRP/hrp_gui/gui/styles/hrp_styles.styles"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HumanityRP/hrp_gui/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HumanityRP/hrp_gui/Scripts/5_Mission"
				};
			};
		};
    };
};
