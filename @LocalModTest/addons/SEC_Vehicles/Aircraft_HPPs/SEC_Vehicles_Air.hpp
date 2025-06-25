////// Inherited Classes //////

	class B_Heli_Light_01_F;
	class B_Heli_Light_01_dynamicLoadout_F;
	class B_CTRG_Heli_Transport_01_tropic_F;
	class B_Heli_Attack_01_pylons_dynamicLoadout_F;
	class B_Heli_Transport_01_pylons_F;
	class B_Heli_Attack_01_Dynamicloadout_F;

	class B_T_VTOL_01_armed_F;
	class OPTRE_VTOLI_01;

	class OPTRE_gladius_01;
	class VES_VAF19;

	class OPTRE_YSS_1000_A_VTOL_Single;
	class OPTRE_Pelican_armed_SOCOM;
	class VES_D77HTCI_A;
	class Splits_UNSC_D77_TC_Pelican;
	class OPTRE_UNSC_UH_144_Falcon_DAP;
	class OPTRE_UNSC_UH_144S_Falcon_DAP;
	class OPTRE_UNSC_falcon_armed;
	class VES_AV22_Sparrowhawk;
	class VES_AV22C_Sparrowhawk;
	class VES_AV22A_Sparrowhawk;
	class VES_AV22B_Sparrowhawk;
	class TCF_UNSC_Nightingale;
	class VES_AV14_AGM;

	class ViewPilot;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;

////// Vanilla Helicopters //////

	class SEC_B_Heli_Light_01_F: B_Heli_Light_01_F
	{
		armor=80;
		displayName="[SEC] TV-06 Stork (Transport)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		memoryPointDriverOptics="light_dir";
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		#include "Shoebill_HMD.hpp"
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Stork\SEC_Heli_Light_01_ext_CO.paa"
		};
	};
	class SEC_B_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F
	{
		armor=80;
		displayName="[SEC] AV-05 Shoebill (Assault)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		memoryPointDriverOptics="light_dir";
		weapons[]=
		{
			"M134_minigun",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Belt",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		#include "Shoebill_HMD.hpp"
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Stork\SEC_Heli_Light_01_ext_CO.paa"
		};
	};
	class SEC_B_CTRG_Heli_Transport_01_tropic_F: B_CTRG_Heli_Transport_01_tropic_F 
	{
		armor=100;
		displayName="[SEC] UH-054 Crow";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Crow\SEC_Heli_Transport_01_ext01_CO.paa",
			"SEC_Vehicles\data\Crow\SEC_Heli_Transport_01_ext02_CO.paa",
		};
	};
	class SEC_B_Heli_Transport_01_pylons_F: B_Heli_Transport_01_pylons_F
	{
		armor=100;
		displayName="[SEC] UH-054 Crow (DAP)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Beta\Heli_Transport_01\Data\UI\Heli_Transport_01_pylons_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_FUELTANK_HELI",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR",
							"DAR",
							"DAGRM"
						};
						priority=2;
						attachment="PylonRack_12Rnd_PGM_missiles";
						maxweight=1200;
						UIposition[]={0.625,0.41999999};
						bay=-1;
					};
					class pylon2: pylon1
					{
						hardpoints[]+=
						{
							"M134"
						};
						UIposition[]={0.55500001,0.37};
						priority=1;
					};
					class pylon3: pylon2
					{
						UIposition[]={0.11,0.37};
						mirroredMissilePos=2;
					};
					class pylon4: pylon1
					{
						UIposition[]={0.039999999,0.41999999};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_12Rnd_PGM_missiles",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonRack_12Rnd_PGM_missiles"
						};
					};
					class LongRange
					{
						displayName="$STR_A3_TransportPylonsComponent_Presets_LongRange0";
						attachment[]=
						{
							"PylonFuelTank_UH80",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonFuelTank_UH80"
						};
					};
				};
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Crow\SEC_Heli_Transport_01_ext01_CO.paa",
			"SEC_Vehicles\data\Crow\SEC_Heli_Transport_01_ext02_CO.paa",
			"SEC_Vehicles\data\Crow\SEC_Heli_Transport_01_ext01_add_co.paa",
		};
	};
	class SEC_B_Heli_Attack_01_Dynamicloadout_F: B_Heli_Attack_01_Dynamicloadout_F // Add laser to Pilot Cam.
	{
		armor=100;
		displayName="[SEC] RAH-94 Raven";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};
	class SEC_B_Heli_Attack_01_pylons_dynamicLoadout_F: B_Heli_Attack_01_pylons_dynamicLoadout_F
	{
		armor=100;
		displayName="[SEC] RAH-94 Raven (DAP)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};

////// Vanilla VTOLs //////

	class SEC_B_T_VTOL_01_armed_F: B_T_VTOL_01_armed_F
	{
		displayName="[SEC] D-81 Harpy";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Vtol";
	};
	class SEC_OPTRE_VTOLI_01: OPTRE_VTOLI_01 // Make turret better.
	{
		armor=350;
		displayName="[SEC] AVD-99IT Wyvern";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Vtol";
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
	};

////// Vanilla Jets //////

	class SEC_Gladius: OPTRE_gladius_01
	{
		armor=200;
		displayName="[SEC] GA-TL3 Gladius";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Fixed";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						attachment="PylonRack_1Rnd_Missile_AA_04_F";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="PylonRack_7Rnd_Rocket_04_HE_F";
						maxweight=500;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="PylonRack_3Rnd_Missile_AGM_02_F";
						maxweight=1050;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.2};
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON",
							"CARPET_BOMB_PYLON"
						};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=1200;
						UIposition[]={0.33000001,0.25};
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON",
							"CARPET_BOMB_PYLON"
						};
					};
					class Pylons6: Pylons5
					{
						priority=6;
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						priority=7;
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						attachment="PylonRack_7Rnd_Rocket_04_AP_F";
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
			};
		};
	};
	class SEC_VAF19 : VES_VAF19 // This has been turned into a VTOL.
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC] S-14 Baselard (WIP)";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Fixed";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
	};

