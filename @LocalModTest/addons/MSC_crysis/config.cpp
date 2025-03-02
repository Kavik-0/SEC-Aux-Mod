class CfgPatches
{
	class MSC_CRYSIS
	{
		addonRootClass="A3_Characters_F";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"Extended_EventHandlers",
			"cba_keybinding",
			"A3_anims_f",
			"141st_UNSC_Gear",
			"SEC_gen3_retexturemod",
			"SEC_Overwrite",
			"WBK_SciFiWeaponary"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_MSC_CRYSIS_HUD",
			"Vest_V_Rebreather_Nano_NATO",
			"Vest_V_Rebreather_Nano_CSAT",
			"Headgear_MSC_CRYSIS_Helmet",
			"Headgear_MSC_CRYSIS_HelmetV3",
			"Headgear_MSC_CRYSIS_Helmet_O",
			"Item_MSC_CRYSIS_Suit",
			"Item_MSC_CRYSIS_NanosuitV3",
			"Item_MSC_CRYSIS_Suit_Original",
			"Item_MSC_CRYSIS_Suit_O",
			"B_ViperHarness_AT_F",
			"B_ViperHarness_hex_AT_F",
			"B_MSC_Nano_F_Base",
			"B_MSC_Nano_F_CAP",
			"B_MSC_Nano_F_RIFLE",
			"B_MSC_Nano_F_DMR",
			"B_MSC_Nano_F_AT",
			"B_MSC_Nano_F_GL",
			"B_MSC_Nano_F_MG",
			"B_MSC_Nano_F_NanosuitV3",
			"O_MSC_Nano_F_Base",
			"O_MSC_Nano_F_CAP",
			"O_MSC_Nano_F_RIFLE",
			"O_MSC_Nano_F_DMR",
			"O_MSC_Nano_F_AT",
			"O_MSC_Nano_F_GL",
			"O_MSC_Nano_F_MG"
		};
		weapons[]=
		{
			"V_Rebreather_Nano_NATO",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_Helmet",
			"MSC_CRYSIS_HelmetV3",
			"MSC_CRYSIS_Helmet_O",
			"MSC_CRYSIS_Suit",
			"MSC_CRYSIS_Suit_Original",
			"MSC_CRYSIS_NanosuitV3",
			"MSC_CRYSIS_Suit_O"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class MSC: Mod_Base
	{
		picture="\MSC_crysis\MSC_pic.paa";
		logo="\MSC_crysis\MSC_logo.paa";
		logoOver="\MSC_crysis\MSC_logo_over.paa";
		logoSmall="\MSC_crysis\MSC_logo.paa";
		name="MSC MOD";
		hideName="true";
		actionName="";
		action="";
		author="MSC";
		dlcColor[]={0.19,0.54000002,0.80000001,1};
		dir="MSC";
	};
	author="MSC";
	timepacked="1588886955";
};

class Extended_PostInit_EventHandlers
{
	class MSC_Crysis_Init
	{
		init="execVM '\MSC_crysis\suit_modes\init.sqf';";
	};
};
class RscTitles
{
	class Default { 
		idd = -1; 
		fadein = 0; 
		fadeout = 0; 
		duration = 0; 
	}; 
	class RscProgress
	{
		type=8;
		style=0;
		shadow=0;
		colorFrame[]={0,0,0,0};
		colorBar[]=
		{
			"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
			"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
		};
		texture="\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
		w=0.25;
		h=0.029999999;
	};
	class RscText
	{
		deletable=0;
		fade=0;
		type=0;
		idc=-1;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		text="";
		fixedWidth=0;
		x=0;
		y=0;
		h=0.037;
		w=0.30000001;
		style=0;
		shadow=0;
		colorShadow[]={0,0,0,0.5};
		font="RobotoCondensed";
		SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		linespacing=1;
		tooltipColorText[]={1,1,1,1};
		tooltipColorBox[]={1,1,1,1};
		tooltipColorShade[]={0,0,0,0.64999998};
	};
	class RscPicture
	{
		idc = -1;
		type = 0;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "PuristaLight";
		sizeEx = 1;
		lineSpacing = 0;
		text = "";
		fixedWidth = 0;
		shadow = 0;
	};
		class MSC_CRY_HUD {
		idd = -1;
		movingEnable = 0;
		duration = 1000000;
		fadein = 0.5;
		fadeout = 0;	
		name = "msc_cry_hud";
		controls[] = {"Picture"};
		class Picture: RscPicture
		{
			x=safeZoneX; y=safeZoneY; w=safeZoneW; h=safeZoneH;
			idc = 1200;
			text = "\MSC_crysis\ui\crysis_overlay.paa";
			colorText[] = {1,1,1,0.5};
		};
	};
	
	class MSC_CRY_INFO
	{
		idd=9999;
		name="msc_cry-gui";
		onLoad="uiNamespace setVariable ['MSC_CRY_GUI_Display', _this select 0];";
		unload="uiNamespace setVariable ['MSC_CRY_GUI_Display', nil];";
		movingEnable=1;
		fadein=0;
		fadeout=0;
		duration=100000;
		class Controls
		{
			class MSC_energy_text: RscText
			{
				idc = 10860;
				text = ""; //--- ToDo: Localize;
				x = 0.915078 * safezoneW + safezoneX;
				y = 0.89325 * safezoneH + safezoneY;
				w = 0.0232031 * safezoneW;
				h = 0.02475 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.025 * safezoneH";
				style=0x02;
				shadow=0;
			};
			class MSC_grid_text: RscText
			{
				idc = 10861;
				text = ""; //--- ToDo: Localize;
				x = 0.876406 * safezoneW + safezoneX;
				y = 0.85575 * safezoneH + safezoneY;
				w = 0.0489844 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.032 * safezoneH";
				style=0x02;
				shadow=0;
			};
			class MSC_direction_text: RscText
			{
				idc = 10862;
				text = ""; //--- ToDo: Localize;
				x = 0.929258 * safezoneW + safezoneX;
				y = 0.82625 * safezoneH + safezoneY;
				w = 0.0283594 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.032 * safezoneH";
				style=0x02;
				shadow=0;
			};
			class MSC_health_text: RscText
			{
				idc = 10863;
				text = ""; //--- ToDo: Localize;
				x = 0.915078 * safezoneW + safezoneX;
				y = 0.9125 * safezoneH + safezoneY;
				w = 0.0232031 * safezoneW;
				h = 0.02475 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.025 * safezoneH";
				style=0x02;
				shadow=0;
			};
			class MSC_range_text: RscText
			{
				idc = 10864;
				text = ""; //--- ToDo: Localize;
				x = 0.929258 * safezoneW + safezoneX;
				y = 0.85575 * safezoneH + safezoneY;
				w = 0.0283594 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.025 * safezoneH";
				style=0x02;
				shadow=0;
			};
			class MSC_ammo_text: RscText
			{
				idc = 10865;
				text = ""; //--- ToDo: Localize;
				x = 0.881828 * safezoneW + safezoneX;
				y = 0.82625 * safezoneH + safezoneY;
				w = 0.0283594 * safezoneW;
				h = 0.033 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.038 * safezoneH";
				style=0x01;
				shadow=0;
			};
			class MSC_magazines_text: RscText
			{
				idc = 10866;
				text = ""; //--- ToDo: Localize;
				x = 0.905028 * safezoneW + safezoneX;
				y = 0.82925 * safezoneH + safezoneY;
				w = 0.020625 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[]={0.741, 1.000, 0.624,0.81};
				colorBackground[]={0,0,0,0};
				SizeEx="0.030 * safezoneH";
				style=0x00;
				shadow=0;
			};
		};
	};

	class MSC_CRY_OVERLAY_BASE
	{
		idd=20200918;
		fadeIn=0;
		fadeOut=0;
		duration=9.9999998e+010;
		x=safeZoneX;
		y=safeZoneY;
		w=safeZoneW;
		h=safeZoneH;
		onLoad="uiNamespace setVariable ['MSC_CRY_OVERLAY_BASE',_this select 0]";
		unload="uiNamespace setVariable ['MSC_CRY_OVERLAY_BASE', nil];";
		class Controls
		{
			class MSC_hud_frame: RscPicture
			{
				idc = 1200;
				text = "MSC_crysis\ui\msc_hud_base.paa";
				x = 0.824844 * safezoneW + safezoneX;
				y = 0.82725 * safezoneH + safezoneY;
				w = 0.162422 * safezoneW;
				h = 0.14575 * safezoneH;
				colorText[] = {0.745,0.996,0.655,0.75};
			};
			class MSC_mode_icon: RscPicture
			{
				idc = 1201;
				text = "MSC_crysis\ui\msc_armor_icon.paa";
				x = 0.948594 * safezoneW + safezoneX;
				y = 0.90975 * safezoneH + safezoneY;
				w = 0.0232031 * safezoneW;
				h = 0.04125 * safezoneH;
				colorText[] = {0.745,0.996,0.655,0.75};
			};
			class MSC_energy_bar_background: RscPicture
			{
				idc = 1202;
				colorText[] = {0.1,0.69,0.99,0.2};
				text="MSC_crysis\ui\MSC_hudbarTop.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.89875 * safezoneH + safezoneY;
				w = 0.0747656 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_energy_bar: RscProgress
			{
				idc = 1203;
				color[]={0.1,0.69,0.99,0.6};
				colorFrame[]={0,0,0,0};
				colorBar[]={0.1,0.69,0.99,0.6};
				colorBackground[]={0,0,0,0};
				texture="MSC_crysis\ui\MSC_hudbarTop.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.89875 * safezoneH + safezoneY;
				w = 0.0747656 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_energy_bar_holder: RscProgress
			{
				idc = 1204;
				color[]={0.1,0.69,0.99,0.6};
				colorFrame[]={0,0,0,0};
				colorBar[]={0.1,0.69,0.99,0.6};
				colorBackground[]={0,0,0,0};
				texture="MSC_crysis\ui\MSC_hudbar.paa";
				x = 0.906055 * safezoneW + safezoneX;
				y = 0.89875 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_energy_icon: RscPicture
			{
				idc = 1205;
				text = "MSC_crysis\ui\msc_energy_icon.paa";
				x = 0.906055 * safezoneW + safezoneX;
				y = 0.89875 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.01375 * safezoneH;
				colorText[] = {0.482, 0.827, 1.000,0.75};
			};
			class MSC_health_bar_background: RscPicture
			{
				idc = 1206;
				colorText[] = {0.490, 0.957, 0.090,0.2};
				text="MSC_crysis\ui\MSC_hudbarBottom.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.0747656 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_health_bar: RscProgress
			{
				idc = 1207;
				color[]={0.490, 0.957, 0.090,0.6};
				colorFrame[]={0,0,0,0};
				colorBar[]={0.490, 0.957, 0.090,0.6};
				colorBackground[]={0,0,0,0};
				texture="MSC_crysis\ui\MSC_hudbarBottom.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.0747656 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_health_bar_holder: RscProgress
			{
				idc = 1208;
				color[]={0.490, 0.957, 0.090,0.6};
				colorFrame[]={0,0,0,0};
				colorBar[]={0.490, 0.957, 0.090,0.6};
				colorBackground[]={0,0,0,0};
				texture="MSC_crysis\ui\MSC_hudbar.paa";
				x = 0.906055 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.01375 * safezoneH;
			};
			class MSC_health_icon: RscPicture
			{
				idc = 1209;
				text = "MSC_crysis\ui\msc_health_icon.paa";
				x = 0.907344 * safezoneW + safezoneX;
				y = 0.918 * safezoneH + safezoneY;
				w = 0.00773438 * safezoneW;
				h = 0.01375 * safezoneH;
				colorText[] = {0.655, 1.000, 0.482,0.75};
			};
		};
	};
};

class CfgSounds
{
	class cloak_deactivate
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\cloak_deactivate.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class armor_hit
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\hit.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class cloak_ready
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\cloak_ready.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_armor_origin
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\maximum_armor.ogg",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_strength_origin
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\maximum_strength.ogg",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_speed_origin
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\maximum_speed.ogg",
			1,
			1
		};
		titles[]={};
	};
	
	class cloak_origin
	{
		sound[]=
		{
			"MSC_crysis\sound\Origin\cloak_engaged.ogg",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_armor_asian
	{
		sound[]=
		{
			"MSC_crysis\sound\Asian\maximum_armor.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_strength_asian
	{
		sound[]=
		{
			"MSC_crysis\sound\Asian\maximum_strength.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class maximum_speed_asian
	{
		sound[]=
		{
			"MSC_crysis\sound\Asian\maximum_speed.wss",
			1,
			1
		};
		titles[]={};
	};
	
	class cloak_asian
	{
		sound[]=
		{
			"MSC_crysis\sound\Asian\cloak_engaged.wss",
			1,
			1
		};
		titles[]={};
	};
};

class UniformSlotInfo;
class CfgFactionClasses
{
	class MSC_Nano_NATO
	{
		displayName="[EAGLE]Spartan-IV Achilles Operators";
		author="EAGLE";
		dlc="MSC";
		icon="\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
		priority=100;
		side=1;
	};
	class MSC_Nano_CSAT
	{
		displayName="[V.O.I.D] Voidtech Dragon Operators";
		author="EAGLE";
		dlc="MSC";
		icon="\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
		priority=100;
		side=0;
	};
};
class CfgGlasses
{
	class None;
	class MSC_CRYSIS_HUD: None
	{
		displayname="Nano Suit HUD";
		_generalMacro="MSC_CRYSIS_HUD";
		model="\MSC_crysis\model\CCPS_crysis_HUD.p3d";
		author="MSC";
		dlc="MSC";
		picture="\MSC_crysis\UI\MSC_CRYSIS_HUD.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		identityTypes[]={};
		mass=1;
		mode=0;
	};
};
class cfgWeapons
{
	class arifle_ARX_blk_F;
	class arifle_ARX_blk_ARCO_Pointer_Snds_F: arifle_ARX_blk_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_ARX_blk_ARCO_Pointer_Snds_F";
		scope=1;
		baseWeapon="arifle_ARX_blk_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_65_TI_blk_F";
			};
		};
	};
	class MMG_02_black_F;
	class MMG_02_black_RCO_BI_Nano_F: MMG_02_black_F
	{
		scope=1;
		baseWeapon="MMG_02_black_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="MMG_02_black_RCO_BI_Nano_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_338_black";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_DMR_02_F;
	class srifle_DMR_02_black_AMS_LP_S_F: srifle_DMR_02_F
	{
		scope=1;
		baseWeapon="srifle_DMR_02_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="srifle_DMR_02_black_AMS_LP_S_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_338_black";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_Katiba_GL_F;
	class arifle_Katiba_GL_ARCO_snds_F: arifle_Katiba_GL_F
	{
		scope=1;
		baseWeapon="arifle_Katiba_GL_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_Katiba_GL_ARCO_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_65_TI_blk_F";
			};
		};
	};
	class hgun_Pistol_heavy_01_F;
	class hgun_Pistol_heavy_01_snds_MRD_F: hgun_Pistol_heavy_01_F
	{
		scope=1;
		baseWeapon="hgun_Pistol_heavy_01_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="hgun_Pistol_heavy_01_snds_MRD_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class arifle_CTARS_hex_F;
	class arifle_CTARS_hex_F_Nano: arifle_CTARS_hex_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_CTARS_hex_F_Nano";
		scope=1;
		baseWeapon="arifle_CTARS_hex_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_hex_F";
			};
		};
	};
	class arifle_CTAR_GL_hex_F;
	class arifle_CTAR_GL_hex_F_Nano: arifle_CTAR_GL_hex_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_CTAR_GL_hex_F_Nano";
		scope=1;
		baseWeapon="arifle_CTAR_GL_hex_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_hex_F";
			};
		};
	};
	class arifle_CTAR_hex_F;
	class arifle_CTAR_hex_F_Nano: arifle_CTAR_hex_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_CTAR_hex_F_Nano";
		scope=1;
		baseWeapon="arifle_CTAR_GL_hex_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_hex_F";
			};
		};
	};
	class srifle_DMR_05_hex_F;
	class srifle_DMR_05_hex_F_Nano: srifle_DMR_05_hex_F
	{
		scope=1;
		baseWeapon="srifle_DMR_05_hex_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="srifle_DMR_05_hex_F_Nano";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_hex";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_93mmg_tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_hex";
			};
		};
	};
	class MMG_01_hex_F;
	class MMG_01_hex_F_Nano: MMG_01_hex_F
	{
		scope=1;
		baseWeapon="MMG_01_hex_F";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="MMG_01_hex_F_Nano";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_93mmg_tan";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_hex";
			};
		};
	};
	class NVGoggles;
	class MSC_NanoVision: NVGoggles
	{
		scope=1;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		modelOptics="";
	};
	class ItemCore;
	class H_HelmetB;
	class HeadGearItem;
	class MSC_CRYSIS_Helmet: H_HelmetB
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		weaponPoolAvailable=1;
		displayName="[V.O.I.D]Voidtech Augmented Helmet (V1)";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\MSC_CRYSIS_Helmet.paa";
		model="\MSC_crysis\model\CCPS_crysis_head.p3d";
		ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0.35;
		hiddenSelections[]=
		{
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\tou_co.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=10;
			uniformModel="\MSC_crysis\model\CCPS_crysis_head.p3d";
			hiddenSelections[]={};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=12;
					passThrough=0.5;
				};
			};
		};
		subItems[]=
		{
			"MSC_NanoVision"
		};
	};
	class MSC_CRYSIS_HelmetV3: H_HelmetB
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		weaponPoolAvailable=1;
		displayName="[V.O.I.D]Voidtech Augmented Helmet (V3)";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\NanosuitV3_head.paa";
		model="\MSC_crysis\model\NanosuitV3_head.p3d";
		ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0.35;
		hiddenSelections[]=
		{
			"A_MO_head"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\NanosuitV3_head\head_co.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=10;
			uniformModel="\MSC_crysis\model\NanosuitV3_head.p3d";
			hiddenSelections[]={};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=12;
					passThrough=0.5;
				};
			};
		};
		subItems[]=
		{
			"MSC_NanoVision"
		};
	};
	class MSC_CRYSIS_Helmet_O: H_HelmetB
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		weaponPoolAvailable=1;
		displayName="[V.O.I.D]Voidtech Augmented Helmet (V2)";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\MSC_CRYSIS_Helmet_C.paa";
		model="\MSC_crysis\model\CCPS_crysis_head_C.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0.35;
		class ItemInfo: HeadGearItem
		{
			mass=10;
			uniformModel="\MSC_crysis\model\CCPS_crysis_head_C.p3d";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=12;
					passThrough=0.5;
				};
			};
		};
		subItems[]=
		{
			"MSC_NanoVision"
		};
	};
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class MSC_CRYSIS_Suit_Original: Uniform_Base
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit [WIP] [V1]";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\MSC_CRYSIS_Suit.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MSC_Nano_F_Original_Base";
			containerClass="Supply200";
			mass=20;
			uniformType="Neopren";
		};
	};
	class MSC_CRYSIS_NanosuitV3: Uniform_Base
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit [WIP] [V3]";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\NanosuitV3_body.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MSC_Nano_F_NanosuitV3_Base";
			containerClass="Supply200";
			mass=20;
			uniformType="Neopren";
		};
	};
	class MSC_CRYSIS_Suit: Uniform_Base
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit [WIP] [V2]";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\MSC_CRYSIS_Suit.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MSC_Nano_F_Base";
			containerClass="Supply200";
			mass=20;
			uniformType="Neopren";
		};
	};
	class MSC_CRYSIS_Suit_O: Uniform_Base
	{
		scope=2;
		author="MSC";
		dlc="MSC";
		displayName="[V.O.I.D] Voidtech Nanosuit [WIP]";
		descriptionShort="$STR_A3_SP_AL_V";
		picture="\MSC_crysis\UI\MSC_CRYSIS_Suit_C.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_MSC_Nano_F_Base";
			containerClass="Supply200";
			mass=20;
			uniformType="Neopren";
		};
	};
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="VestItem";
		type=701;
		uniformType="Default";
		hiddenSelections[]={};
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
		overlaySelectionsInfo[]=
		{
			"Ghillie_hide"
		};
		showHolsteredPistol=0;
	};
	class Vest_Camo_Base: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Vest_Camo_Base";
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply0";
			mass=0;
		};
	};
	class V_Rebreather_Nano_NATO: Vest_Camo_Base
	{
		author="MSC";
		dlc="MSC";
		_generalMacro="V_Rebreather_Nano_NATO";
		scope=2;
		displayName="[V.O.I.D] Voidtech Nanorebreather (V1)";
		picture="\MSC_crysis\UI\MSC_CRYSIS_SF.paa";
		model="\MSC_crysis\model\CCPS_crysis_HUD.p3d";
		descriptionShort="$STR_A3_SP_AL_V";
		class ItemInfo: ItemInfo
		{
			uniformModel="\MSC_crysis\model\CCPS_crysis_HUD.p3d";
			containerClass="Supply140";
			mass=10;
			vestType="Rebreather";
		};
	};
	class V_Rebreather_Nano_CSAT: V_Rebreather_Nano_NATO
	{
		author="MSC";
		dlc="MSC";
		_generalMacro="V_Rebreather_Nano_CSAT";
		scope=2;
		displayName="[V.O.I.D] Voidtech Nanorebreather (V2)";
		picture="\MSC_crysis\UI\MSC_CRYSIS_SF_C.paa";
		model="\MSC_crysis\model\CCPS_crysis_HUD.p3d";
		descriptionShort="$STR_A3_SP_AL_V";
	};
};
class CfgVehicles
{
	class VR_CoverObject_base_F;
	class MSC_cloak_collision: VR_CoverObject_base_F
	{
		author="Akaviri13";
		scope=1;
		scopeCurator=1;
		displayName="Cloak Collision";
		model="\MSC_crysis\model\cloak_collision.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_VRObjects";
		editorSubcategory="EdSubcat_Obstacles";
		vehicleClass="Structures_VR";
		destrType="DestructNo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\data_f\penetration\metal.rvmat"
		};
		class Attributes
		{};
		class DestructionEffects
		{};
	};
	
	class MSC_cloak_collision_crouch: MSC_cloak_collision
	{
		displayName="Cloak Collision";
		model="\MSC_crysis\model\cloak_collision_crouch.p3d";
	};
	class MSC_cloak_collision_prone: MSC_cloak_collision
	{
		displayName="Cloak Collision";
		model="\MSC_crysis\model\cloak_collision_prone.p3d";
	};
	
	class Item_NVGoggles;
	class Item_MSC_CRYSIS_HUD: Item_NVGoggles
	{
		editorSubcategory="EdSubcat_InventoryItems";
		displayName="[V.O.I.D] Voidtech Nanovision";
		author="MSC";
		dlc="MSC";
		class TransportItems
		{
			class MSC_CRYSIS_HUD
			{
				count=1;
				name="MSC_CRYSIS_HUD";
			};
		};
	};
	class Vest_Base_F;
	class Vest_V_Rebreather_Nano_NATO: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[V.O.I.D] Voidtech Nanorebreather [V2]";
		author="MSC";
		dlc="MSC";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rebreather_Nano_NATO
			{
				count=1;
				name="V_Rebreather_Nano_NATO";
			};
		};
	};
	class Vest_V_Rebreather_Nano_CSAT: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[V.O.I.D] Voidtech Nanorebreather [V3]";
		author="MSC";
		dlc="MSC";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Rebreather_Nano_CSAT
			{
				count=1;
				name="V_Rebreather_Nano_CSAT";
			};
		};
	};
	class B_ViperHarness_base_F;
	class B_ViperHarness_AT_F: B_ViperHarness_base_F
	{
		scope=1;
		displayName="$STR_A3_CfgVehicles_B_ViperHarness_blk_F0";
		_generalMacro="B_ViperHarness_AT_F";
		maximumLoad=300;
		mass=30;
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
		};
	};
	class B_ViperHarness_hex_F;
	class B_ViperHarness_hex_AT_F: B_ViperHarness_hex_F
	{
		scope=1;
		displayName="$STR_A3_CfgVehicles_B_ViperHarness_hex_F0";
		_generalMacro="B_ViperHarness_hex_AT_F";
		author="$STR_A3_Bohemia_Interactive";
		maximumLoad=300;
		mass=30;
		picture="\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperHarness_hex_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_hex_co.paa"
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
		};
	};
	class Headgear_Base_F;
	class Headgear_MSC_CRYSIS_Helmet: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[V.O.I.D] Voidtech Augmented Helmet";
		author="MSC";
		dlc="MSC";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class MSC_CRYSIS_Helmet
			{
				count=1;
				name="MSC_CRYSIS_Helmet";
			};
		};
	};
	class Headgear_MSC_CRYSIS_HelmetV3: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[V.O.I.D] Voidtech Augmented Helmet (V3)";
		author="MSC";
		dlc="MSC";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class MSC_CRYSIS_HelmetV3
			{
				count=1;
				name="MSC_CRYSIS_HelmetV3";
			};
		};
	};
	class Headgear_MSC_CRYSIS_Helmet_O: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[V.O.I.D] Voidtech Augmented Helmet (V2)";
		author="MSC";
		dlc="MSC";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class MSC_CRYSIS_Helmet_O
			{
				count=1;
				name="MSC_CRYSIS_Helmet_O";
			};
		};
	};
	class Item_Base_F;
	class Item_MSC_CRYSIS_Suit_Original: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit (V1) (WIP)";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class MSC_CRYSIS_Suit_Original
			{
				count=1;
				name="MSC_CRYSIS_Suit_Original";
			};
		};
	};
	class Item_MSC_CRYSIS_NanosuitV3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit (V3) (WIP)";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class MSC_CRYSIS_NanosuitV3
			{
				count=1;
				name="MSC_CRYSIS_NanosuitV3";
			};
		};
	};
	class Item_MSC_CRYSIS_Suit: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		author="MSC";
		dlc="MSC";
		displayName="[EAGLE] Achilles Undersuit (V2) (WIP)";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class MSC_CRYSIS_Suit
			{
				count=1;
				name="MSC_CRYSIS_Suit";
			};
		};
	};
	class Item_MSC_CRYSIS_Suit_O: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		author="MSC";
		dlc="MSC";
		displayName="[V.O.I.D] Voidtech Nanosuit [WIP]";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class MSC_CRYSIS_Suit_O
			{
				count=1;
				name="MSC_CRYSIS_Suit_O";
			};
		};
	};
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class O_V_Soldier_base_F;
	class B_MSC_Nano_F_Base: O_V_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		icon="iconManLeader";
		rank="COLONEL";
		scope=1;
		scopeCurator=1;
		model="\MSC_crysis\model\CCPS_crysis_body.p3d";
		hiddenSelections[]=
		{
			"MO_Body",
			"MO_BoZi",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa"
		};
		nakedUniform="U_BasicBody";
		uniformClass="MSC_CRYSIS_Suit";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType="SCUBA_SLOT";
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
	};
	class B_MSC_Nano_F_Original_Base: O_V_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		modelSides[]={0,1,2,3};
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		icon="iconManLeader";
		rank="COLONEL";
		scope=1;
		scopeCurator=1;
		model="\MSC_crysis\model\CCPS_crysis_body_Z.p3d";
		hiddenSelections[]=
		{
			"MO_Body_Z",
			"MO_BoZi_Z",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa"
		};
		nakedUniform="U_BasicBody";
		uniformClass="MSC_CRYSIS_Suit";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType="SCUBA_SLOT";
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
	};
	class B_MSC_Nano_F_NanosuitV3_Base: O_V_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		modelSides[]={0,1,2,3};
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		icon="iconManLeader";
		rank="COLONEL";
		scope=1;
		scopeCurator=1;
		model="\MSC_crysis\model\NanosuitV3_body.p3d";
		hiddenSelections[]=
		{
			"A_MO_arm",
			"A_MO_body",
			"A_MO_hand",
			"A_MO_head",
			"A_MO_leg"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\NanosuitV3_arm\arm_co.paa",
			"\MSC_crysis\data\NanosuitV3_body\body_co.paa",
			"\MSC_crysis\data\NanosuitV3_hand\hand_co.paa",
			"\MSC_crysis\data\NanosuitV3_head\head_co.paa",
			"\MSC_crysis\data\NanosuitV3_leg\leg_co.paa"
		};
		uniformClass="MSC_CRYSIS_NanosuitV3";
	};
	class O_MSC_Nano_F_Base: O_V_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		modelSides[]={0,1,2,3};
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		rank="COLONEL";
		icon="iconMan";
		scope=1;
		scopeCurator=1;
		accuracy=10;
		threat[]={1,1,1};
		model="\MSC_crysis\model\CCPS_crysis_body_C.p3d";
		nakedUniform="U_BasicBody";
		uniformClass="MSC_CRYSIS_Suit_O";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType="SCUBA_SLOT";
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
	};
	
	class B_MSC_Nano_F_CAP: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="COLONEL";
		role="Rifleman";
		icon="iconManLeader";
		displayName="Team Leader";
		hiddenSelections[]=
		{
			"MO_Body_Z",
			"MO_BoZi_Z",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit_Original";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_RIFLE: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="Rifleman";
		icon="iconMan";
		displayName="Rifleman";
		hiddenSelections[]=
		{
			"MO_Body",
			"MO_bozi",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_GL: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="Grenadier";
		icon="iconMan";
		displayName="Grenadier";
		hiddenSelections[]=
		{
			"MO_Body",
			"MO_bozi",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_AT: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="MissileSpecialist";
		icon="iconManAT";
		displayName="ATman";
		hiddenSelections[]=
		{
			"MO_Body",
			"MO_Bozi",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit";
		backpack="B_ViperHarness_AT_F";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_DMR: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="MAJOR";
		role="Marksman";
		icon="iconMan";
		displayName="Marksman";
		hiddenSelections[]=
		{
			"MO_Body_Z",
			"MO_BoZi_Z",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit_Original";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_MG: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		role="MachineGunner";
		cost=1000;
		rank="MAJOR";
		icon="iconManMG";
		displayName="Machine Gunner";
		hiddenSelections[]=
		{
			"MO_Body_Z",
			"MO_BoZi_Z",
			"MO_Tou"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\body_co.paa",
			"\MSC_crysis\data\bozi_co.paa",
			"\MSC_crysis\data\tou_co.paa"
		};
		uniformClass="MSC_CRYSIS_Suit_Original";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class B_MSC_Nano_F_NanosuitV3: B_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		side=1;
		faction="MSC_Nano_NATO";
		genericNames="NATOMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="COLONEL";
		role="Rifleman";
		icon="iconManLeader";
		displayName="Prophet";
		hiddenSelections[]=
		{
			"A_MO_arm",
			"A_MO_body",
			"A_MO_hand",
			"A_MO_head",
			"A_MO_leg"
		};
		hiddenSelectionsTextures[]=
		{
			"\MSC_crysis\data\NanosuitV3_arm\arm_co.paa",
			"\MSC_crysis\data\NanosuitV3_body\body_co.paa",
			"\MSC_crysis\data\NanosuitV3_hand\hand_co.paa",
			"\MSC_crysis\data\NanosuitV3_head\head_co.paa",
			"\MSC_crysis\data\NanosuitV3_leg\leg_co.paa"
		};
		uniformClass="MSC_CRYSIS_NanosuitV3";
		backpack="";
		weapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"SEC_MA5K",
			"SEC_M6C_Gen2",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_HelmetV3",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_HelmetV3",
			"V_Rebreather_Nano_NATO",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_CAP: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="COLONEL";
		role="Rifleman";
		icon="iconManLeader";
		displayName="Team Leader";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="";
		weapons[]=
		{
			"arifle_CTARS_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"arifle_CTARS_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_RIFLE: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="Rifleman";
		icon="iconMan";
		displayName="Rifleman";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="";
		weapons[]=
		{
			"arifle_CTARS_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"arifle_CTARS_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_GL: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="Grenadier";
		icon="iconMan";
		displayName="Grenadier";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="";
		weapons[]=
		{
			"arifle_CTAR_GL_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_GL_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_AT: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="CAPTAIN";
		role="MissileSpecialist";
		icon="iconManAT";
		displayName="ATman";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="B_ViperHarness_hex_AT_F";
		weapons[]=
		{
			"arifle_CTAR_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"launch_RPG32_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"launch_RPG32_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_DMR: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		cost=1000;
		rank="MAJOR";
		role="Marksman";
		icon="iconMan";
		displayName="Marksman";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="";
		weapons[]=
		{
			"srifle_DMR_05_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"srifle_DMR_05_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class O_MSC_Nano_F_MG: O_Soldier_base_F
	{
		author="MSC";
		dlc="MSC";
		scope=2;
		faceType="Man_A3";
		identityTypes[]=
		{
			"LanguageCHI_F",
			"Head_Asian"
		};
		side=0;
		faction="MSC_Nano_CSAT";
		genericNames="ChineseMen";
		scopeCurator=2;
		sensitivity=2.5;
		role="MachineGunner";
		cost=1000;
		rank="MAJOR";
		icon="iconManMG";
		displayName="Machine Gunner";
		uniformClass="MSC_CRYSIS_Suit_O";
		backpack="";
		weapons[]=
		{
			"MMG_01_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]=
		{
			"MMG_01_hex_F_Nano",
			"hgun_Pistol_heavy_01_snds_MRD_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"12Rnd_127x40_m6_SAPHE_tracer",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MSC_CRYSIS_Helmet_O",
			"V_Rebreather_Nano_CSAT",
			"MSC_CRYSIS_HUD",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
};
class CfgGroups
{
	class West
	{
		side=1;
		name="$STR_A3_CfgGroups_West0";
		class MSC_Nano_NATO
		{
			name="[EAGLE] Spartan-IV Achilles Operators";
			class Infantry
			{
				name="Infantry";
				class MSC_Nano_InfSquad_NATO
				{
					faction="MSC_Nano_NATO";
					name="Achilles Team";
					side=1;
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="B_MSC_Nano_F_CAP";
						rank="COLONEL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_MSC_Nano_F_RIFLE";
						rank="CAPTAIN";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="B_MSC_Nano_F_GL";
						rank="CAPTAIN";
						position[]={7,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="B_MSC_Nano_F_AT";
						rank="CAPTAIN";
						position[]={9,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="B_MSC_Nano_F_MG";
						rank="MAJOR";
						position[]={11,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="B_MSC_Nano_F_DMR";
						rank="MAJOR";
						position[]={13,0,0};
					};
				};
				class MSC_Nano_Prophet_NATO
				{
					faction="MSC_Nano_NATO";
					name="Prophet [EAGLE]";
					side=1;
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="B_MSC_Nano_F_NanosuitV3";
						rank="COLONEL";
						position[]={0,5,0};
					};
				};
			};
		};
	};
	class East
	{
		name="$STR_A3_CfgGroups_East0";
		side=0;
		class MSC_Nano_CSAT
		{
			name="[V.O.I.D] Dragon Nanosuit Operators";
			class Infantry
			{
				name="Infantry";
				class MSC_Nano_InfSquad_CSAT
				{
					faction="MSC_Nano_CSAT";
					name="[V.O.I.D] Dragon Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="O_MSC_Nano_F_CAP";
						rank="COLONEL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_MSC_Nano_F_RIFLE";
						rank="CAPTAIN";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_MSC_Nano_F_GL";
						rank="CAPTAIN";
						position[]={7,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_MSC_Nano_F_AT";
						rank="CAPTAIN";
						position[]={9,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_MSC_Nano_F_MG";
						rank="MAJOR";
						position[]={11,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="O_MSC_Nano_F_DMR";
						rank="MAJOR";
						position[]={13,0,0};
					};
				};
			};
		};
	};
};
