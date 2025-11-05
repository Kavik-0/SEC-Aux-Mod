class CfgAmmo
{
	class Components;
	class SensorTemplateLaser;
	class B_762x51_Minigun_Tracer_Red_splash;
	class SEC_B_762x51_Minigun_Tracer_Red: B_762x51_Minigun_Tracer_Red_splash
	{
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class OPTRE_M_ANVIL_1_Rocket;
	class SEC_Stiletto_Ammo: OPTRE_M_ANVIL_1_Rocket
	{
		hit=300;
		indirectHit=75;
		indirectHitRange=0.6;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="GrenadeCrater";
		effectsSmoke="";
		model="\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		manualControl=1;
		manualControlOffset=80;
		missileManualControlCone=240;
		manueuvrability=15;
		maxControlRange=8000;
		maxSpeed=500;
		airFriction=0.2;
		sideAirFriction=0.9;
		thrust=300;
		thrustTime=10;
		timeToLive=20;
		trackOversteer=1;
		trackLead=0.75;
		typicalSpeed=300;
		audibleFire=5;
		visibleFire=5;
		visibleFireTime=5;
		whistleDist=75;
		explosive=0.5;

		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=90;
						angleRangeVertical=70;
					};
				};
			};
		};
	};
	class SEC_Cinquedea_Ammo: SEC_Stiletto_Ammo
	{
		hit=2000;
		caliber=5;
		model="OPTRE_weapons\Aircraft\Jackknife_missile_fly.p3d";
		proxyShape="\A3\Weapons_F\Ammo\Missile_AT_03_F"
		indirecthit=300;
		indirectHitRange=1.25;
		sideAirFriction=0.7;
		manueuvrability=25;
		trackOversteer=1;
		maxSpeed=1000
	};
	class NSWep_M232_145x114_APFSDS_TC;
	class SEC_Pelican_Sniper_Ammo: NSWep_M232_145x114_APFSDS_TC
	{
		audibleFire=5;
		caliber=5;
		hit=150;
		sideAirFriction=0.02;
		airFriction=0; //-0.000546 default
	};
	class ammo_Missile_HARM;
	class SEC_ammo_Missile_HARM: ammo_Missile_HARM
	{
		proxyShape="\A3\Weapons_F\Ammo\Missile_AT_03_F";
	};
	class OPTRE_M1024_30mm;
	class SEC_OPTRE_M1024_30mmAP: OPTRE_M1024_30mm
	{
		caliber=4;
		hit=180
	};
	class B_40mm_GPR;
	class OPTRE_B_50mm_HE: B_40mm_GPR 
	{
    	//Used by: AV-22 Sparrowhawk (Big Rotary Guns) //Bison IFV
	    model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	    hit = 120;
	    indirectHit = 75;
	    indirectHitRange = 4;
	    caliber = 6;
	    explosive = 0.65;
	    tracerScale = 1.4;
	    tracerStartTime = 0.005;
	    tracerEndTime = 10;
	    allowAgainstInfantry = 1;
	    airLock = 1;
	    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
 	};
  	class OPTRE_B_70mm_HE: OPTRE_B_50mm_HE
  	{
	    //Used by: M370 Autocannon (G77H-TCI Pelican (Newer Models))
	    hit = 175;
	    indirectHit = 100;
	    indirectHitRange = 5;
	    caliber = 5;
	    explosive = 0.8;
	    tracerScale = 1.5;
	    typicalSpeed = 960;
	    thrust = 210;
	    suppressionRadiusHit = 24;
	    suppressionRadiusBulletClose = 12;
	    cost = 20;
	    artilleryCharge = 1;
	    artilleryDispersion = 1;
	    submunitionAmmo = "";
	    model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
	    warheadName = "HE";
	    weaponType = "cannon";
	    cartridge = "FxCartridge_556";
	    explosionType = "explosive";
	    explosionSoundEffect = "DefaultExplosion";
	    explosionEffects = "ExploAmmoExplosion";
	    effectsSmoke = "SmokeShellWhite";
	    effectsMissile = "ExplosionEffects";
	    effectsMissileInit = "";
	    effectsFire = "CannonFire";
	    effectFly = "AmmoClassic";
	    effectFlare = "FlareShell";
	    craterWaterEffects = "ImpactEffectsWater";
	    craterShape = "";
	    craterEffects = "ExploAmmoCrater";
	    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	    airLock = 1;
	    allowAgainstInfantry = 1;
	    audibleFire = 200;
	    multiSoundHit[] = {
	      "soundHit1",
	      0.25,
	      "soundHit2",
	      0.25,
	      "soundHit3",
	      0.25,
	      "soundHit4",
	      0.25
	    };
	    SoundSetExplosion[] = {
	      "Shell30mm40mm_Exp_SoundSet",
	      "Shell30mm40mm_Tail_SoundSet",
	      "Explosion_Debris_SoundSet"
	    };
	    soundHit[] = {
	      "",
	      1,
	      1
	    };
	    soundHit1[] = {
	      "A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
	      1.77828,
	      1,
	      1600
	    };
	    soundHit2[] = {
	      "A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
	      1.77828,
	      1,
	      1600
	    };
	    soundHit3[] = {
	      "A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
	      1.77828,
	      1,
	      1600
	    };
	    soundHit4[] = {
	      "A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
	      1.77828,
	      1,
	      1600
	    };
	};
	class B_30mm_MP;
	class OPTRE_B_30mm_HE: B_30mm_MP
	{
	    //Used by: AV-22 Sparrowhawk (4 cannons)
	    hit = 95;
	    airLock = 1;
	    indirectHit = 75;
	    indirectHitRange = 3;
	    caliber = 5;
	    explosive = 0.7;
	    tracerScale = 1.3;
	    tracerStartTime = 0.005;
	    tracerEndTime = 10;
	    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	    allowAgainstInfantry = 1;
	};
	class B_20mm;
	class OPTRE_B_20mm_HE: B_20mm 
	{
    	//Used by: UH-144 Falcon (M638 Autocannon)
	    hit = 75;
	    indirectHit = 75;
	    indirectHitRange=3;
	    caliber = 5;
	    explosive = 0.2;
	    tracerScale = 1.25;
	    tracerStartTime = 0.005;
	    tracerEndTime = 10;
	    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	    allowAgainstInfantry = 1;
	    airLock = 1;
	    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class B_35mm_AA_Tracer_Red;
	class OPTRE_B_20mm_HEIAP: B_35mm_AA_Tracer_Red
	{
		// Used by: Hornet
		aiAmmoUsageFlags= "64 + 128 + 256 + 512";
		airLock=1;
		allowAgainstInfantry=1;
		caliber=5;
		explosive=0.75;
		hit=75;
		indirectHit=75;
		indirectHitRange=3;
		tracerEndTime=10;
		tracerScale=1.25;
		tracerStartTime=0.005;
	};
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
	class ammo_Bomb_SDB;
	class SEC_Glidebomb_Small: ammo_Bomb_SDB
	{
		airFriction = 0.04;
		indirectHitRange = 6;
	};
};
class CfgMagazines
{
	class OPTRE_8Rnd_Scorpion_missiles;
	class 32Rnd_155mm_Mo_shells;
	class PylonMissile_1Rnd_Mk82_F;
	class OPTRE_M1024_2000Rnd_30mm;
	class OPTRE_1Rnd_C2GMLS_missiles;
	class OPTRE_Jackknife_missile;
	class PylonRack_Bomb_SDB_x4;
	class 5000Rnd_762x51_Belt;
	class PylonMissile_Bomb_GBU12_x1;
	class OPTRE_STMedusa_6Rnd_AA_Missile;
	class OPTRE_15Rnd_ALIM_Gauss_Slugs;
	class magazine_Missile_AMRAAM_D_x1;
	class VehicleMagazine;
	class OPTRE_750Rnd_70mm_HE;
	class PylonRack_19Rnd_Rocket_Skyfire;
	class OPTRE_1Rnd_Anvil1_missiles;
	class PylonRack_Missile_HARM_x1;