////// Pelicans //////

	class SEC_Armed_SOCOM: OPTRE_Pelican_armed_SOCOM
	{
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC] D77S-SOI Pelican";
		memoryPointDriverOptics="machinegun_eject_dir";
		forceInGarage=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=18500;
		armor=310;
		canFloat=1;
		maxFordingDepth=5;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
				hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\SOCOM_Pelican\Armed_SOCOM_CO.paa",
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				canEject=1;
				body="mainTurret";
				gun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				proxyindex=1;
				isCopilot=1;
				gunnerName="Gunner";
				primaryGunner=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				weapons[]=
				{
					"CMFlareLauncher",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"168Rnd_CMFlare_Chaff_Magazine",
					"Laserbatteries"
				};
				minElev=-90;
				maxElev=30;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				stabilizedInAxes=3;
				startEngine=0;
				class Viewoptics
				{
					minAngleX=-80;
					maxAngleX=80;
					initAngleX=0;
					minAngleY=-80;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						directionStabilized=1;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};				
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 50)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
			class PelLift_LoadPodMenu
			{
				userActionID=9;
				displayName="Load Supply Pods";
				displayNameDefault="Load Supply Pods";
				textToolTip="Load Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID=8;
				displayName="Detach Individual Supply Pod Menu";
				displayNameDefault="Detach Individual Supply Pod Menu";
				textToolTip="Detach Individual Supply Pod Menu";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		};
	};
	class SEC_OLDTRE_Pelican: VES_D77HTCI_A // Currently used as a Stealth Pelican.
	{
		armor=300;
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC] D77H-TCI/AV Pelican";
		memoryPointDriverOptics="machinegun_eject_dir";
		visualTargetSize=0.5; // detected at 50% visual range.
		radarTargetSize=0.15; // detected at 15% radar range.
		irTargetSize=0.25; // detected at 25% IR sensor range.
		OPTRE_velocityMult=1.3;
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\pelican\SEC_OldPelican_Exterior_CO.paa",
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=560;
						hardpoints[]=
						{
							"SEC_Hardpoint_Stealth_Outer"
						};
						attachment="OPTRE_32Rnd_Anvil1_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.5};
						turret[]={};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos=1;
						UIposition[]={0.1,0.1};
					};
					class pylons3: pylons1
					{
						attachment="SEC_PylonRack_19Rnd_Stiletto";
						priority=2;
						hardpoints[]=
						{
							"SEC_Hardpoint_Stealth"
						};
						UIposition[]={0.25,0.44};
						turret[]={0};
					};
					class pylons4: pylons1
					{
						mirroredMissilePos=3;
						attachment="SEC_PylonRack_19Rnd_Stiletto";
						priority=2;
						hardpoints[]=
						{
							"SEC_Hardpoint_Stealth"
						};
						UIposition[]={0.25,0.16};
						turret[]={0};
					};
					class pylonsNoseCannon
					{
						maxweight=1000;
						hardpoints[]=
						{
							"SEC_Stealth_Turret"
						};
						attachment="SEC_Pelican_Sniper";
						bay=-1;
						priority=2;
						UIposition[]={0.2,0.34};
						turret[]={0};
					};
				};
			};
		};	
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 50)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
			class PelLift_LoadPodMenu
			{
				userActionID=9;
				displayName="Load Supply Pods";
				displayNameDefault="Load Supply Pods";
				textToolTip="Load Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID=8;
				displayName="Detach Individual Supply Pod Menu";
				displayNameDefault="Detach Individual Supply Pod Menu";
				textToolTip="Detach Individual Supply Pod Menu";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		};
	};
	class SEC_D77_TC_Pelican : Splits_UNSC_D77_TC_Pelican // 19th's Pelican
	{
		scope=2;
		scopeCurator=2;
		armor=350;
		displayName="[SEC]D77-TC Pelican";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		driverAction="Plane_Fighter_03_pilot";
		driverInAction="Plane_Fighter_03_pilot";
		gunnerAction = "Plane_Fighter_03_pilot";
		gunnerInAction = "Plane_Fighter_03_pilot";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=167;
		OPTRE_velocityMult=1;
		#include "19th_Turret_Stabilization.hpp"
		hiddenSelectionsTextures[] =
		{ 
			"SEC_Vehicles\data\pelican\sec_pelican_body_co.paa",
			"SEC_Vehicles\data\pelican\SEC_Pelican_wings_and_gear_CO.paa",
			"SEC_Vehicles\data\pelican\SEC_Pelican_weaponry_CO.paa"
		};
	};	

