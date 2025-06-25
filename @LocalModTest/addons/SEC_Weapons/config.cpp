class CfgPatches
{
    class SEC_Overwrite
    {
        units[] = {};
        weapons[] = {"OPTRE_M45_Flashlight"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Weapons_F", "A3_Sounds_F", "A3_Sounds_F_Mark", "A3_CargoPoses_F", "A3_Anims_F", "19_UNSC_Weapons", "OPTRE_Weapons", "OPTRE_Weapons_MG", "OPTRE_Weapons_Pistol", "Misriah_Armory_Weapons", "OPTRE_Core", "NSWep_Weapons", "Casey_Halo_melee", "OPTRE_FC_Weapons"};
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
	class 19_UNSC_M392;
	class 19_UNSC_M6C;
	class 19_UNSC_M7;
	class 19_UNSC_M7_Side;
	class 19_UNSC_M90;
	class OPTRE_Commando;
	class NSWep_MA5B;
	class NSWep_BR55HBM1;
	class NSWep_XBR55;
	class NSWep_BR55HBM1LR;
	class NSWep_BR55HBM1CQC;
	class NSWep_BR55HBM1GL;
	class NSWep_MA5BGL;
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
	class NSWep_MA5K;
	class ItemInfo;
	class OPTRE_M247A1;
	class OPTRE_M247A1_Stripped;
	class OPTRE_M250;

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
	class SEC_M6D_Carbine: OPTRE_M6D_Carbine_Black_F
	{
		displayName="[EAGLE] M6D Carbine"
		baseWeapon="SEC_M6D_Carbine"
	};
	class SEC_M6DS_Carbine_Foregrip: OPTRE_M6DS_Carbine_Foregrip_Black_F
	{
		displayName="[EAGLE] M6DS Carbine (Foregrip)"
		baseWeapon="SEC_M6DS_Carbine_Foregrip"
	};
	class SEC_M99A2S3: OPTRE_M99A2S3
	{
		displayName="[EAGLE] M99A2S3 SASR"
		baseWeapon="SEC_M99A2S3";

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
		reloadAction="SCI_FI_Sniperlike_Reload";
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
		reloadAction = "WBK_SRS99C_Reload";
	};
	class SEC_SRS99D: NSWep_SRS99DS2
	{
		displayName="[EAGLE] SRS99-DS2 Sniper Rifle"
		baseWeapon="SEC_SRS99D";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\srs99c.paa";
		reloadAction = "WBK_SRS99C_Reload";
	};
	class SEC_SRS99AM: NSWep_SRS99AM
	{
		displayName="[EAGLE] SRS99-AM Sniper Rifle"
		baseWeapon="SEC_SRS99AM";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\srs99c.paa";
		reloadAction = "WBK_SRS99C_Reload";
	};
	class OPTRE_M739_SAW_Black_F;
	class OPTRE_M739_SAW_Foregrip_Black_F;
	class SEC_M739_SAW: OPTRE_M739_SAW_Black_F
	{
		displayName="[EAGLE] M739 SAW";
		baseWeapon="SEC_M739_SAW";
	};
	class SEC_M739_SAWFG: OPTRE_M739_SAW_Foregrip_Black_F
	{
		displayName="[EAGLE] M739 SAW (Foregrip)";
		baseWeapon="SEC_M739_SAWFG";
	};
	class SEC_BR75: OPTRE_BR55HB
	{
		displayName="[EAGLE] BR-75 Service Rifle";
		baseWeapon="SEC_BR75";

		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_BR55_Body1_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_BR55_Body2_CTGCY.paa"
		};
	};
	class SEC_M58SAR: OPTRE_M58S
	{
		displayName="[EAGLE] M58S Special Applications Rifle";
		baseWeapon="SEC_M58SAR";
	};
	class SEC_M295_BMR: OPTRE_M295_BMR
	{
		displayName="[EAGLE] M295 BMR";
		baseWeapon="SEC_M295_BMR";
	};
	class SEC_MA2B_AR: MA_MA2B_AR
	{
		displayName="[EAGLE] MA2B ICWS";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA2B_AR";
		picture="SEC_Weapons\data\weaponIcons\ma2b_icon.paa";
		reloadAction="GestureReloadBR55";
	};
	class SEC_MA5B_GEN1: NSWep_MA5B
	{
		displayName="[EAGLE] MA5B Gen 1 ICWS";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA5B_GEN1";
		reloadAction= "GestureReloadMA5";
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
	class SEC_MA5B_gl: NSWep_MA5BGL
	{
		displayName="[EAGLE] MA5B Gen 1 ICWS (UGL)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\AssaultRifles\MA5C_icon.paa";
		baseWeapon="SEC_MA5B_gl";
		reloadAction= "GestureReloadMA5";
	};
	class SEC_BR55GL: NSWep_BR55HBM1GL
	{
		displayName="[EAGLE] BR-55HB Service Rifle (UGL)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55GL";
		modes[]= {
			"Single","Burst"
		};
		reloadAction= "GestureReloadBR55";
	};
	class SEC_BR55: NSWep_XBR55
	{
		displayName="[EAGLE] BR-55 Service Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55";
		reloadAction= "GestureReloadBR55";
		modes[]= {
			"Single","Burst"
		};
	};
	class SEC_BR55CQC: NSWep_BR55HBM1CQC
	{
		displayName="[EAGLE] BR-55 Carbine";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55CQC";
		reloadAction= "GestureReloadBR55";
	};
	class SEC_BR55MKM: NSWep_BR55HBM1LR
	{
		displayName="[EAGLE] BR-55 Marksman Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55MKM";
		reloadAction= "GestureReloadBR55";
		modes[]= {
			"Single","Burst"
		};
	};
	class SEC_BR55HB: NSWep_BR55HBM1
	{
		displayName="[EAGLE] BR-55HB Service Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\BR55_icon.paa";
		baseWeapon="SEC_BR55HB";
		reloadAction= "GestureReloadBR55";
		modes[]= {
			"Single","Burst"
		};
	};
	class SEC_M392_Gen1: 19_UNSC_M392
	{
		displayName="[EAGLE] M392 Designated Marksman Rifle";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\BattleRifles\m392_icon.paa";
		baseWeapon="SEC_M392_Gen1";
	};
	class SEC_M6C_Gen2: 19_UNSC_M6C
	{
		displayName="[EAGLE] M6C PDWS (Gen2)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\Pistols\m6b_icon.paa";
		baseWeapon="SEC_M6C_Gen2"
	};
	class SEC_M247A1: OPTRE_M247A1
	{
		baseWeapon="SEC_M247A1";
		displayName="[EAGLE] M247A1 Medium Machinegun";
		magazines[] 			= {"SEC_200Rnd_338SP_M247A1_Box"};
		magazineWell[] = {"SEC_Magwell_M247A1_LMG"};
	};
	class SEC_M247A1_Stripped: OPTRE_M247A1_Stripped
	{
		baseWeapon="SEC_M247A1_Stripped";
		displayName="[EAGLE] M247E3 Medium Machinegun";
		magazines[] 			= {"SEC_200Rnd_338SP_M247A1_Box"};
		magazineWell[] = {"SEC_Magwell_M247A1_LMG"};
	};
	class SEC_M250: OPTRE_M250
	{
		baseWeapon="SEC_M250";
		displayName="[EAGLE] M250 Heavy Machinegun";
	};
	class SEC_M7_Gen1: OPTRE_M7
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Gen1)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Gen1";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M7_Body_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M7_Magazine_CTGCY.paa"
		};
	};
	class SEC_M7_Folded: OPTRE_M7_Folded
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Folded)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Folded";
	};
	class SEC_BallisticShield_M7: OPTRE_M7_Riot_Shield
	{
		displayName="[EAGLE] M388/R Ballistic Shield (M7/Caseless)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_BallisticShield_M7";
		picture="SEC_Weapons\data\weaponIcons\m388rsmg.paa";
	};
	class SEC_M7_Gen2: 19_UNSC_M7
	{
		displayName="[EAGLE] M7/Caseless Submachine Gun (Gen2)";
		pictureMjolnirHud = "OPTRE_Suit_Scripts\textures\weaponIcons\SubmachineGuns\m7_icon.paa";
		baseWeapon="SEC_M7_Gen2";
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
	};
	class SEC_M73: OPTRE_M73
	{
		displayName="[EAGLE] M73 Light Machine Gun";
		baseWeapon="SEC_M73";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M73_Body_CTGCY.paa"
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
	};
	class SEC_MA5B_GEN2: OPTRE_MA5B
	{
		displayName="[EAGLE] MA5B ICWS (Gen2)";
		baseWeapon="SEC_MA5B_GEN2";

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
	};
	class SEC_MA5D: OPTRE_MA5C
	{
		displayName="[EAGLE] MA5D ICWS";
		baseWeapon="SEC_MA5D";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};

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
	};
	class SEC_MA5KG1: NSWep_MA5K
	{
		displayName="[EAGLE] MA5K Gen 1 Carbine";
		baseWeapon="SEC_MA5KG1";
		reloadAction="GestureReloadMA5";
	};
	class SEC_MA5K: OPTRE_MA5K
	{
		displayName="[EAGLE] MA5K Gen 2 Carbine";
		baseWeapon="SEC_MA5K";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		magazineWell[] = {"SEC_Magwell_MA5D"};

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
	class SEC_MA40: OPTRE_MA37B
	{
		displayName="[EAGLE] MA40 ICWS";
		baseWeapon="SEC_MA40";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};

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
	};
	class SEC_MA40A: OPTRE_MA32B
	{
		displayName="[EAGLE] MA40A ICWS";
		baseWeapon="SEC_MA40A";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};

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
	};
	class SEC_MA40GL: OPTRE_MA37BGL
	{
		displayName="[EAGLE] MA40 ICWS (UGL)";
		baseWeapon="SEC_MA40GL";
		magazines[] 			= {"SEC_36Rnd_762x51_Mag"};
		magazineWell[] = {"SEC_Magwell_MA5D"};
		hiddenSelectionsTextures[] = {
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_GL_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_Cover_CTGCY.paa",
			"\optre_weapons\ar\data\smartlink_co.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_MA3_GLSight.paa",
			"\optre_weapons\ar\data\r_ar_ca.paa"
		};
	};
	class SEC_BR45: OPTRE_BR45_black
	{
		displayName="[EAGLE] BR-45 Service Rifle";
		baseWeapon="SEC_BR45";
	};
	class SEC_BR45GL: OPTRE_BR45GL_black
	{
		displayName="[EAGLE] BR-45 Service Rifle (UGL)";
		baseWeapon="SEC_BR45GL";
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
	};
	class SEC_M6C_Gen1: OPTRE_M6C
	{
		displayName="[EAGLE] M6C PDWS Gen 1";
		baseWeapon="SEC_M6C_Gen1";
		reloadAction="SCI_FI_Pistol_Reload";
	};
	class SEC_M6B: OPTRE_M6B
	{
		displayName="[EAGLE] M6B PDWS";
		baseWeapon="SEC_M6B";
		reloadAction="SCI_FI_Pistol_Reload";
	};
	class SEC_M6D: OPTRE_M6D
	{
		displayName="[EAGLE] M6D PDWS";
		baseWeapon="SEC_M6D";
		reloadAction="SCI_FI_Pistol_Reload";
	};
	class SEC_M393: OPTRE_M393_DMR
	{
		displayName="[EAGLE] M395 Designated Marksman Rifle";
		baseWeapon="SEC_M393";
		hiddenSelectionsTextures[]=
		{
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Body1_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Body2_CTGCY.paa",
			"\SEC_Weapons\data\GunTextures\CTGCY_M395_Barrel.paa"
		};
	};
};
class CfgAmmo
{
	class OPTRE_FC_16x65mm_Slug;
	class OPTRE_B_762x51_Ball;
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
	class OPTRE_B_338_SP: OPTRE_B_762x51_Ball {
    caliber = 2;
    hit = 22;
    typicalSpeed = 1023;
    cartridge = "FxCartridge_338_Ball";
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
  };

