class CfgPatches
{
	class SEC_Vehicles
	{
		units[]=
		{
			"SEC_OLDTRE_Pelican",
			"SEC_UH144Falcon",
			"SEC_UH144AFalcon",
			"SEC_UH144SFalcon",
			"SEC_AV14_AGM",
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
			"SEC_Armed_SOCOM",
			"SEC_INS_Scythe_Infantry",
			"SEC_VES_M808B2_MBT", 
			"SEC_VES_M808B_MBT", 
			"SEC_VES_M808BM_MBT", 
			"SEC_VES_M808S_MBT", 
			"SEC_OPTRE_M850_UNSC",
			"SEC_OPTRE_M808B2_Driverless", 
			"SEC_OPTRE_M808B_UNSC_Driverless", 
			"SEC_OPTRE_M808BM_UNSC_Driverless", 
			"SEC_OPTRE_M808S_Driverless", 
			"SEC_OPTRE_M850_UNSC_Driverless",
			"SEC_B_T_MBT_01_arty_F", 
			"SEC_B_T_MBT_01_mlrs_F", 
			"SEC_VES_M875_SPH", 
			"SEC_VES_HDV134_Resupply", 
			"SEC_VES_HDV134_Tanker_C", 
			"SEC_OPTRE_M313_UNSC", 
			"SEC_OPTRE_M914_RV", 
			"SEC_VES_IFV76", 
			"SEC_VES_IFV76_A", 
			"SEC_VES_M412_IFV", 
			"SEC_VES_M413_MGS", 
			"SEC_VES_M494_ORYX", 
			"SEC_OPTRE_M125_APC", 
			"SEC_VES_HDV134_TT", 
			"SEC_VES_HDV134_TT_C", 
			"SEC_VES_M12_APC", 
			"SEC_VES_M12",
			"SEC_VES_M12_LRV", 
			"SEC_VES_M12A1_LRV", 
			"SEC_VES_M12G1_LRV", 
			"SEC_VES_M12R_AA", 
			"SEC_VES_M813_TT", 
			"SEC_VES_HDV134_Fujikawa", 
			"SEC_optre_catfish_aa_f", 
			"SEC_optre_catfish_atgm_f", 
			"SEC_optre_catfish_gauss_f", 
			"SEC_optre_catfish_mg_f", 
			"SEC_optre_catfish_unarmed_f", 
			"SEC_B_SDV_01_F",
			"SEC_B_Heli_Light_01_dynamicLoadout_F", 
			"SEC_B_Heli_Attack_01_Dynamicloadout_F", 
			"SEC_B_Heli_Light_01_F", 
			"SEC_B_CTRG_Heli_Transport_01_tropic_F",
			"SEC_B_Heli_Transport_01_pylons_F",
			"SEC_B_Heli_Attack_01_pylons_dynamicLoadout_F",
			"SEC_DMNS_M808B_F"
		};
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"OPTRE_Core",
			"OPTRE_Weapons_MG",
			"OPTRE_Weapons_Ammo",
			"V_FZ_Air_Vehicles",
			"DMNS_Air_F_VTOL_01",
			"Splits_Vehicles_Air_Pelican",
			"OPTRE_Vehicles_Sabre",
			"OPTRE_Weapons_Vehicle",
			"FSN_Freestyle_Nuke"
		};
	};
	author="Kavik";
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

	class SEC_Categ_Vic_Vtol
	{
		displayName="VTOL";
	};
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
	class SEC_Categ_Vic_Mechanized
	{
		displayName="Mechanized";
	};
	class SEC_Categ_Vic_Armored
	{
		displayName="Armored";
	};
	class SEC_Categ_Vic_Armored_Driverless
	{
		displayName="Armored (Driverless)";
	};
	class SEC_Categ_Vic_Antiair
	{
		displayName="Anti-Air";
	};
	class SEC_Categ_Vic_Watercraft
	{
		displayName="Watercraft";
	};
	class SEC_Categ_Vic_Artillery
	{
		displayName="Artillery";
	};
	class SEC_Categ_Vic_Logistics
	{
		displayName="Logistics";
	};
	class SEC_Categ_Vic_Turrets
	{
		displayName="Turrets";
	};
	class SEC_Categ_Vic_Special
	{
		displayName="Special";
	};
};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class Plane;
	class Plane_Base_F : Plane
	{
		class Components;
	};
	class CargoGunner_1;
	class Turrets;
	class MainTurret;
	class CopilotTurret;
	class CargoTurret;
	class ViewOptics;
	class Components;
	class Wheels;
	class LandVehicle;
	class OPTRE_Scythe_INS;
	class ViewPilot;

	#include "SEC_Vehicles_Ground.hpp"
	#include "Aircraft_HPPs\SEC_Vehicles_Air.hpp"

	class SEC_INS_Scythe_Infantry: OPTRE_Scythe_INS
	{
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		side=0
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Turrets";
		displayName="Scythe (7.62 Inaccurate)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				selectionFireAnim="zasleh";
				body="MainTurret";
				gun="MainGun";
				animationsourcebody="MainTurret";
				animationSourceGun="MainGun";
				gunAxis="Osa Hlavne";
				gunBeg="konec hlavne";
				gunEnd="usti hlavne";
				minelev=-25;
				maxelev=85;
				minturn=-360;
				maxturn=360;
				initElev=0;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=2.7;
				maxVerticalRotSpeed=2.7;
				turretInfoType="RscWeaponZeroing";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					1.4125376,
					1,
					40
				};
				hasGunner=1;
				gunnerName="$STR_A3_Phalanx_operator_displayName";
				primary=1;
				primaryGunner=1;
				startEngine=0;
				enableManualFire=0;
				optics=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				forceHideGunner=1;
				gunnerforceoptics=1;
				gunnerOutForceOptics=1;
				viewgunnerinExternal=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				castGunnerShadow=0;
				memoryPointGunnerOptics="GunnerView";
				weapons[]=
				{
					"SEC_M134_minigun_AI"
				};
				magazines[]=
				{
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
					"5000Rnd_762x51_Belt",
				};
				enableGPS=1;
				reportRemoteTargets=1;
				reportOwnPosition=1;
				lockDetectionSystem=0;
			};
		};
	};
	class OPTRE_Ammo_SupplyPod_Empty;
	class SEC_AmmoPod_Arsenal: OPTRE_Ammo_SupplyPod_Empty
	{
    dlc                            = "SEC";
    author                        = "Kavik";
    displayName                 = "[SEC] Supply Pod (Full Arsenal)";
    scope = 2;
    scopecurator =2;
    	class EventHandlers
    	{
       		init = "[_this select 0, true] call ace_arsenal_fnc_initBox";
    	};
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
};		
#include "SEC_Vehicle_Weapons.hpp"