////// Nightingale //////

	class SEC_Nightingale : TCF_UNSC_Nightingale
	{
		armor=200;
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC] EV-44 Nightingale";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
			class PelLift_LoadVehicle
			{
				userActionID=6;
				displayName="Load Vehicle";
				displayNameDefault="Load Vehicle";
				textToolTip="Load Vehicle";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement="0 = [this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID=9;
				displayName="Load Supply Pods";
				displayNameDefault="Load Supply Pods";
				textToolTip="Load Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=15;
				priority=2;
				onlyForPlayer=0;
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID=7;
				displayName="Unload Vehicle / Supply Pods";
				displayNameDefault="Unload Vehicle / Supply Pods";
				textToolTip="Unload Vehicle / Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID=8;
				displayName="Detach Individual Supply Pod Menu";
				displayNameDefault="Detach Individual Supply Pod Menu";
				textToolTip="Detach Individual Supply Pod Menu";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID=50;
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				textToolTip="Open Ramp";
				position="cargo_door_handle";
				showWindow=0;
				radius=100000;
				priority=4;
				onlyForPlayer=0;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""cargoDoor_1"",1]";
				animPeriod=5;
			};
			class RampClose: RampOpen
			{
				userActionID=51;
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				textToolTip="Close Ramp";
				priority=4;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""cargoDoor_1"",0]";
				animPeriod=5;
			};
		};
	};

////// Hornet //////

	class SEC_AV14_AGM : VES_AV14_AGM
	{
		armor=150
		scope=2;
		scopeCurator=2;
		displayName="[SEC]AV-14 Hornet";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		magazines[]={"OPTRE_2000Rnd_20mm_HEIAP","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries","OPTRE_12Rnd_C2GMLS_missiles","OPTRE_12Rnd_C2GMLS_missiles"};
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=2.2;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=2;
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Hornet\SEC_V_FZ_HORNET_URB_CO.paa"
		};
	};

