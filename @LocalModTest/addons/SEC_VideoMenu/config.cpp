
class CfgPatches
{
	class SEC_Video_Menu
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
		"A3_Data_F_Enoch_Loadorder",
		"TCP_Ui",
		"TCP_Data",
		"OPTRE_Core"};
		author = "Sp-4 R&D, proctored from Anton-044/SFG."; 	
	};
};

class CfgMusicClasses
{
  class SEC_Video_Menu_Music_Cat       // can be any identifier you like1
  {
    displayName = "Eagle Company Main Menu";
  };
};

class CfgMusic
{
  class SEC_Video_Menu_Music
  {
    name       = "Halo 3 Main Menu Music";
    sound[]    = {"\SEC_VideoMenu\music\H3_Main_Menu_Music.ogg", 1, 1};
    duration   = 369;               // seconds (optional but nice)
    musicClass = "SEC_Video_Menu_Music_Cat"; // ties it to the class above
  };
};

class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;

// Main Menu
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
  show   = 0;
  onLoad = ;
};
class RscTitles
{
	class SplashNoise
	{
		delete BackgroundNoise;
	};
};
class RscDisplayMain:RscStandardDisplay{
    class controls {
        class BackgroundSpotlight:Rscpicture {
            show=0;
            onload="";
        };
        class BackgroundSpotlightLeft:BackgroundSpotlight {
            show=0;
            onload="";
        };
        class BackgroundSpotlightRight:BackgroundSpotlightLeft {
            show=0;
            onload="";
        };
        class Spotlight1:RscMainMenuSpotlight {
            idc=1021;
            show=0;
            onload="";
        };
        class Spotlight2:Rsctext {
            idc=1020;
            show=0;
            onload="";
        };
        class Spotlight3:RscMainMenuSpotlight {
            idc=1022;
            show=0;
            onload="";
        };
        class SpotlightPrev:RscActivepictureKeepAspect {
            idc=1060;
            show=0;
            onload="";
        };
        class SpotlightNext:SpotlightPrev {
            show=0;
            onload="";
        };
        class logo:RscActivepicture {
            text="\SEC_VideoMenu\assets\logo.paa";
            url="";
            tooltip="Tutorial";
            onButtonClick="";
            onload="";
        };
        class logoApex:logo {
            show=0;
            onload="";
            text="";
        };
        class infomods:RscControlsgroupNoHScrollbars {
            show=0;
        };
        class infoDLCsOwned:infomods {
            show=1;
        };
        class infoDLCs:infoDLCsOwned {
            show=1;
        };
        class infoNews:infomods {
            show=1;
        };
        class infoVersion:infoNews {
            show=0;
        };
    };
    class RscTitles
  {
    class SplashNoise
    {
      delete BackgroundNoise;
    };
  };
};
class CfgWorlds {
	class CAWorld;	// External class reference
	class Altis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};
	
	class Stratis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class Enoch : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class hellanmaa : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};
	
	class hellanmaaw : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class VR : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	initWorld = "VR";
	demoWorld = "VR";
};

class CfgMissions
{
	class Cutscenes
	{
		class mymainmenu // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "SEC_VideoMenu\mainmenu.vr"; // Path to scenario with the scene
		};
	};
};