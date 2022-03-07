/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

/*
This file is only required if you want a custom music in the main menu
If you do not want custom music, delete this file
*/

class CfgPatches
{
	class hrp_custom_music
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
        {
            "DZ_Sounds_Effects"
        };
	};
};

class CfgSoundSets
{
	class FMusic_Menu_SoundSet {
		soundShaders[] = {"FMusic_Menu_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class CfgSoundShaders
{
	class FMusic_Menu_SoundShader {
		samples[] = {{"\HumanityRP\hrp_gui\music\mymusic", 1}};
		volume = 0.5;
	};
};