////// Falcons //////

	class SEC_UH144Falcon : OPTRE_UNSC_UH_144_Falcon_DAP // Unarmed 
	{
		armor=100;
		scope=2;
		scopeCurator=2;
		displayName="[SEC]UH-144 Falcon";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_I_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_I_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_I_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_I_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_I_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_I_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_I_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_I_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_I_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_I_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_co.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Decal_ca.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
		class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
		class EventHandlers;
	};
	class SEC_UH144AFalcon: OPTRE_UNSC_falcon_armed // Has main gun
	{
		armor=100;
		scope=2;
		scopeCurator=2;
		displayName="[SEC]UH-144A Falcon";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		magazines[] = {"OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_I_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_I_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_I_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_I_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_I_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_I_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_I_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_I_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_I_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_I_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_co.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Decal_ca.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
		class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
		class EventHandlers;
	};
	class SEC_UH144SFalcon: OPTRE_UNSC_UH_144S_Falcon_DAP // Has turrets
	{
		armor=100;
		scope=2;
		scopeCurator=2;
		displayName="[SEC]UH-144S Falcon";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=112;
		OPTRE_velocityMult=1;
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DES_I_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_WDL_I_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_JUN_I_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_URB_I_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_I_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_FRO_I_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_TUN_I_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_DUN_I_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_CLS_I_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_M_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_A_CO.paa",
					"V_FZ_Air_Vehicles\data\Falcon\V_UH144_OD3_I_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_co.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Decal_ca.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
		class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
		class EventHandlers;
	};

////// SparrowHawks //////

	class SEC_AV22_Sparrowhawk : VES_AV22_Sparrowhawk
	{
		armor=160;
		scope=2;
		scopeCurator=2;
		displayName="[SEC] AV-22B Sparrowhawk (M9109, M230)";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=167;
		OPTRE_velocityMult=1;
		memoryPointDriverOptics="machinegun_end";
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B1_CO.paa",
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-90;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
	};
	class SEC_AV22C_Sparrowhawk : VES_AV22C_Sparrowhawk
	{
		armor=160;
		scope=2;
		scopeCurator=2;
		displayName="[SEC]AV-22 Sparrowhawk [GAU-23 / M230]";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=167;
		OPTRE_velocityMult=1;
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B1_CO.paa",
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa"
		};
	};
	class SEC_AV22A_Sparrowhawk : VES_AV22A_Sparrowhawk // Scope=0 for now.
	{
		scope=0;
		scopeCurator=0;
		displayName="[SEC/FTZ]AV-22A Sparrowhawk [M9109 / M6]";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=167;
		OPTRE_velocityMult=1;
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B1_CO.paa",
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa"
		};
	};
	class SEC_AV22B_Sparrowhawk : VES_AV22B_Sparrowhawk // Scope=0 for now.
	{
		scope=0;
		scopeCurator=0;
		displayName="[SEC/FTZ]AV-22B Sparrowhawk [GAU-23 / M6]";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		OPTRE_canThrust = 1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=167;
		OPTRE_velocityMult=1;
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B1_CO.paa",
			"SEC_Vehicles\data\Sparrowhawk\SEC_V_SPARROW_URB_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_CA.paa"
		};
	};

