class CfgPatches
{
    class SEC_Overwrite
    {
        units[] = {};
        weapons[] = {"OPTRE_M45_Flashlight"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Weapons_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "A3_CargoPoses_F", "A3_Anims_F", "19_UNSC_Weapons", "OPTRE_Weapons", "OPTRE_Weapons_Pistol", "Misriah_Armory_Weapons", "OPTRE_Core", "NSWep_Weapons", "Casey_Halo_melee", "OPTRE_FC_Weapons"};
        author = "Reiken";
    };
};
class CfgMovesBasic; // Lines 12 to 27 increase sidearm draw speed.
class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class TransAnimBase;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			speed = 4.0; 
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			speed = 5.0; 
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class BaseSoundModeType;
class CfgSoundShaders
{
	//###################################### SHOTS ######################################
	class SEC_BR85_Closure_SoundShader
	{
		samples[] = {{ "SEC_Weapons\data\sounds\H5_DMR_1.ogg", 1}};
		range=5;
		volume="db0";
	};
	class SEC_BR85_closeShot_SoundShader
	{
		samples[] = {{ "SEC_Weapons\data\sounds\H5_BR_Close_1.ogg", 1 }};
		volume="db0";
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SEC_BR85_midShot_SoundShader
	{
		samples[] = {{ "SEC_Weapons\data\sounds\H5_BR_Med_1.ogg", 1 }};
		volume="db-3";
		range=1200;	
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class SEC_BR85_distShot_SoundShader
	{
		samples[] = {{ "SEC_Weapons\data\sounds\H5_BR_Very_Far_1.ogg", 1 }};
		volume="db0";
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class SEC_BR85_01_silencerShot_SoundShader
	{
		samples[] = {{ "SEC_Weapons\data\sounds\H5_DMR_Silenced_1.ogg", 1 }};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
};
class CfgSoundSets
{
	class Pistol_Shot_Base_SoundSet;
	class Rifle_Shot_Base_SoundSet;
	class BR85_Shot_Soundset: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SEC_BR85_Closure_SoundShader",
			"SEC_BR85_closeShot_SoundShader",
			"SEC_BR85_midShot_SoundShader",
			"SEC_BR85_distShot_SoundShader"
		};
	};
	class BR85_SilencedShot_Soundset: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SEC_BR85_01_silencerShot_SoundShader"
		};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgWeapons
{
	class launch_RPG7_F;
	class hgun_Pistol_heavy_02_F;
	class arifle_19_UNSC_M392_Base_F;
	class apistol_19_UNSC_M6C_Base_F;
	class arifle_19_UNSC_m7_Base_F;
	class arifle_19_UNSC_M90_Base_F;
	class arifle_19_UNSC_SRS99AM_Base_F;
	class OPTRE_Handgun_Base;
	class arifle_Mk20_F;
	class OPTRE_DMR_Base;
	class OPTRE_Shotgun_Base;
	class OPTRE_MachineGun_Base;
	class OPTRE_Rifle_Base;
	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_GuidedATLauncher_Base;
	class OPTRE_GuidedAALauncher_Base;
	class MA_Rifle_Base;
	class OPTRE_CowsSlot_Rail;
	class OPTRE_Pointers;
	class OPTRE_MA5C;
	class OPTRE_M41_SSR;
	class OPTRE_MA5K;
	class MA_MA2B_AR;
	class MA_H4_SAW;
	class OPTRE_Commando;
	class NSWep_MA5B;
	class NSWep_BR55HBM1;
	class NSWep_XBR55;
	class NSWep_BR55HBM1LR;
	class NSWep_BR55HBM1CQC;
	class NSWep_BR55HBM1GL;
	class NSWep_MA5BGL;
	class 19_UNSC_M392;
	class 19_UNSC_M6C;
	class 19_UNSC_M7;
	class 19_UNSC_M7_Side;
	class 19_UNSC_M90;
	class NSWep_SRS99AM;
	class OPTRE_M247;
	class OPTRE_M73;
	class OPTRE_M247H_Etilka;
	class OPTRE_M45;
	class OPTRE_M90A;
	class OPTRE_M45E;
	class OPTRE_M319;
	class OPTRE_M319N;
	class OPTRE_M319M;
	class OPTRE_M45ATAC;
	class OPTRE_M45A;
	class OPTRE_M45TAC;
	class OPTRE_HMG38;
	class OPTRE_HMG38_Rifle;
	class OPTRE_MA37K;
	class OPTRE_MA37B;
	class OPTRE_MA37BGL;
	class OPTRE_BR45_Black;
	class OPTRE_BR45GL_black;
	class OPTRE_MA5B;
	class OPTRE_M6GGNR;
	class OPTRE_M6G;
	class OPTRE_M6C;
	class OPTRE_M6B;
	class OPTRE_M6D;
	class OPTRE_M393_DMR;
	class OPTRE_M295_BMR;
	class OPTRE_M12_SOC;
	class OPTRE_M58S;
	class OPTRE_BR55HB;
	class OPTRE_MA32B;
	class NSWep_SRS99CS2;
	class NSWep_SRS99DS2;
	class OPTRE_M99A2S3;
	class OPTRE_M7;
	class MA_M7_SMG;
	class OPTRE_M7_Riot_Shield;
	class OPTRE_M7_Folded;
	class OPTRE_FC_Railgun;
	class Casey_Energy_Sword_1;
	class Casey_Energy_Sword_2;
	class OPTRE_M6D_Carbine_F;
	class OPTRE_M6DS_Carbine_Foregrip_F;
	class OPTRE_M6D_Carbine_Jungle_F;
	class OPTRE_M6DS_Carbine_Foregrip_Jungle_F;
	class OPTRE_M6D_Carbine_Desert_F;
	class OPTRE_M6DS_Carbine_Foregrip_Desert_F;
	class OPTRE_M6D_Carbine_Black_F;
	class OPTRE_M6DS_Carbine_Foregrip_Black_F;
	class OPTRE_BR37;
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class OPTRE_M6C_Laser;
	class ItemInfo;

	class OPTRE_M6C_Flashlight: OPTRE_M6C_Laser
	{
		displayName = "M6C Laser (Flashlight)";
		model = "\OPTRE_Weapons_Pistols\M6C\m6c_lam.p3d";
		MRT_SwitchItemNextClass = "OPTRE_M6C_Laser";
		MRT_SwitchItemPrevClass = "OPTRE_M6C_Vis_Red_Laser";
		MRT_switchItemHintText = "Flashlight";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		scopeArsenal = 1;
		class ItemInfo: ItemInfo
		{
			class FlashLight
			{
				color[]={255,251,248};
				ambient[]={14.2,9,6};
				intensity=4;
				size=1;
				innerAngle=15;
				outerAngle=120;
				coneFadeCoef=70;
				position="laser dir";
				direction="laser";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=600;
				dayLight=1;
				scale[]={0};
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=0.1;
					hardLimitStart=70;
					hardLimitEnd=120;
				};
			};		
		};	
	};
	class OPTRE_M6D_Flashlight: ItemCore
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";	
		scope               = 2;
		scopeArsenal        = 2;
		displayName 		= "M6G Flashlight";
		descriptionShort 	= "Flashlight for the M6D Handgun";
		model 				= "\OPTRE_Weapons_Pistols\M6D\M6D_Flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 1;
			class FlashLight
			{
				color[]={255,251,248};
				ambient[]={14.2,9,6};
				intensity=4;
				size=1;
				innerAngle=15;
				outerAngle=120;
				coneFadeCoef=70;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=600;
				dayLight=1;
				scale[]={0};
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=0.1;
					hardLimitStart=70;
					hardLimitEnd=120;
				};
			};
		};	
		MRT_SwitchItemNextClass = "OPTRE_M6D_IR_Laser";
		MRT_SwitchItemPrevClass = "OPTRE_M6D_Vis_Red_Laser";
		MRT_switchItemHintText = "Flashlight";	
		picture = "\OPTRE_Weapons_Pistols\M6D\Data\icons\attachments\base-flashlight.paa";						
		inertia = 0.1;
	};
	class OPTRE_M6G_Flashlight: ItemCore
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";	
		scope               = 2;
		scopeArsenal        = 2;
		displayName 		= "M6G Flashlight";
		picture 			= "\OPTRE_Weapons_Pistols\M6G\data\icons\flashlight.paa";
		descriptionShort 	= "Flashlight for the M6G Handgun";
		model 				= "\OPTRE_Weapons_Pistols\M6G\m6g_flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 1;
			class FlashLight
			{
				color[]={255,251,248};
				ambient[]={14.2,9,6};
				intensity=4;
				size=1;
				innerAngle=15;
				outerAngle=120;
				coneFadeCoef=70;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=600;
				dayLight=1;
				scale[]={0};
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=0.1;
					hardLimitStart=70;
					hardLimitEnd=120;
				};
			};
		};	
		MRT_SwitchItemNextClass = "OPTRE_M6G_Laser";
		MRT_SwitchItemPrevClass = "OPTRE_M6G_Vis_Red_Laser";
		MRT_switchItemHintText = "Flashlight";							
		inertia = 0.1;
	};
	class OPTRE_M7_Flashlight: ItemCore
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="M7 Flashlight";
		picture="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort="Flashlight for the M7 SMG";
		model="\OPTRE_Weapons\SMG\m7_flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class FlashLight
			{
				color[]={255,251,248};
				ambient[]={14.2,9,6};
				intensity=4;
				size=1;
				innerAngle=15;
				outerAngle=120;
				coneFadeCoef=70;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=600;
				dayLight=1;
				scale[]={0};
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=0.1;
					hardLimitStart=70;
					hardLimitEnd=120;
				};
			};
		};
		inertia=0.1
		MRT_SwitchItemNextClass="OPTRE_M7_Laser";
		MRT_SwitchItemPrevClass="OPTRE_M7_Vis_Red_Laser";
		MRT_switchItemHintText="Flashlight";
	};
	class OPTRE_M45_Flashlight: ItemCore
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		displayName="M45 Flashlight";
		picture="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort="Flashlight for the M45 Tactical Shotgun";
		model="\OPTRE_Weapons\Shotgun\flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				color[]={255,251,248};
				ambient[]={14.2,9,6};
				intensity=4;
				size=1;
				innerAngle=15;
				outerAngle=120;
				coneFadeCoef=70;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=600;
				dayLight=1;
				scale[]={0};
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=0.1;
					hardLimitStart=70;
					hardLimitEnd=120;
				};
			};
		};
	};
	class SEC_BR85HB: OPTRE_BR37
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85HB";
		displayName="[EAGLE] BR-85HB Service Rifle";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		model="OPTRE_Weapons\BR\BR37.p3d";
		picture 				= "\OPTRE_weapons\br\icons\br37_icon.paa";
		magazines[] 			= {"OPTRE_36Rnd_95x40_Mag"};
		ODST_1					= "OPTRE_ODST_HUD_AmmoCount_BR";
		Glasses					= "OPTRE_GLASS_HUD_AmmoCount_BR";
		Eye						= "OPTRE_EYE_HUD_AmmoCount_BR";
		HUD_BulletInARows		= 1;
		HUD_TotalPosibleBullet	= 36;
		dispersion				= 0.00001;
		maxZeroing				=	1500;
        magazineWell[] 			= {"OPTRE_Magwell_BR55"};
		handAnim[] =
		{
			"OFP2_ManSkeleton", "\OPTRE_Weapons\DMR\anim\Handanim_M395.rtm",
			"Spartan_ManSkeleton", "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85_1_co.paa",
			"SEC_Weapons\data\BR85\br85_2_co.paa",
			"SEC_Weapons\data\BR85\br85_3_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"SEC_Weapons\data\BR85\br85_1.rvmat",
			"SEC_Weapons\data\BR85\br85_2.rvmat",
			"SEC_Weapons\data\BR85\br85_3.rvmat"
		};
		modes[]= {
			"Single","Burst"
		};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_Suppressor",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR85N: SEC_BR85HB
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85N";
		displayName="[EAGLE] BR-85N Service Rifle";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85n_1_co.paa",
			"SEC_Weapons\data\BR85\br85n_2_co.paa",
			"SEC_Weapons\data\BR85\br85n_3_co.paa"
		};
	};
	class SEC_BR85WDL: SEC_BR85HB
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85WDL";
		displayName="[EAGLE] BR-85N Service Rifle (Woodland)";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85wdl_1_co.paa",
			"SEC_Weapons\data\BR85\br85wdl_2_co.paa",
			"SEC_Weapons\data\BR85\br85wdl_3_co.paa"
		};
	};
	class SEC_BR85ARC: SEC_BR85HB
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85ARC";
		displayName="[EAGLE] BR-85N Service Rifle (Arctic)";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85arc_1_co.paa",
			"SEC_Weapons\data\BR85\br85arc_2_co.paa",
			"SEC_Weapons\data\BR85\br85arc_3_co.paa"
		};
	};
	class SEC_BR85DES: SEC_BR85HB
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85DES";
		displayName="[EAGLE] BR-85N Service Rifle (Desert)";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85des_1_co.paa",
			"SEC_Weapons\data\BR85\br85des_2_co.paa",
			"SEC_Weapons\data\BR85\br85des_3_co.paa"
		};
	};
	class SEC_BR85NAV: SEC_BR85HB
	{
		author="Article 2 Studios, HighLvlPilot and Reiken";
		scope=2;
		scopeArsenal=2;
		baseWeapon = "SEC_BR85NAV";
		displayName="[EAGLE] BR-85N Service Rifle (Naval)";
		descriptionShort="A Post-War Battle Rifle designed for anti-alien combat, optimized for 3-round Burst.";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\BR85\br85nav_1_co.paa",
			"SEC_Weapons\data\BR85\br85nav_2_co.paa",
			"SEC_Weapons\data\BR85\br85nav_3_co.paa"
		};
	};
	class SEC_M6D_Carbine: OPTRE_M6D_Carbine_Black_F
	{
		displayName="[EAGLE] M6D Carbine"
		baseWeapon="SEC_M6D_Carbine"
		class WeaponSlotsInfo
		{
			mass=43;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_Suppressor",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M6DS_Carbine_Foregrip: OPTRE_M6DS_Carbine_Foregrip_Black_F
	{
		displayName="[EAGLE] M6DS Carbine (Foregrip)"
		baseWeapon="SEC_M6DS_Carbine_Foregrip"
		class WeaponSlotsInfo
		{
			mass=43;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_Suppressor",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M99A2S3: OPTRE_M99A2S3
	{
		displayName="[EAGLE] M99A2S3 SASR"
		baseWeapon="SEC_M99A2S3";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\SRS_Reload.ogg",
			5,
			1,
			30
		};
	};
	class SEC_M7SCaseless: MA_M7_SMG
	{
		displayName="[EAGLE] M7/S Caseless Submachine Gun"
		baseWeapon="SEC_M7SCaseless"
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		picture="SEC_Weapons\data\weaponIcons\m7scaseless.paa";
	};
	class SEC_ARC920_Railgun: OPTRE_FC_Railgun
	{
		displayName="[EAGLE] Asymmetric Recoilless Carbine-920"
		baseWeapon="SEC_ARC920_Railgun";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_ARC920_Body_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_ARC920_Reticle.paa"
		};
		magazines[]=
		{
			"SEC_Railgun_HE_Mag",
			"SEC_Railgun_HEDP_Mag",
			"SEC_Railgun_Smoke_Red",
			"SEC_Railgun_Smoke_Blue",
			"SEC_Railgun_Smoke_Green",
			"SEC_Railgun_Smoke_Yellow",
			"SEC_Railgun_Smoke_Purple",
			"SEC_Railgun_Smoke_White",
			"SEC_Railgun_Slugs",
		};
	};
	class SEC_SRS99C: NSWep_SRS99CS2
	{
		displayName="[EAGLE] SRS99-CS2 Sniper Rifle"
		baseWeapon="SEC_SRS99C";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\srs99c.paa";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\SRS_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_SRS99AM_Suppressor_Cloth",
					"NSWep_SRS99AM_MuzzleBrake",
					"NSWep_SRS99C_MuzzleBrake",
					"NSWep_SRS99D_S1_MuzzleBrake",
					"NSWep_SRS99D_S2_MuzzleBrake",
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"optic_dms",
				"optic_KHS_blk",
				"optic_SOS",
				"optic_LRPS",
				"optic_Nightstalker",
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_SRM_Sight",
				"optic_AMS",
				"OPTRE_M7_Sight",
				"NSWep_ORACLE_K_Optic",
				"NSWep_ORACLE_K_Optic_E",
				"NSWep_ORACLE_K_Optic_S",
				"NSWep_ORACLE_K_ARD_Optic",
				"NSWep_ORACLE_K_ARD_Optic_E",
				"NSWep_ORACLE_K_ARD_Optic_S",
				"NSWep_ORACLE_L_Optic",
				"NSWep_ORACLE_L_Optic_E",
				"NSWep_ORACLE_L_Optic_S",
				"NSWep_ORACLE_L_ARD_Optic",
				"NSWep_ORACLE_L_ARD_Optic_E",
				"NSWep_ORACLE_L_ARD_Optic_S",
				"NSWep_ORACLE_N_Optic",
				"NSWep_ORACLE_N_Optic_E",
				"NSWep_ORACLE_N_Optic_S",
				"NSWep_ORACLE_N_ARD_Optic",
				"NSWep_ORACLE_N_ARD_Optic_E",
				"NSWep_ORACLE_N_ARD_Optic_S"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{};
			};
		};
	};
	class SEC_SRS99D: NSWep_SRS99DS2
	{
		displayName="[EAGLE] SRS99-DS2 Sniper Rifle"
		baseWeapon="SEC_SRS99D";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\srs99c.paa";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\SRS_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_SRS99AM_Suppressor_Cloth",
					"NSWep_SRS99AM_MuzzleBrake",
					"NSWep_SRS99C_MuzzleBrake",
					"NSWep_SRS99D_S1_MuzzleBrake",
					"NSWep_SRS99D_S2_MuzzleBrake",
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"optic_dms",
				"optic_KHS_blk",
				"optic_SOS",
				"optic_LRPS",
				"optic_Nightstalker",
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_SRM_Sight",
				"optic_AMS",
				"OPTRE_M7_Sight",
				"NSWep_ORACLE_K_Optic",
				"NSWep_ORACLE_K_Optic_E",
				"NSWep_ORACLE_K_Optic_S",
				"NSWep_ORACLE_K_ARD_Optic",
				"NSWep_ORACLE_K_ARD_Optic_E",
				"NSWep_ORACLE_K_ARD_Optic_S",
				"NSWep_ORACLE_L_Optic",
				"NSWep_ORACLE_L_Optic_E",
				"NSWep_ORACLE_L_Optic_S",
				"NSWep_ORACLE_L_ARD_Optic",
				"NSWep_ORACLE_L_ARD_Optic_E",
				"NSWep_ORACLE_L_ARD_Optic_S",
				"NSWep_ORACLE_N_Optic",
				"NSWep_ORACLE_N_Optic_E",
				"NSWep_ORACLE_N_Optic_S",
				"NSWep_ORACLE_N_ARD_Optic",
				"NSWep_ORACLE_N_ARD_Optic_E",
				"NSWep_ORACLE_N_ARD_Optic_S"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{};
			};
		};
	};
	class SEC_SRS99AM: NSWep_SRS99AM
	{
		displayName="[EAGLE] SRS99-AM Sniper Rifle"
		baseWeapon="SEC_SRS99AM";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\srs99c.paa";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\SRS_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_SRS99AM_Suppressor_Cloth",
					"NSWep_SRS99AM_MuzzleBrake",
					"NSWep_SRS99C_MuzzleBrake",
					"NSWep_SRS99D_S1_MuzzleBrake",
					"NSWep_SRS99D_S2_MuzzleBrake",
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"optic_dms",
				"optic_KHS_blk",
				"optic_SOS",
				"optic_LRPS",
				"optic_Nightstalker",
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_SRM_Sight",
				"optic_AMS",
				"OPTRE_M7_Sight",
				"NSWep_ORACLE_K_Optic",
				"NSWep_ORACLE_K_Optic_E",
				"NSWep_ORACLE_K_Optic_S",
				"NSWep_ORACLE_K_ARD_Optic",
				"NSWep_ORACLE_K_ARD_Optic_E",
				"NSWep_ORACLE_K_ARD_Optic_S",
				"NSWep_ORACLE_L_Optic",
				"NSWep_ORACLE_L_Optic_E",
				"NSWep_ORACLE_L_Optic_S",
				"NSWep_ORACLE_L_ARD_Optic",
				"NSWep_ORACLE_L_ARD_Optic_E",
				"NSWep_ORACLE_L_ARD_Optic_S",
				"NSWep_ORACLE_N_Optic",
				"NSWep_ORACLE_N_Optic_E",
				"NSWep_ORACLE_N_Optic_S",
				"NSWep_ORACLE_N_ARD_Optic",
				"NSWep_ORACLE_N_ARD_Optic_E",
				"NSWep_ORACLE_N_ARD_Optic_S"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{};
			};
		};
	};
	class SEC_M739_SAW: MA_H4_SAW
	{
		displayName="[EAGLE] M739 SAW";
		pictureMjolnirHud = "SEC_Weapons\data\weaponIcons\M739_LMG.paa";
		baseWeapon="SEC_M739_SAW";
		picture="SEC_Weapons\data\weaponIcons\m739saw_icon.paa";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_BR75: OPTRE_BR55HB
	{
		displayName="[EAGLE] BR-75 Service Rifle";
		baseWeapon="SEC_BR75";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_BR55_Body1_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_BR55_Body2_CTGCY.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_M58SAR: OPTRE_M58S
	{
		displayName="[EAGLE] M58S Special Applications Rifle";
		baseWeapon="SEC_M58SAR";
		class WeaponSlotsInfo
		{
			mass=84;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M295_BMR: OPTRE_M295_BMR
	{
		displayName="[EAGLE] M295 BMR";
		baseWeapon="SEC_M295_BMR";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_MA2B_AR: MA_MA2B_AR
	{
		displayName="[EAGLE] MA2B ICWS";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA2B_AR";
		picture="SEC_Weapons\data\weaponIcons\ma2b_icon.paa";
		reloadAction="GestureReloadBR55";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5A_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA5B_GEN1: NSWep_MA5B
	{
		displayName="[EAGLE] MA5B Gen 1 ICWS";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA5B_GEN1";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};	
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_Suppressor",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"NSWEP_MA5_Optic",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class SEC_MA5B_gl: NSWep_MA5BGL
	{
		displayName="[EAGLE] MA5B Gen 1 ICWS (UGL)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA5B_gl";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_Suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"NSWEP_MA5_Optic",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class SEC_BR55GL: NSWep_BR55HBM1GL
	{
		displayName="[EAGLE] BR-55HB Service Rifle (UGL)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55GL";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		modes[]= {
			"Single","Burst"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR55: NSWep_XBR55
	{
		displayName="[EAGLE] BR-55 Service Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		modes[]= {
			"Single","Burst"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR55CQC: NSWep_BR55HBM1CQC
	{
		displayName="[EAGLE] BR-55 Carbine";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55CQC";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR55MKM: NSWep_BR55HBM1LR
	{
		displayName="[EAGLE] BR-55 Marksman Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55MKM";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		modes[]= {
			"Single","Burst"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR55HB: NSWep_BR55HBM1
	{
		displayName="[EAGLE] BR-55HB Service Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55HB";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		modes[]= {
			"Single","Burst"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M392_Gen1: 19_UNSC_M392
	{
		displayName="[EAGLE] M392 Designated Marksman Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\m392_icon.paa";
		baseWeapon="SEC_M392_Gen1";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"19_UNSC_evo",
				"19_UNSC_evosd",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M6C_Gen2: 19_UNSC_M6C
	{
		displayName="[EAGLE] M6C PDWS (Gen2)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\Pistols\m6b_icon.paa";
		baseWeapon="SEC_M6C_Gen2"
	};
	class SEC_M7_Gen1: OPTRE_M7
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Gen1)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Gen1";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M7_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M7_Body_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M7_Magazine_CTGCY.paa"
		};
		class WeaponSlotsInfo
		{
			mass=25;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser",
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Laser"
				};
			};
		};
	};
	class SEC_M7_Folded: OPTRE_M7_Folded
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Folded)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Folded";
		class WeaponSlotsInfo
		{
			mass=25;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"NSWep_BR55M1A2_Optic",
				"NSWep_BR55M1A2_3D_Optic",
				"NSWep_BR55M1A2LR_Optic",
				"NSWep_BR55M1A2M1_Optic",
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser",
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight"
				};
			};
		};
	};
	class SEC_BallisticShield_M7: OPTRE_M7_Riot_Shield
	{
		displayName="[EAGLE] M388/R Ballistic Shield (M7/Caseless)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_BallisticShield_M7";
		picture="SEC_Weapons\data\weaponIcons\m388rsmg.paa";
		class WeaponSlotsInfo
		{
			mass=50;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"NSWep_BR55M1_FlashHider",
					"NSWep_BR55M1_Suppressor",
					"NSWep_BR55M1_ThreadCover",
					"optre_ma5suppressor",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser",
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight"
				};
			};
		};
	};
	class SEC_M7_Gen2: 19_UNSC_M7
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Gen2)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Gen2";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M7_Reload.ogg",
			5,
			1,
			30
		};
	};
	class SEC_M7_Gen2_Sidearm: 19_UNSC_M7_Side
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Gen2 Sidearm)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Gen2_Sidearm"
	};
	class SEC_M90: 19_UNSC_M90
	{
		displayName="[EAGLE] M90 CAWS Shotgun";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\Shotguns\m452_icon.paa";
		baseWeapon="SEC_M90"
	};
	class SEC_Commando: OPTRE_Commando
	{
		displayName="[EAGLE] VK78 Commando Rifle";
		baseWeapon="SEC_Commando";
		hiddenSelectionsTextures[]=
		{
			"SEC_Weapons\data\GunTextures\CTGCY_VK78_Body1_CTGCY.paa",
			"SEC_Weapons\data\GunTextures\CTGCY_VK78_Body2_CTGCY.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_M73: OPTRE_M73
	{
		displayName="[EAGLE] M73 Light Machine Gun";
		baseWeapon="SEC_M73";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M73_Body_CTGCY.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_M247: OPTRE_M247
	{
		displayName="[EAGLE] M247 General Purpose Machine Gun";
		baseWeapon="SEC_M247";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M247_Body1_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M247_Body2_CTGCY.paa",
			"\OPTRE_Weapons\MG\data\M247_magazine_CO.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M247_Stock_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M247_Barrel1.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M247_Barrel2.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_M247H: OPTRE_M247H_Etilka
	{
		displayName="[EAGLE] M247H Heavy Machine Gun"
		baseWeapon="SEC_M247H";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class SEC_M45: OPTRE_M45
	{
		displayName="[EAGLE] M45 Tactical Shotgun";
		baseWeapon="SEC_M45";
		magazineWell[] = {"19_UNSC_M90_Magwell"};
		magazines[] 			= {"12Rnd_8Gauge"};
		hiddenSelectionsTextures[]=
		{
			"SEC_weapons\data\GunTextures\CTGCY_M45_Body_CTGCY.paa",
			"",
			"optre_weapons\shotgun\data\shell_pellet_co.paa",
			"optre_weapons\shotgun\data\shell_slug_co.paa",
			"SEC_weapons\data\GunTextures\CTGCY_M45_Pouch.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M90A: OPTRE_M90A
	{
		displayname="[EAGLE] M90A CAWS";
		baseWeapon="SEC_M90A";
		magazineWell[] = {"19_UNSC_M90_Magwell"};
		magazines[] 			= {"12Rnd_8Gauge"};
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M90_Body_CTGCY.paa",
			"#(argb,8,8,3)color(0.215686,0.945098,0.984314,1.0,co)"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M45E: OPTRE_M45E
	{
		displayName="[EAGLE] M45E Extended Barrel Shotgun";
		baseWeapon="SEC_M45E";
		magazineWell[] = {"19_UNSC_M90_Magwell"};
		magazines[] 			= {"12Rnd_8Gauge"};
		hiddenSelectionsTextures[]=
		{
			"SEC_weapons\data\GunTextures\CTGCY_M45E_Body_CTGCY.paa",
			"",
			"optre_weapons\shotgun\data\shell_pellet_co.paa",
			"optre_weapons\shotgun\data\shell_slug_co.paa",
			"SEC_weapons\data\GunTextures\CTGCY_M45_Pouch.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M319: OPTRE_M319
	{
		displayName="[EAGLE] M319 Individual Grenade Launcher";
		baseWeapon="SEC_M319";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class SEC_M319N : OPTRE_M319N
	{
		displayName="[EAGLE] M319N Tactical Grenade Launcher";
		baseWeapon="SEC_M319N";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class SEC_M319M : OPTRE_M319M
	{
		displayName="[EAGLE] M319M Mobile Grenade Launcher";
		baseWeapon="SEC_M319M";
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
		};
	};
	class OPTRE_CQS48_Bulldog_Automatic;
	class SEC_CQS48_Bulldog : OPTRE_CQS48_Bulldog_Automatic
	{
		displayName="[EAGLE] CQS-48 Bulldog";
		baseweapon="SEC_CQS48_Bulldog";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_CQS48_Body_CTGCY.paa",
			""
		};
		modes[]= {
			"Single"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_M45TAC : OPTRE_M45TAC
	{
		displayName="[EAGLE] M45 Tactical Shotgun (Bandoleer)";
		baseWeapon="SEC_M45TAC";
		magazineWell[] = {"19_UNSC_M90_Magwell"};
		magazines[] 			= {"12Rnd_8Gauge"};
		hiddenSelectionsTextures[]=
		{
			"SEC_weapons\data\GunTextures\CTGCY_M45_Body_CTGCY.paa",
			"",
			"optre_weapons\shotgun\data\shell_pellet_co.paa",
			"optre_weapons\shotgun\data\shell_slug_co.paa",
			"SEC_weapons\data\GunTextures\CTGCY_M45_Pouch.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA5B_GEN2: OPTRE_MA5B
	{
		displayName="[EAGLE] MA5B ICWS (Gen2)";
		baseWeapon="SEC_MA5B_GEN2";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\GunTextures\CTGCY_MA5_FL_CTGCY.paa",
			"SEC_Weapons\data\GunTextures\CTGCY_MA5B_Cover_BLANK.paa",
			"\optre_weapons\ar\data\coverc_co.paa",
			"\optre_weapons\optics\data\reticles\MA5_Reticle.paa"
		};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};	
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA5D: OPTRE_MA5C
	{
		displayName="[EAGLE] MA5D ICWS";
		baseWeapon="SEC_MA5D";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\GunTextures\CTGCY_MA5_FL_CTGCY.paa",
			"SEC_Weapons\data\GunTextures\CTGCY_MA5C_Cover_CTGCY.paa",
			"\optre_weapons\ar\data\coverc_co.paa",
			"\optre_weapons\optics\data\reticles\MA5_Reticle.paa"
		};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA5K: OPTRE_MA5K
	{
		displayName="[EAGLE] MA5K Carbine";
		baseWeapon="SEC_MA5K";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[]  = {"SEC_Weapons\data\GunTextures\CTGCY_MA5K_Body_CTGCY"};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_HMG38: OPTRE_HMG38_Rifle
	{
		displayName="[EAGLE] HMG-38 Monitor Rifle"
		baseWeapon="SEC_HMG38";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_HMG38_Front_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_HMG38_Rear_CTGCY.paa",
			""
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",,
				"optic_Nightstalker",
				"optic_SOS",
				"OPTRE_HMG38_CarryHandle"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_M41_SSR : OPTRE_M41_SSR
	{
		displayName="[EAGLE]M41 SSR MAV/AW Jackhammer";
		baseWeapon="SEC_M41_SSR"
	};
	class SEC_MA37K: OPTRE_MA37K
	{
		displayName="[EAGLE] MA37K Carbine";
		baseWeapon="SEC_MA37K";
		reloadAction="GestureReloadBR55";
		magazines[] = {"SEC_36Rnd_762x51_Mag"};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5A_Reload.ogg",
			5,
			1,
			30
		};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet",
					"OPTRE_MA37KSuppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA40: OPTRE_MA37B
	{
		displayName="[EAGLE] MA40 ICWS";
		baseWeapon="SEC_MA40";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		handAnim[] =
		{
			"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma37.rtm",
			"Spartan_ManSkeleton", "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\hand_anim_ma37_Spartan.rtm"
		};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		hiddenSelectionsTextures[] = {
			"SEC_Weapons\data\GunTextures\CTGCY_MA3_FL_CTGCY.paa", 
			"SEC_Weapons\data\GunTextures\CTGCY_MA3_Cover_CTGCY.paa",
			"\optre_weapons\ar\data\r_ar_ca.paa"
		};		
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA40A: OPTRE_MA32B
	{
		displayName="[EAGLE] MA40A ICWS";
		baseWeapon="SEC_MA40A";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_GL_CTGCY.paa",
			"\optre_weapons\ar\data\ironsights_co.paa"
		};
		class FlashLight
		{
			color[]={255,251,248};
			ambient[]={14.2,9,6};
			intensity=4;
			size=1;
			innerAngle=15;
			outerAngle=120;
			coneFadeCoef=70;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1;
			flareMaxDistance=600;
			dayLight=1;
			scale[]={0};
			class Attenuation
			{
				start=0;
				constant=1;
				linear=1;
				quadratic=0.1;
				hardLimitStart=70;
				hardLimitEnd=120;
			};
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS",
				"optic_ico_01_black_f"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_MA40GL: OPTRE_MA37BGL
	{
		displayName="[EAGLE] MA40 ICWS (UGL)";
		baseWeapon="SEC_MA40GL";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\MA5B_Reload.ogg",
			5,
			1,
			30
		};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		hiddenSelectionsTextures[] = {
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_GL_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_Cover_CTGCY.paa",
			"\optre_weapons\ar\data\smartlink_co.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_GLSight.paa",
			"\optre_weapons\ar\data\r_ar_ca.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_BR45: OPTRE_BR45_black
	{
		displayName="[EAGLE] BR-45 Service Rifle";
		baseWeapon="SEC_BR45";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
	class SEC_BR45GL: OPTRE_BR45GL_black
	{
		displayName="[EAGLE] BR-45 Service Rifle (UGL)";
		baseWeapon="SEC_BR45GL";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class SEC_SPLASER: OPTRE_M6GGNR
	{
		displayName="[EAGLE] W/AV M6X G/GNR";
		baseWeapon="SEC_SPLASER"
	};
	class SEC_M6G: OPTRE_M6G
	{
		displayName="[EAGLE] M6G PDWS";
		baseWeapon="SEC_M6G";
		reloadAction="SCI_FI_Pistol_Reload";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M6_Reload.ogg",
			2,
			1,
			30
		};
	};
	class SEC_M6C_Gen1: OPTRE_M6C
	{
		displayName="[EAGLE] M6C PDWS Gen 1";
		baseWeapon="SEC_M6C_Gen1";
		reloadAction="SCI_FI_Pistol_Reload";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M6_Reload.ogg",
			2,
			1,
			30
		};
	};
	class SEC_M6B: OPTRE_M6B
	{
		displayName="[EAGLE] M6B PDWS";
		baseWeapon="SEC_M6B";
		reloadAction="SCI_FI_Pistol_Reload";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M6_Reload.ogg",
			2,
			1,
			30
		};
	};
	class SEC_M6D: OPTRE_M6D
	{
		displayName="[EAGLE] M6D PDWS";
		baseWeapon="SEC_M6D";
		reloadAction="SCI_FI_Pistol_Reload";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\M6_Reload.ogg",
			2,
			1,
			30
		};
	};
	class SEC_M393: OPTRE_M393_DMR
	{
		displayName="[EAGLE] M395 Designated Marksman Rifle";
		baseWeapon="SEC_M393";
		reloadMagazineSound[]=
		{
			"wep_f_improve\animsounds\BR55_Reload.ogg",
			5,
			1,
			30
		};
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Body1_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Body2_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Barrel.paa"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
				"OPTRE_M7_Sight",
				"OPTRE_M12_Optic",
				"OPTRE_M12_Optic_Red",
				"OPTRE_M12_Optic_Green",
				"OPTRE_M6C_Scope",
				"OPTRE_M6G_Scope",
				"Optre_Recon_Sight",
				"Optre_Recon_Sight_Red",
				"Optre_Recon_Sight_Green",
				"Optre_Recon_Sight_Desert",
				"Optre_Recon_Sight_UNSC",
				"Optre_Recon_Sight_Snow",
				"OPTRE_BR45_Scope",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_Grey",
				"OPTRE_BMR_Scope",
				"OPTRE_M392_Scope",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M73_SmartLink",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_SmartLink",
				"OPTRE_MA5_BUIS",
				"Optre_Evo_Sight_Riser",
				"Optre_Evo_Sight",
				"optic_MRCO",
				"optic_Hamr",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Arco_blk_F",
				"optic_dms",
				"optic_Nightstalker",
				"optic_SOS"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_blk",
					"bipod_02_F_blk",
					"bipod_03_F_blk"
				};
			};
		};
	};
};
class CfgAmmo
{
	class OPTRE_FC_16x65mm_Slug;
	class SEC_16x65mm_Slug: OPTRE_FC_16x65mm_Slug
	{
		hit 							= 225;
		indirectHit 					= 100;
		indirectHitRange 				= 0.25;
		caliber 						= 100;
	};

	class G_40mm_HE;
	class SEC_16x65mm_HE: G_40mm_HE
	{
		ace_frag_skip = 1
		deflecting = 0
		explosionTime = -1
		indirectHitRange = 9;
	};
	class SEC_16x65mm_HEDP: SEC_16x65mm_HE
	{
		hit = 3000;
		indirectHit = 200;
		indirectHitRange = 5;
		multiSoundHit[] = { "soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2 };
		soundHit1[] = { "\A3\Sounds_F\weapons\Explosion\expl_big_1", 2.5118864, 1, 2400 };
		soundHit2[] = { "\A3\Sounds_F\weapons\Explosion\expl_big_2", 2.5118864, 1, 2400 };
		soundHit3[] = { "\A3\Sounds_F\weapons\Explosion\expl_big_3", 2.5118864, 1, 2400 };
		soundHit4[] = { "\A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.5118864, 1, 2400 };
		soundHit5[] = { "\A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.5118864, 1, 2400 };
		whistleDist = 24;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		FIR_AWS_Crater = 1;
	};
};
class CfgMagazines
{
	class OPTRE_1Rnd_SmokeRed_Grenade_shell;
    class OPTRE_FC_Railgun_Slug;
    class CA_Magazine;
	class OPTRE_200Rnd_127x99_M247H_Etilka_Ball;
    class CA_LauncherMagazine;
	class OPTRE_32Rnd_762x51_Mag;
	class OPTRE_32Rnd_762x51_Mag_Tracer;
	class OPTRE_32Rnd_762x51_Mag_Tracer_Yellow;

	class  SEC_Railgun_Smoke_Red: OPTRE_1Rnd_SmokeRed_Grenade_shell
	{
		displayname = "16x65mm 3rnd Impact Smoke (Red)";
		displayNameShort = "3rnd Impact Smoke (Red)";
		initspeed = 4900;
		count = 3;
		mass = 2;
	};
	class  SEC_Railgun_Smoke_Blue: SEC_Railgun_Smoke_Red
	{
		ammo = "OPTRE_40mm_SmokeBlue";
		displayname = "16x65mm 3rnd Impact Smoke (Blue)";
		displayNameShort = "3rnd Impact Smoke (Blue)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
	};
	class  SEC_Railgun_Smoke_Green: SEC_Railgun_Smoke_Red
	{
		ammo = "OPTRE_40mm_SmokeGreen";
		displayname = "16x65mm 3rnd Impact Smoke (Green)";
		displayNameShort = "3rnd Impact Smoke (Green)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};
	class  SEC_Railgun_Smoke_Yellow: SEC_Railgun_Smoke_Red
	{
		ammo = "OPTRE_40mm_SmokeYellow";
		displayname = "16x65mm 3rnd Impact Smoke (Yellow)";
		displayNameShort = "3rnd Impact Smoke (Yellow)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
	};
	class  SEC_Railgun_Smoke_Purple: SEC_Railgun_Smoke_Red
	{
		ammo = "OPTRE_40mm_SmokePurple";
		displayname = "16x65mm 3rnd Impact Smoke (Purple)";
		displayNameShort = "3rnd Impact Smoke (Purple)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
	};
	class  SEC_Railgun_Smoke_White: SEC_Railgun_Smoke_Red
	{
		ammo = "OPTRE_40mm_Smoke";
		displayname = "16x65mm 3rnd Impact Smoke (White)";
		displayNameShort = "3rnd Impact Smoke (White)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
	};
	class SEC_Railgun_Slugs: OPTRE_FC_Railgun_Slug
	{
		ammo = "SEC_16x65mm_Slug";
		displayname = "16x65mm 3rnd Slug";
		displayNameShort = "3rnd Slugs";
		count = 3;
	};
	class SEC_Railgun_HE_Mag: OPTRE_FC_Railgun_Slug
	{
		displayname = "16x65mm Experimental HE Slug";
		displayNameShort = "High Explosive";
		ammo = "SEC_16x65mm_HE";
		initspeed = 4900;
		count = 1;
		mass = 4;
	};
	class SEC_Railgun_HEDP_Mag: OPTRE_FC_Railgun_Slug
	{
		displayname = "16x65mm Experimental High-Yield HEDP Slug";
		displayNameShort = "High-Yield HEDP";
		ammo = "SEC_16x65mm_HEDP";
		initspeed = 4900;
		count = 1;
		mass = 80;
	};
	class SEC_600Rnd_127x99_M247H_Etilka_FMJ: OPTRE_200Rnd_127x99_M247H_Etilka_Ball
	{
		displayname = "600Rnd M247H Box (FMJ)";
		mass = 100;
		count = 600;
		displayNameShort = "12.7x99 FMJ";
		lastRoundsTracer = 600;
	};
	class SEC_36Rnd_762x51_Mag: OPTRE_32Rnd_762x51_Mag
	{
		displayname							= "36Rnd 7.62x51mm Magazine";
		count								= 36;
		initspeed							= 950;
		descriptionshort					= "36 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)";
		mass								= 12;
	};
	class SEC_36Rnd_762x51_Mag_Tracer: OPTRE_32Rnd_762x51_Mag_Tracer
	{
		displayname							= "36Rnd 7.62x51mm Magazine (Tracers)";
		count								= 36;
		descriptionshort					= "32 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)<br/>Tracer";
		mass								= 12;
	};
	class SEC_36Rnd_762x51_Mag_Tracer_Yellow: OPTRE_32Rnd_762x51_Mag_Tracer_Yellow
	{
		displayname							= "36Rnd 7.62x51mm Magazine (Tracers Yellow)";
		count								= 36;
		descriptionshort					= "36 Round Magazine<br/>7.62x51mm<br/>(Increased Muzzle Velocity)<br/>Tracer";
		mass								= 12;
	};
};
class cfgMagazineWells
{
	class OPTRE_Magwell_M247H_Etilka
	{
		OPTRE_127x99_200Rnd[]=
		{
			"OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
			"SEC_600Rnd_127x99_M247H_Etilka_FMJ"
		};
	};
	class 19_UNSC_M90_Magwell 
	{
		UNSC_8ga_12rnd[] = 
		{
			"12Rnd_8Gauge",
			"12Rnd_8Gauge_slug",
			"12Rnd_8Gauge_slug_tracer"
		};
	};
	class SEC_Magwell_MA5D 
	{
		SEC_762x51_36Rnd[] = 
		{
			"SEC_36Rnd_762x51_Mag",
			"SEC_36Rnd_762x51_Mag_Tracer",
			"SEC_36Rnd_762x51_Mag_Tracer_Yellow"
		};
	};
};