class CfgPatches
{
	class SEC_Vehicles
	{
		units[]=
		{
			"SEC_Nightingale",
			"SEC_OLDTRE_Pelican",
			"SEC_UH144Falcon",
			"SEC_UH144AFalcon",
			"SEC_UH144SFalcon",
			"SEC_AV14_Rockets",
			"SEC_AV14_AGM",
			"SEC_AV14_AIM",
			"SEC_AV22_Sparrowhawk",
			"SEC_AV22A_Sparrowhawk",
			"SEC_AV22B_Sparrowhawk",
			"SEC_AV22C_Sparrowhawk",
			"SEC_VAF19",
			"SEC_D77_TC_Pelican",
			"SEC_AmmoPod_Arsenal",
			"SEC_Pegasus_Guardian",
			"SEC_Pegasus_Prototype",
			"SEC_Gladius",
			"SEC_Armed_SOCOM"
		};
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"OPTRE_Core",
			"OPTRE_Weapons_MG",
			"V_FZ_Air_Vehicles",
			"DMNS_Air_F_VTOL_01",
			"Splits_Vehicles_Air_Pelican",
			"TCF_DMNS_Vehicles_Nightingale",
			"OPTRE_Vehicles_Sabre"
		};
	};
	author="";
};
class cfgEditorCategories
{
	class SEC_Categ_Main
	{
		displayName = "Spartan Eagle Company";
	};
};
class CfgFactionClasses
{
	class SEC_Faction_Main
	{
		displayName="[SEC] Vehicular Assets";
	};
};
class CfgEditorSubcategories
{

	class SEC_Categ_Vic_Rotary
	{
		displayName="Rotary Wing";
	};
	class SEC_Categ_Vic_Fixed
	{
		displayName="Fixed Wing";
	};
	class SEC_Categ_Vic_Motorized
	{
		displayName="Motorized";
	};
};
class CfgVehicles
{
	class OPTRE_M12_FAV;
	class OPTRE_M813_TT;
	class OPTRE_M12A1_LRV;
	class CargoGunner_1;
	class Turrets;
	class MainTurret;
	class CopilotTurret;
	class CargoTurret;
	class ViewOptics;
	class Components;
	class OPTRE_M12_LRV;
	class OPTRE_M12_base;
	class LandVehicle;
	class OPTRE_Pelican_unarmed_green;
	class OPTRE_Pelican_armed_green;
	class OPTRE_Pelican_armed_SOCOM;
	class VES_D77HTCI_A;
	class VES_UH144;
	class OPTRE_UNSC_falcon_armed_s;
	class VES_UH144S_A: OPTRE_UNSC_falcon_armed_s
	{
	};
	class VES_UH144S;
	class TCF_UNSC_Nightingale;
	class OPTRE_UNSC_hornet;
	class OPTRE_UNSC_hornet_CAS;
	class OPTRE_UNSC_hornet_CAP;
	class OPTRE_gladius_01;

	class SEC_Gladius: OPTRE_gladius_01
	{
		displayName="[SEC] Gladius";
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
	class SEC_Armed_SOCOM: OPTRE_Pelican_armed_SOCOM
	{
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC/OLDTRE] D77S-SOI Pelican";
		forceInGarage=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=18500;
		armor=350;
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