  class OPTRE_B_338_VLD: OPTRE_B_338_SP {
    airFriction = -0.00036;
    caliber = 3;
    coefGravity = 0.7;
    hit = 20;
    sideAirFriction = 0.5;
    typicalSpeed = 1000;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
  };

  class OPTRE_B_338_AP: OPTRE_B_338_SP {
    caliber = 3.5;
    hit = 18;
    typicalSpeed = 1040;
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
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
	class OPTRE_200Rnd_762x51_M118_M247A1_Box;
	class OPTRE_400Rnd_762x51_M118_M247A1_Box;

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
	class OPTRE_50Rnd_127x99_M250_Box;
	class SEC_300Rnd_127x99_M250_Box: OPTRE_50Rnd_127x99_M250_Box
	{
		displayname = "300Rnd M250 Box (FMJ/T)";
		mass = 100;
		count = 300;
		displayNameShort = "12.7x51 FMJ";
		lastRoundsTracer = 300;
	};
	class SEC_200Rnd_338SP_M247A1_Box: OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		displayName="SP .338LM 200Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: SP .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 200<br />Used in: M247A1";
		displaynameshort="SP Tracer";
		ammo="OPTRE_B_338_SP";
	};
	class SEC_400Rnd_338SP_M247A1_Box: SEC_200Rnd_338SP_M247A1_Box
	{
		displayName="SP .338LM 400Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: SP .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 400<br />Used in: M247A1";
		displaynameshort="SP Tracer";
		ammo="OPTRE_B_338_SP";
	};
	class SEC_200Rnd_338VLD_M247A1_Box: OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		displayName="VLD .338LM 200Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: VLD .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 200<br />Used in: M247A1";
		displaynameshort="VLD Tracer";
		ammo="OPTRE_B_338_VLD";
	};
	class SEC_400Rnd_338VLD_M247A1_Box: SEC_200Rnd_338VLD_M247A1_Box
	{
		displayName="VLD .338LM 400Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: VLD .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 400<br />Used in: M247A1";
		displaynameshort="VLD Tracer";
		ammo="OPTRE_B_338_VLD";
	};
	class SEC_200Rnd_338AP_M247A1_Box: OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		displayName="AP .338LM 200Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: AP .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 200<br />Used in: M247A1";
		displaynameshort="AP Tracer";
		ammo="OPTRE_B_338_AP";
	};
	class SEC_400Rnd_338AP_M247A1_Box: SEC_200Rnd_338AP_M247A1_Box
	{
		displayName="AP .338LM 400Rnd Box Tracer (Yellow)";
		descriptionShort="Caliber: AP .338LM Tracer - Yellow<br />Tracers Every 4<br />Rounds: 400<br />Used in: M247A1";
		displaynameshort="AP Tracer";
		ammo="OPTRE_B_338_AP";
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
	class SEC_Magwell_M247A1_LMG
	{
		SEC_338LM_200Rnd[]=
		{
			"SEC_200Rnd_338SP_M247A1_Box",
			"SEC_200Rnd_338VLD_M247A1_Box",
			"SEC_200Rnd_338AP_M247A1_Box"
		};
		SEC_338LM_400Rnd[]=
		{
			"SEC_400Rnd_338SP_M247A1_Box",
			"SEC_400Rnd_338VLD_M247A1_Box",
			"SEC_400Rnd_338AP_M247A1_Box"
		};
	};
	class OPTRE_Magwell_M250_LMG
	{
		OPTRE_127x99_60Rnd[]=
		{
			"OPTRE_50Rnd_127x99_M250_Box",
			"SEC_300Rnd_127x99_M250_Box"
		};
	};
};
class CfgSoundSets
{
	class Mk200_Shot_SoundSet;
	class OPTRE_M739_SAW_Shot_SoundSet: Mk200_Shot_SoundSet
	{
		soundShaders[]=
		{
			"SEC_M739_SAW_Closure_SoundShader",
			"SEC_M739_SAW_closeShot_SoundShader",
			"SEC_M739_SAW_midShot_SoundShader",
			"SEC_M739_SAW_distShot_SoundShader"
		};
	};
};
	class CfgSoundShaders
{
	class Mk200_Closure_SoundShader;
	class SEC_M739_SAW_Closure_SoundShader: Mk200_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_1.ogg",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_2.ogg",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_3.ogg",
				1
			}
		};
		volume=0.029999999;
	};
	class Mk200_closeShot_SoundShader;
	class SEC_M739_SAW_closeShot_SoundShader: Mk200_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_1.ogg",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_2.ogg",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_3.ogg",
				1
			}
		};
	};
	class Mk200_midShot_SoundShader;
	class SEC_M739_SAW_midShot_SoundShader: Mk200_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Med_1.wav",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Med_2.wav",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Med_3.wav",
				1
			}
		};
	};
	class Mk200_distShot_SoundShader;
	class SEC_M739_SAW_distShot_SoundShader: Mk200_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Very_Far_1.wav",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Very_Far_2.wav",
				1
			},
			
			{
				"SEC_Weapons\data\sounds\H5_DMR_Very_Far_3.wav",
				1
			}
		};
	};
};