	#include "Aircraft_HPPs\Aircraft_Nuke_Removal.hpp"

	class SEC_PylonRack_19Rnd_Stiletto: PylonRack_19Rnd_Rocket_Skyfire
	{
		ammo="SEC_Stiletto_Ammo";
		descriptionShort="Precision impact missiles with no explosives.";
		displayName="X-73 Stiletto";
		displayNameShort="Kinetic";
		count=19;
		pylonWeapon="SEC_missiles_Stiletto";
		hardpoints[]=
		{
			"DAR",
			"SEC_Hardpoint_Stealth",
			"SEC_Hardpoint_Stealth_Outer",
		};
	};
	class SEC_PylonRack_3Rnd_Cinquedea: SEC_PylonRack_19Rnd_Stiletto
	{
		ammo="SEC_Cinquedea_Ammo";
		descriptionShort="Large anti-armor impact missiles with no explosives.";
		displayName="X-75 Cinquedea";
		displayNameShort="Kinetic";
		count=3;
		pylonWeapon="SEC_missiles_Cinquedea";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		hardpoints[]=
		{
			"SEC_Hardpoint_Stealth_Outer",
			"DAR"
		};
	};
	class SEC_Pelican_Sniper: OPTRE_750Rnd_70mm_HE
	{
		ammo="SEC_Pelican_Sniper_Ammo";
		displayName="XSRS-S3 (14.5×114mm)";
		displayNameShort="14.5×114mm APFSDS";
		pylonWeapon="SEC_OPTRE_M370_Stealth";
		tracersEvery=1;
		initSpeed=5000;
		muzzleImpulseFactor[]={0.1,0.3};
		hardpoints[]=
		{
			"SEC_Stealth_Turret"
		};
	};
	class SEC_PylonRack_Missile_HARM_x1: PylonRack_Missile_HARM_x1
	{
		ammo="SEC_ammo_Missile_HARM";
		pylonWeapon="SEC_weapon_HARMLauncher";
		hardpoints[]=
		{
			"OPTRE_Hardpoint_SabreCopilot"
		};
	};
	class SEC_OPTRE_M1024_4000Rnd_30mmAP: OPTRE_M1024_2000Rnd_30mm
	{
		ammo="SEC_OPTRE_M1024_30mmAP";
		count=4000;
		displayName="M1024 ASW/AC 2000Rnd 30mm MLA AP";
		displayNameShort="M1024 MLA AP";
		initSpeed=1500;
		pylonWeapon="SEC_OPTRE_M1024_ASWAC_30mm_MLA";
	};
	class OPTRE_8Rnd_C2GMLS_missiles: OPTRE_1Rnd_C2GMLS_missiles
	{
		hardpoints[]=
		{
			"OPAEX_Hardpoint_UH144"
		};
	};
	class OPTRE_12Rnd_C2GMLS_missiles: OPTRE_1Rnd_C2GMLS_missiles
	{
		hardpoints[]= 
		{
			"OPAEX_Hardpoint_D77-TC",
			"OPTRE_Hardpoint_D77_Guided",
			"OPTRE_Hardpoint_SabrePilot",
			"OPTRE_Hardpoint_SabreCopilot",
			"OPAEX_Hardpoint_AV14",
			"OPAEX_Hardpoint_AV22",
			"C2_12x"
		};
	};
	class SEC_OPTRE_8Rnd_Scorpion_missiles: OPTRE_8Rnd_Scorpion_missiles
	{