	class SEC_Nightingale : TCF_UNSC_Nightingale
	{
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC/TCF]EV-44 Nightingale";
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
	class SEC_OLDTRE_Pelican: VES_D77HTCI_A
	{
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		author="Watershed Division";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Rotary";
		displayName="[SEC/OLDTRE] D77H-TCI/AV Pelican";
		hiddenSelectionsTextures[]=
		{
			"SEC_Vehicles\data\pelican\SEC_OldPelican_Exterior_CO.paa",
			""
		};
	};
	class OPTRE_UNSC_falcon;
	class SEC_UH144Falcon : OPTRE_UNSC_falcon
	{
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
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Interior_CO.paa"
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
	class OPTRE_UNSC_falcon_armed;
	class SEC_UH144AFalcon: OPTRE_UNSC_falcon_armed
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC]UH-144A Falcon";
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
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Interior_CO.paa"
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
	class OPTRE_UNSC_falcon_s;
	class SEC_UH144SFalcon: OPTRE_UNSC_falcon_s
	{
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
			"SEC_Vehicles\data\falcon\SEC_Falcon_Main_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Attachments_CO.paa",
			"SEC_Vehicles\data\falcon\SEC_Falcon_Interior_CO.paa"
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
	class VES_AV14_Rockets: OPTRE_UNSC_hornet
	{
	};
	class VES_AV14_AGM;
	class VES_AV14_AIM;
	class SEC_AV14_Rockets: VES_AV14_Rockets
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ][BUGGED]AV-14 Rocket Hornet";
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
	};
	class SEC_AV14_AGM : VES_AV14_AGM
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ]AV-14 AGM Hornet";
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
	};
	class SEC_AV14_AIM : VES_AV14_AIM
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ]AV-14 AIM Hornet";
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
	};
	class OPTRE_AV22_Sparrowhawk_Base;
	class VES_AV22_Sparrowhawk_Base;
	class VES_AV22_Sparrowhawk_Base_F;
	class VES_AV22_Sparrowhawk;
	class VES_AV22A_Sparrowhawk;
	class VES_AV22B_Sparrowhawk;
	class VES_AV22C_Sparrowhawk;
	class SEC_AV22_Sparrowhawk : VES_AV22_Sparrowhawk
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ]AV-22V Sparrowhawk [GAU 23/ M230]";
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
	};
	class SEC_AV22A_Sparrowhawk : VES_AV22A_Sparrowhawk
	{
		scope=2;
		scopeCurator=2;
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
	};
	class SEC_AV22B_Sparrowhawk : VES_AV22B_Sparrowhawk
	{
		scope=2;
		scopeCurator=2;
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
	};
	class SEC_AV22C_Sparrowhawk : VES_AV22C_Sparrowhawk
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ]AV-22C Sparrowhawk [M9109 / M230]";
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
	};
	class VES_VAF19;
	class SEC_VAF19 : VES_VAF19
	{
		scope=2;
		scopeCurator=2;
		displayName="[SEC/FTZ]S-14 Baselard (WIP)";
		editorCategory="SEC_Categ_Main";
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Fixed";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
	};
	class Splits_UNSC_D77_TC_Pelican;
	class SEC_D77_TC_Pelican : Splits_UNSC_D77_TC_Pelican
	{
		scope=2;
		scopeCurator=2;
		armor=350;
		displayName="[SEC/FND]D77-TC Pelican";
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
		hiddenSelectionsTextures[] = { "SEC_Vehicles\data\pelican\sec_pelican_body_co.paa", "SEC_Vehicles\data\pelican\SEC_Pelican_wings_and_gear_CO.paa", "SEC_Vehicles\data\pelican\SEC_Pelican_weaponry_CO.paa" };
		#include "19th_Turret_Stabilization.hpp"
	};	
	class OPTRE_Ammo_SupplyPod_Empty;
	class SEC_AmmoPod_Arsenal: OPTRE_Ammo_SupplyPod_Empty
	{
    dlc                            = "SEC";
    author                        = "Kavik";
    displayName                 = "[SEC] Supply Pod (Full Arsenal)";
    scope = 2;
    scopecurator =2;
    class EventHandlers {
        init = "[_this select 0, true] call ace_arsenal_fnc_initBox";
    }
    };
	class Module_F;
    class Module_OPTRE_PelicanSupplyDrop: Module_F
    {
        class Arguments
        {
            class box1
            {
                defaultValue = "OPTRE_Ammo_SupplyPod_NEW";
                class values
                {
                    class n1
                    {
                        name = "none";
                        value = "none";
                    };
                    class n2
                    {
                        name = "Random Supply Pod";
                    };
                    class n3
                    {
                        name = "Arsenal Pod";
                        value = "SEC_AmmoPod_Arsenal";
                    };
                };
            };
        };
    };
    class OPTRE_YSS_1000_A_VTOL_Single;
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
};		
class CfgAmmo
{
	class OPTRE_STMedusa_Missile;
	class SEC_SuperMedusa_Missile: OPTRE_STMedusa_Missile
	{
		hit=600;
		indirectHit=280;
		manueuvrability=50
		sideAirFriction=0.18
		cmImmunity=0.7
	};
	class OPTRE_25x130mm_Slug;
	class SEC_AA_Slug: OPTRE_25x130mm_Slug
	{
		access=0
		timeToLive = 2;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_white"
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		tracerEndTime = 2;
		tracerScale = 3;
		tracersEvery = 1;
		tracerStartTime = 0.01;
	};
};
class CfgMagazines
{
	class 5000Rnd_762x51_Belt;
	class SEC_5000Rnd_762x51_Belt: 5000Rnd_762x51_Belt
	{
		hardpoints[]=
		{
		 	"OPAEX_Hardpoint_AV14",
		 	"OPAEX_Hardpoint_UH144",
		 	"OPAEX_Hardpoint_AV22"
		};
		pylonWeapon= "SEC_M134_minigun";
	};