////// Sabre //////

	class SEC_Pegasus_Guardian: OPTRE_YSS_1000_A_VTOL_Single
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[SEC] S-845 Pegasus (Guardian)";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Fixed";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		hiddenSelectionsTextures[]=
    	{
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat1_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat2_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat3_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat4_co.paa",
    	    "OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat5_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat6_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat7_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat8_co.paa"
    	};
	    hiddenSelectionsMaterials[]=
		{	
			"SEC_Vehicles\data\sabre\OPTRE_Sabre_Mat1.rvmat",	
			"SEC_Vehicles\data\sabre\OPTRE_Sabre_Mat2.rvmat",
			"SEC_Vehicles\data\sabre\OPTRE_Sabre_Mat3.rvmat",
		};
		airBrakeFrictionCoef=4.5;
		class Wheels
		{
			class Wheel_1
			{
				steering=0;
				boneName="Wheel_1";
				center="Wheel_1_center";
				boundary="Wheel_1_rim";
				suspForceAppPointOffset="Wheel_1_center";
				tireForceAppPointOffset="Wheel_1_center";
				width=0.2;
				mass=100;
				MOI=1;
				dampingRate=0.1;
				dampingRateDamaged=10;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000000;
				maxHandBrakeTorque=45000000;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.075000003;
				maxDroop=0.090000004;
				longitudinalStiffnessPerUnitGravity=100;
				latStiffX=2;
				latStiffY=3;
				frictionVsSlipGraph[]=
				{
					{0,0.5},
					{0.2,0.9},
					{0.6,0.7}
				};
				sprungMass="58300 / 3";
				springStrength=971666.69;
				springDamperRate=10000;
			};
			class Wheel_2: Wheel_1
			{
				MOI=0.1;
				steering=1;
				maxHandBrakeTorque=0;
				maxBrakeTorque=10000;
				boneName="Wheel_2";
				center="Wheel_2_center";
				boundary="Wheel_2_rim";
				side="left";
				suspForceAppPointOffset="wheel_2_center";
				tireForceAppPointOffset="Wheel_2_center";
			};
			class Wheel_3: Wheel_1
			{
				boneName="wheel_3";
				side="right";
				center="wheel_3_center";
				boundary="wheel_3_rim";
				suspForceAppPointOffset="wheel_3_center";
				tireForceAppPointOffset="wheel_3_center";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=90;
						maxTrackableSpeed=400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=60;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
		};
		class MFD
		{
			class FA18_MFD_HORIZON
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0.1;
				borderRight=0.1;
				borderTop=0.1;
				borderBottom=0.1;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.40000001};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={0.77399999,0.67000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=1;
					condition="on";
					enableParallax=0;
					class Horizont
					{
						clipTL[]={0.255,0.105};
						clipBR[]={0.84500003,0.72500002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.1,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									
									{
										"LevelM5",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.19,0},
										1
									},
									
									{
										"LevelM5",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.16,0},
										1
									},
									
									{
										"LevelM5",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.13,0},
										1
									},
									
									{
										"LevelM5",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.07,0},
										1
									},
									
									{
										"LevelM5",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM5",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.19,0},
										1
									},
									
									{
										"LevelM5",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.16,0},
										1
									},
									
									{
										"LevelM5",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.13,0},
										1
									},
									
									{
										"LevelM5",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.07,0},
										1
									},
									
									{
										"LevelM5",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_5_R
							{
								type="text";
								source="static";
								text=-5;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_5_R
							{
								type="text";
								source="static";
								text="5";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									
									{
										"LevelM10",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.19,0},
										1
									},
									
									{
										"LevelM10",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.16,0},
										1
									},
									
									{
										"LevelM10",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.13,0},
										1
									},
									
									{
										"LevelM10",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.07,0},
										1
									},
									
									{
										"LevelM10",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM10",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.19,0},
										1
									},
									
									{
										"LevelM10",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.16,0},
										1
									},
									
									{
										"LevelM10",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.13,0},
										1
									},
									
									{
										"LevelM10",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.07,0},
										1
									},
									
									{
										"LevelM10",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_10_R
							{
								type="text";
								source="static";
								text=-10;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_10_R
							{
								type="text";
								source="static";
								text="10";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									
									{
										"LevelM15",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.19,0},
										1
									},
									
									{
										"LevelM15",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.16,0},
										1
									},
									
									{
										"LevelM15",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.13,0},
										1
									},
									
									{
										"LevelM15",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.07,0},
										1
									},
									
									{
										"LevelM15",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM15",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.19,0},
										1
									},
									
									{
										"LevelM15",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.16,0},
										1
									},
									
									{
										"LevelM15",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.13,0},
										1
									},
									
									{
										"LevelM15",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.07,0},
										1
									},
									
									{
										"LevelM15",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_15_R
							{
								type="text";
								source="static";
								text=-15;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_15_R
							{
								type="text";
								source="static";
								text="15";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									
									{
										"LevelM20",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.19,0},
										1
									},
									
									{
										"LevelM20",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.16,0},
										1
									},
									
									{
										"LevelM20",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.13,0},
										1
									},
									
									{
										"LevelM20",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.07,0},
										1
									},
									
									{
										"LevelM20",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM20",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.19,0},
										1
									},
									
									{
										"LevelM20",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.16,0},
										1
									},
									
									{
										"LevelM20",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.13,0},
										1
									},
									
									{
										"LevelM20",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.07,0},
										1
									},
									
									{
										"LevelM20",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_20_R
							{
								type="text";
								source="static";
								text=-20;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_20_R
							{
								type="text";
								source="static";
								text="20";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									
									{
										"LevelM25",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.19,0},
										1
									},
									
									{
										"LevelM25",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.16,0},
										1
									},
									
									{
										"LevelM25",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.13,0},
										1
									},
									
									{
										"LevelM25",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.07,0},
										1
									},
									
									{
										"LevelM25",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM25",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.19,0},
										1
									},
									
									{
										"LevelM25",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.16,0},
										1
									},
									
									{
										"LevelM25",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.13,0},
										1
									},
									
									{
										"LevelM25",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.07,0},
										1
									},
									
									{
										"LevelM25",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_25_R
							{
								type="text";
								source="static";
								text=-25;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_25_R
							{
								type="text";
								source="static";
								text="25";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									
									{
										"LevelM30",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.19,0},
										1
									},
									
									{
										"LevelM30",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.16,0},
										1
									},
									
									{
										"LevelM30",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.13,0},
										1
									},
									
									{
										"LevelM30",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.07,0},
										1
									},
									
									{
										"LevelM30",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM30",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.19,0},
										1
									},
									
									{
										"LevelM30",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.16,0},
										1
									},
									
									{
										"LevelM30",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.13,0},
										1
									},
									
									{
										"LevelM30",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.07,0},
										1
									},
									
									{
										"LevelM30",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_30_R
							{
								type="text";
								source="static";
								text=-30;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_30_R
							{
								type="text";
								source="static";
								text="30";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									
									{
										"LevelM35",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.19,0},
										1
									},
									
									{
										"LevelM35",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.16,0},
										1
									},
									
									{
										"LevelM35",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.13,0},
										1
									},
									
									{
										"LevelM35",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.07,0},
										1
									},
									
									{
										"LevelM35",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM35",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.19,0},
										1
									},
									
									{
										"LevelM35",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.16,0},
										1
									},
									
									{
										"LevelM35",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.13,0},
										1
									},
									
									{
										"LevelM35",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.07,0},
										1
									},
									
									{
										"LevelM35",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_35_R
							{
								type="text";
								source="static";
								text=-35;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_35_R
							{
								type="text";
								source="static";
								text="35";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									
									{
										"LevelM40",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.19,0},
										1
									},
									
									{
										"LevelM40",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.16,0},
										1
									},
									
									{
										"LevelM40",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.13,0},
										1
									},
									
									{
										"LevelM40",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.07,0},
										1
									},
									
									{
										"LevelM40",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM40",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.19,0},
										1
									},
									
									{
										"LevelM40",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.16,0},
										1
									},
									
									{
										"LevelM40",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.13,0},
										1
									},
									
									{
										"LevelM40",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.07,0},
										1
									},
									
									{
										"LevelM40",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_40_R
							{
								type="text";
								source="static";
								text=-40;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_40_R
							{
								type="text";
								source="static";
								text="40";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									
									{
										"LevelM45",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.19,0},
										1
									},
									
									{
										"LevelM45",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.16,0},
										1
									},
									
									{
										"LevelM45",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.13,0},
										1
									},
									
									{
										"LevelM45",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.07,0},
										1
									},
									
									{
										"LevelM45",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM45",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.19,0},
										1
									},
									
									{
										"LevelM45",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.16,0},
										1
									},
									
									{
										"LevelM45",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.13,0},
										1
									},
									
									{
										"LevelM45",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.07,0},
										1
									},
									
									{
										"LevelM45",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_45_R
							{
								type="text";
								source="static";
								text=-45;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_45_R
							{
								type="text";
								source="static";
								text="45";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.22,0},
										1
									},
									
									{
										"LevelM50",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.19,0},
										1
									},
									
									{
										"LevelM50",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.16,0},
										1
									},
									
									{
										"LevelM50",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.13,0},
										1
									},
									
									{
										"LevelM50",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.07,0},
										1
									},
									
									{
										"LevelM50",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM50",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.22,0},
										1
									},
									
									{
										"LevelM50",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.19,0},
										1
									},
									
									{
										"LevelM50",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.16,0},
										1
									},
									
									{
										"LevelM50",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.13,0},
										1
									},
									
									{
										"LevelM50",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.07,0},
										1
									},
									
									{
										"LevelM50",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_50_R
							{
								type="text";
								source="static";
								text=-50;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_50_R
							{
								type="text";
								source="static";
								text="50";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM60",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.22,0},
										1
									},
									
									{
										"LevelM60",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.19,0},
										1
									},
									
									{
										"LevelM60",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.16,0},
										1
									},
									
									{
										"LevelM60",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.13,0},
										1
									},
									
									{
										"LevelM60",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.07,0},
										1
									},
									
									{
										"LevelM60",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM60",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.22,0},
										1
									},
									
									{
										"LevelM60",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.19,0},
										1
									},
									
									{
										"LevelM60",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.16,0},
										1
									},
									
									{
										"LevelM60",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.13,0},
										1
									},
									
									{
										"LevelM60",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.07,0},
										1
									},
									
									{
										"LevelM60",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_60
							{
								type="text";
								source="static";
								text=-60;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_60_R
							{
								type="text";
								source="static";
								text=-60;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP60",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_60
							{
								type="text";
								source="static";
								text="60";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_60_R
							{
								type="text";
								source="static";
								text="60";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM70",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.22,0},
										1
									},
									
									{
										"LevelM70",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.19,0},
										1
									},
									
									{
										"LevelM70",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.16,0},
										1
									},
									
									{
										"LevelM70",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.13,0},
										1
									},
									
									{
										"LevelM70",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.07,0},
										1
									},
									
									{
										"LevelM70",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM70",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.22,0},
										1
									},
									
									{
										"LevelM70",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.19,0},
										1
									},
									
									{
										"LevelM70",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.16,0},
										1
									},
									
									{
										"LevelM70",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.13,0},
										1
									},
									
									{
										"LevelM70",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.07,0},
										1
									},
									
									{
										"LevelM70",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_70
							{
								type="text";
								source="static";
								text=-70;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_70_R
							{
								type="text";
								source="static";
								text=-70;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP70",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_70
							{
								type="text";
								source="static";
								text="70";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_70_R
							{
								type="text";
								source="static";
								text="70";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM80",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.22,0},
										1
									},
									
									{
										"LevelM80",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.19,0},
										1
									},
									
									{
										"LevelM80",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.16,0},
										1
									},
									
									{
										"LevelM80",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.13,0},
										1
									},
									
									{
										"LevelM80",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.07,0},
										1
									},
									
									{
										"LevelM80",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM80",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.22,0},
										1
									},
									
									{
										"LevelM80",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.19,0},
										1
									},
									
									{
										"LevelM80",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.16,0},
										1
									},
									
									{
										"LevelM80",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.13,0},
										1
									},
									
									{
										"LevelM80",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.07,0},
										1
									},
									
									{
										"LevelM80",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_80
							{
								type="text";
								source="static";
								text=-80;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_80_R
							{
								type="text";
								source="static";
								text=-80;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP80",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_80
							{
								type="text";
								source="static";
								text="80";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_80_R
							{
								type="text";
								source="static";
								text="80";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM90",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.22,0},
										1
									},
									
									{
										"LevelM90",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.19,0},
										1
									},
									
									{
										"LevelM90",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.16,0},
										1
									},
									
									{
										"LevelM90",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.13,0},
										1
									},
									
									{
										"LevelM90",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.07,0},
										1
									},
									
									{
										"LevelM90",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM90",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.22,0},
										1
									},
									
									{
										"LevelM90",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.19,0},
										1
									},
									
									{
										"LevelM90",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.16,0},
										1
									},
									
									{
										"LevelM90",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.13,0},
										1
									},
									
									{
										"LevelM90",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.07,0},
										1
									},
									
									{
										"LevelM90",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_90
							{
								type="text";
								source="static";
								text=-90;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_90_R
							{
								type="text";
								source="static";
								text=-90;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP90",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_90
							{
								type="text";
								source="static";
								text="90";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_90_R
							{
								type="text";
								source="static";
								text="90";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.25999999,0.033},
									1
								};
							};
						};
					};
				};
			};
			class FA18_MFD_HORIZON_NUMBERS
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=0.69999999;
					condition="on";
					enableParallax=0;
					class ASNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"-0.375 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.145"
							},
							1
						};
					};
					class ALTNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"0.35 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.145"
							},
							1
						};
					};
				};
			};
			class FA18_MFD_CENTRAL
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0.37,0.37};
					};
				};
				class Draw
				{
					color[]={0,0.12,0};
					alpha=1;
					condition="on";
					class Pylon1
					{
						type="pylonicon";
						pos[]=
						{
							{0.82999998,0.5},
							1
						};
						pylon=1;
						name="Plane_Fighter_01";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							{0.16,0.5},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							{0.71499997,0.44},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							{0.27500001,0.44},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							{0.61500001,0.37},
							1
						};
						pylon=5;
					};
					class Pylon6: Pylon1
					{
						pos[]=
						{
							{0.375,0.37},
							1
						};
						pylon=6;
					};
					class Pylon7: Pylon1
					{
						pos[]=
						{
							{0.66500002,0.57999998},
							1
						};
						pylon=7;
					};
					class Pylon8: Pylon1
					{
						pos[]=
						{
							{0.32499999,0.57999998},
							1
						};
						pylon=8;
					};
					class Pylon9: Pylon1
					{
						pos[]=
						{
							{0.59500003,0.55000001},
							1
						};
						pylon=9;
					};
					class Pylon10: Pylon1
					{
						pos[]=
						{
							{0.39500001,0.55000001},
							1
						};
						pylon=10;
					};
					class Pylon11: Pylon1
					{
						pos[]=
						{
							{0.52999997,0.51999998},
							1
						};
						pylon=11;
					};
					class Pylon12: Pylon1
					{
						pos[]=
						{
							{0.46000001,0.51999998},
							1
						};
						pylon=12;
					};
					class Gatling_Ammo
					{
						type="text";
						source="ammo";
						sourceIndex=0;
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.49000001,0.27000001},
							1
						};
						right[]=
						{
							{0.56,0.27000001},
							1
						};
						down[]=
						{
							{0.49000001,0.331},
							1
						};
					};
					class PylonText1
					{
						type="text";
						source="static";
						text="SELECTED WEAPON";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.66000003
							},
							1
						};
						right[]=
						{
							{0.52499998,0.66000003},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.70499998
							},
							1
						};
					};
					class WeaponText
					{
						type="text";
						source="weapon";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.69999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.69999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.76499999
							},
							1
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.75999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.75999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.82499999
							},
							1
						};
					};
					class CM_Name
					{
						type="text";
						source="CMWeapon";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.12},
							1
						};
						right[]=
						{
							{0.345,0.12},
							1
						};
						down[]=
						{
							{0.285,0.171},
							1
						};
					};
					class CM_Ammo
					{
						type="text";
						source="CMAmmo";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.16},
							1
						};
						right[]=
						{
							{0.345,0.16},
							1
						};
						down[]=
						{
							{0.285,0.211},
							1
						};
					};
					class Static
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.11,0.12},
								1
							},
							
							{
								{0.33000001,0.12},
								1
							},
							
							{
								{0.33000001,0.22},
								1
							},
							
							{
								{0.11,0.22},
								1
							},
							
							{
								{0.11,0.12},
								1
							}
						};
					};
				};
			};
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Tailhook
					{
						condition="user4";
						class TailhookText
						{
							type="text";
							source="static";
							text="TAILHOOK";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.88},
								1
							};
							right[]=
							{
								{0.98699999,0.88},
								1
							};
							down[]=
							{
								{0.93199998,0.92500001},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0,0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.118248},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5			)"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5			)"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045	)"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
	};
	class SEC_Pegasus_Prototype: SEC_Pegasus_Guardian
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[SEC] S-845 Prototype Pegasus";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Fixed";
		hiddenSelectionsTextures[]=
    	{
    	    "SEC_Vehicles\data\sabre\Pegasus_Prototype_Mat1_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat2_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Prototype_Mat3_co.paa",
    	    "SEC_Vehicles\data\sabre\Pegasus_Guardian_Mat4_co.paa",
    	    "OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat5_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat6_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat7_co.paa",
			"OPTRE_Vehicles_Air\sabre\data\optre_sabre_mat8_co.paa"
    	};
	};