		displayName 						= "8x AGM-90B 'Scorpion' Guided AT Missile";
		displayNameShort 					= "8x Guided AT";
		count 								= 8;
		
		hardpoints[]  = {"OPTRE_AT_Missiles"};
	};
	class OPTRE_6Rnd_Jackknife_missile: OPTRE_Jackknife_missile
	{
		displayName = "6x AGM-502 'Jack Knife' SALH-ATGM";
		count = 6;
		
		hardpoints[]  = {"OPAEX_Hardpoint_D77-TC","OPTRE_Hardpoint_D77_Guided"};

	};
	class OPTRE_4Rnd_Jackknife_missile: OPTRE_Jackknife_missile
	{
		displayName = "4x AGM-502 'Jack Knife' SALH-ATGM";
		count = 4;
		
		hardpoints[]  = {"OPTRE_Hardpoint_F99","OPAEX_Hardpoint_AV14","OPAEX_Hardpoint_AV22","OPTRE_Hardpoint_D77_Guided"};

	};
	class OPTRE_3Rnd_Jackknife_missile: OPTRE_Jackknife_missile
	{
		displayName = "3x AGM-502 'Jack Knife' SALH-ATGM";
		count = 3;
		
		hardpoints[]  = {"OPTRE_Hardpoint_SabrePilot","OPTRE_Hardpoint_SabreCopilot","OPAEX_Hardpoint_UH144","OPTRE_AT_Missiles"};		
	};
	class SEC_Gunship_Glidebomb_x4: PylonRack_Bomb_SDB_x4
	{
		hardpoints[]=
		{
			"OPTRE_Hardpoint_D77_Guided",
			"SEC_Hardpoint_Stealth",
		};
		pylonWeapon="SEC_Glidebomb_Launcher";
	};
	class SEC_5000Rnd_762x51_Belt: 5000Rnd_762x51_Belt
	{
		ammo = "SEC_B_762x51_Minigun_Tracer_Red";
		hardpoints[]=
		{
		 	"OPAEX_Hardpoint_AV14",
		 	"OPAEX_Hardpoint_UH144",
		 	"OPAEX_Hardpoint_AV22",
		 	"M134Invis"
		};
		pylonWeapon= "SEC_M134_minigun";
		tracersEvery = 2;
	};
	class SEC_5000Rnd_762x51_Belt_Model: 5000Rnd_762x51_Belt
	{
		hardpoints[]=
		{
		 	"M134"
		};
		pylonWeapon= "SEC_M134_minigun";
		model= "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
	};
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
			"OPTRE_Hardpoint_SabreCopilot",
			"SEC_Hardpoint_Stealth_Outer"
		};
		pylonWeapon="OPTRE_STMedusa_AAMissile";
		maxLeadSpeed=1000;
	};
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
	class OPTRE_32Rnd_Anvil1_missiles: OPTRE_1Rnd_Anvil1_missiles
	{

		displayName = "32x 'ANVIL I' HE Rockets";
		displayNameShort = "Dumb HE Rockets";
		count 	= 32;
		
		hardpoints[] = {"OPAEX_Hardpoint_D77-TC","OPTRE_Hardpoint_SabrePilot","SEC_Hardpoint_Stealth_Outer"};
	};
};	
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class ace_missile_sdb_sdb;
	class M134_minigun;
	class weapon_SDBLauncher;
	class MGun;
	class OPTRE_M638;
	class OPTRE_missiles_C2GMLS;
	class RocketPods;
	class missiles_DAR;
	class missiles_SCALPEL;
	class autocannon_35mm;
	class OPTRE_M370;
	class StandardSound;
	class rockets_Skyfire;
	class weapon_HARMLauncher;

	class SEC_missiles_Stiletto: rockets_Skyfire
	{
		displayName="X-73 Stilleto";
		magazines[]=
		{
			"SEC_PylonRack_19Rnd_Stiletto"
		};
		canLock=2;
		laserLock=1;
		class Burst: RocketPods
		{
			displayName="$STR_A3_rockets_Skyfire_Burst0";
			textureType="fullAuto";
			autoFire=0;
			burst=1;
			reloadTime=0.079999998;
			dispersion=0.025;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.1220185,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
		};
	};
	class SEC_missiles_Cinquedea: SEC_missiles_Stiletto
	{
		displayName="X-75 Cinquedea";
		magazines[]=
		{
			"SEC_PylonRack_3Rnd_Cinquedea"
		};
		canLock=2;
		laserLock=1;
	};
	class SEC_OPTRE_M370_Stealth: OPTRE_M370
	{
		displayName="M314 Experimental Precision Cannon";
		displayNameShort="M314 14.5×114mm";
		ballisticsComputer=8;
		initSpeed=5000;
		magazines[]=
		{
			"SEC_Pelican_Sniper"
		};
		class FullAuto: MGun
		{
			class StandardSound
			{
				begin1[]=
				{
					"NavSpecWep\data\Sounds\srs\99am\sup_fire1.wav",
					2.25,
					1,
					1700
				};
				begin2[]=
				{
					"NavSpecWep\data\Sounds\srs\99am\sup_fire2.wav",
					2.25,
					1,
					1700
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5,
				};
			};
			reloadTime=0.34999999;
			dispersion=0.0003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
	};
	class SEC_weapon_HARMLauncher: weapon_HARMLauncher
	{
		magazines[]=
		{
			"SEC_PylonRack_Missile_HARM_x1"
		};
	};
	class SEC_OPTRE_M1024_ASWAC_30mm_MLA: autocannon_35mm
	{
		displayName="M1024 ASW/AC 30mm MLA";
		reloadTime=0.5;
		autoFire=1;
		magazines[]=
		{
			"SEC_OPTRE_M1024_4000Rnd_30mmAP"
		};
		selectionFireAnim="zasleh3";
		cursorAim="OPTRE_GAU23";
		muzzleEnd="konec hlavne2";
		muzzlePos="usti hlavne_2";
		modes[]=
		{
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
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
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",
					5.6234136,
					1,
					1500,
					{25704,32159}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=1;
			autoFire=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=1;
			showToPlayer=1;
			reloadTime=0.029999999;
			dispersion=0.0094999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: LowROF
		{
			showToPlayer=0;
			burst=33;
			burstRangeMax=100;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=200;
			minRange=1;
			minRangeProbab=0.1;
			midRange=100;
			midRangeProbab=0.5;
			maxRange=400;
			maxRangeProbab=0.85000002;
		};
		class near: close
		{
		};
		class short: close
		{
			showToPlayer=0;
			burst=33;
			burstRangeMax=100;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.85000002;
			maxRange=750;
			maxRangeProbab=0.89999998;
		};
		class medium: close
		{
			showToPlayer=0;
			burst=33;
			burstRangeMax=67;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=800;
			minRange=600;
			minRangeProbab=0.60000002;
			midRange=750;
			midRangeProbab=0.89999998;
			maxRange=1000;
			maxRangeProbab=0.75;
		};
		class far: close
		{
			showToPlayer=0;
			burst=33;
			burstRangeMax=67;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1200;
			minRange=900;
			minRangeProbab=0.83999997;
			midRange=1250;
			midRangeProbab=0.69999999;
			maxRange=1600;
			maxRangeProbab=0.1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne3";
				directionName="usti hlavne_3";
				effectName="MachineGunCloud";
			};
		};
	};

	class OPTRE_missiles_Jackknife: missiles_SCALPEL
	{
		magazines[]=
		{
			"OPTRE_1Rnd_Jackknife_missile",
			"OPTRE_2Rnd_Jackknife_missile",
			"OPTRE_3Rnd_Jackknife_missile",
			"OPTRE_4Rnd_Jackknife_missile",
			"OPTRE_6Rnd_Jackknife_missile"
		};
		maxRange=10000;
		weaponLockDelay=1;
		cursor="EmptyCursor";
		cursorAim="OPTRE_AGM502";
		displayName="AGM-502 SALH-ATGM 'Jack Knife'";
		descriptionShort="'Jack Knife' Laser-Guided Anti-Tank Missile";
	};
	class OPTRE_missiles_Anvil1: missiles_DAR
	{
		displayName="'ANVIL I' Rocket Pods";
		descriptionShort="'Anvil-1' HE Rockets";
		magazines[]=
		{
			"OPTRE_16Rnd_Anvil1_missiles",
			"OPTRE_32Rnd_Anvil1_missiles"
		};
		showAimCursorInternal=1;
		reloadTime=0.1;
		magazineReloadTime=5;
		cursor="EmptyCursor";
		cursorAim="OPTRE_ANVIL1";
		canlock=0;
		ballisticsComputer=4;
		class Burst: RocketPods
		{
			displayName="$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
			textureType="fullAuto";
			burst=1;
			autoFire=1;
			soundContinuous=0;
			lockingTargetSound[]=
			{
				"A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				1.5
			};
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\new_rocket_8",
					1.77828,
					1.2,
					1600
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"RocketsLight_Shot_SoundSet"
				};
			};
			salvo=1;
			reloadTime=0.1;
			dispersion=0.015;
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
	class SEC_Glidebomb_Launcher: ace_missile_sdb_sdb
	{
		magazines[]=
		{
			"SEC_Gunship_Glidebomb_x4",
		};
	};

	class SEC_M134_minigun: M134_minigun
	{
		magazines[]=
		{
			"SEC_5000Rnd_762x51_Belt",
			"SEC_5000Rnd_762x51_Belt_Model"
		};
	};
	class SEC_M134_minigun_AI: M134_minigun ////////////////////////////////////////////////
	{
		scope=1;
		displayName="$STR_A3_M134_minigun0";
		cursor="EmptyCursor";
		cursorAim="mg";
		magazines[]=
		{
			"5000Rnd_762x51_Belt",
			"5000Rnd_762x51_Yellow_Belt"
		};
		magazineReloadTime=3;
		canLock=0;
		modes[]=
		{
			"HighROF",
			"LowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		weight=40;
		type=65536;
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGunCloud";
				positionName="konec hlavne";
				directionName="Usti hlavne";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_M134_minigun0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					3.9810717,
					1,
					1300,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			reloadTime=0.033333302;
			dispersion=0.01058000023  //0.0092000002;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			showToPlayer=0;
			multiplier=1;
		};
		class HighROF: LowROF
		{
			displayName="$STR_A3_M134_minigun0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",
					2.5118864,
					1,
					1500,
					{2,36879}
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=1;
			multiplier=3;
		};
		class close: HighROF
		{
			soundBurst=0;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=100;
			burstRangeMax=-1;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=100;
			burstRangeMax=-1;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.75;
			midRange=300;
			midRangeProbab=0.75;
			maxRange=600;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=100;
			burstRangeMax=-1;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=300;
			minRangeProbab=0.75;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=100;
			burstRangeMax=-1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.64999998;
			midRange=1000;
			midRangeProbab=0.30000001;
			maxRange=1500;
			maxRangeProbab=0.050000001;
		};
	};
	class SEC_CarpetBomb_Launcher: weapon_SDBLauncher
	{
		magazines[]=
		{
			"SEC_CarpetBomb_x30"
		};
		autoFire=1;
		reloadTime=0.167;
	};
  	//Pelican 40mm
	class OPTRE_CHAINGUN40: OPTRE_M638
	{
  		ballisticsComputer = 4+8;
    	displayName = "$STR_OPTRE_Weapons_Vehicle_M340_40mm_Autocannon";
		descriptionShort = "40mm Autocannon";
    	displayNameShort = "40mm";
    	magazines[] =
    	{
      		"OPTRE_1200Rnd_40mm_HE"
    	};
   		cursor = "EmptyCursor";
    	cursorAim = "OPTRE_M638";
   		modes[] = 
    	{
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
			reloadTime=0.1;
			dispersion=0.001;
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