	class PylonMissile_Bomb_GBU12_x1;
	class SEC_CarpetBomb_x30: PylonMissile_Bomb_GBU12_x1
	{
		count=30;
		displayName= "GBU SDB x30";
		displayNameShort= "Bombs";
		hardpoints[]=
		{
		 	"CARPET_BOMB_PYLON"
		};
		pylonWeapon= "SEC_CarpetBomb_Launcher";
		mirrorMissilesIndexes[] = { 7, 6, 1, 2 };
	};
	class OPTRE_STMedusa_6Rnd_AA_Missile;
	class OPTRE_STMedusa_14Rnd_AA_Missile: OPTRE_STMedusa_6Rnd_AA_Missile
	{
		displayName="14Rnd ST/Medusa Missiles";
		displayNameShort="14rnd ST/Medusa";
		count=14;
		ammo="SEC_SuperMedusa_Missile";
		model="\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		modelSpecial="\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		modelSpecialIsProxy=1;
		hardpoints[]=
		{
			"OPTRE_Hardpoint_SabrePilot",
			"OPTRE_Hardpoint_SabreCopilot"
		};
		pylonWeapon="OPTRE_STMedusa_AAMissile";
		maxLeadSpeed=1000;
	};
	class OPTRE_15Rnd_ALIM_Gauss_Slugs;
	class SEC_AA_Gauss_Mag: OPTRE_15Rnd_ALIM_Gauss_Slugs
	{
		ammo="SEC_AA_Slug";
		initSpeed=4900;
		scope=2;
		count=1000;
		displayName="AA Gauss";
		displayNameShort="AA Gauss";
		tracersEvery=1;
		hardpoints[]=
		{
			"OPTRE_Hardpoint_M1024_30mm"
		};
		pylonWeapon="SEC_AA_Gauss_Cannon";
	};
};	
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class M134_minigun;
	class SEC_M134_minigun: M134_minigun
	{
		magazines[]=
		{
			"SEC_5000Rnd_762x51_Belt"
		};
	};
	class weapon_SDBLauncher;
	class SEC_CarpetBomb_Launcher: weapon_SDBLauncher
	{
		magazines[]=
		{
			"SEC_CarpetBomb_x30"
		};
		autoFire=1;
		reloadTime=0.167;
	};
	class MGun;
	class OPTRE_M638;
  	//Pelican 40mm
	class OPTRE_CHAINGUN40: OPTRE_M638 {
  	ballisticsComputer = 4+8;
    displayName = "$STR_OPTRE_Weapons_Vehicle_M340_40mm_Autocannon";
    descriptionShort = "40mm Autocannon";
    displayNameShort = "40mm";
    magazines[] = {
      "OPTRE_1200Rnd_40mm_HE"
    };
    cursor = "EmptyCursor";
    cursorAim = "OPTRE_M638";
    modes[] = {
      "FullAuto",
      "close",
      "short",
      "medium"
    };
    class FullAuto: MGun {
      reloadTime = 0.18;
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 800;
      maxRangeProbab = 0.05;
    };
    class close: FullAuto {
      burst = 10;
      aiRateOfFire = 0.25;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 50;
      maxRangeProbab = 0.04;
      showToPlayer = 0;
    };
    class short: close {
      burst = 8;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.04;
    };
    class medium: close {
      burst = 7;
      aiRateOfFire = 0.75;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 500;
      maxRangeProbab = 0.1;
    };
  };
	class OPTRE_missiles_C2GMLS;
	class OPTRE_STMedusa_AAMissile: OPTRE_missiles_C2GMLS
	{
		displayName="M4370 ST/Medusa Missiles";
		magazines[]=
		{
			"OPTRE_STMedusa_6Rnd_AA_Missile",
			"OPTRE_STMedusa_14Rnd_AA_Missile"
		};
		reloadTime=1.5;
		magazineReloadTime=5;
		cursorAim="OPTRE_AGM502";
		canlock=2;
		airLock=2;
		aiAmmoUsageFlags="256";
	};
	class OPTRE_M1024_ASWAC_30mm_MLA;
	class SEC_AA_Gauss_Cannon: OPTRE_M1024_ASWAC_30mm_MLA 
	{
		magazines[]=
		{
			"SEC_AA_Gauss_Mag",
		};
		class LowROF: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"OPTRE_Weapons\Vehicle\data\sounds\Gauss_1.wss",
					5.5,
					0.85,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			autoFire=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=1;
			showToPlayer=1;
			reloadTime=0.15;
			dispersion=0.0004999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};	
	};	
};