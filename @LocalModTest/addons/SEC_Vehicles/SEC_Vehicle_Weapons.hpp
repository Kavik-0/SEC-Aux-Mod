class CfgAmmo
{
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
	    indirectHit = 35;
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
	    indirectHit = 50;
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
	    indirectHit = 20;
	    indirectHitRange = 2.5;
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
	    hit = 70;
	    indirectHit = 10;
	    caliber = 5;
	    explosive = 0.5;
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
		indirectHit=14;
		indirectHitRange=1.75;
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
	class OPTRE_M1024_2000Rnd_30mm;
	class SEC_OPTRE_M1024_2000Rnd_30mmAP: OPTRE_M1024_2000Rnd_30mm
	{
		ammo="SEC_OPTRE_M1024_30mmAP";
		displayName="M1024 ASW/AC 2000Rnd 30mm MLA AP";
		displayNameShort="M1024 MLA AP";
		initSpeed=1500;
	};
	class OPTRE_1Rnd_C2GMLS_missiles;
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
			"OPAEX_Hardpoint_AV22"
		};
	};
	class OPTRE_Jackknife_missile;
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
		
		hardpoints[]  = {"OPTRE_Hardpoint_F99","OPAEX_Hardpoint_AV14","OPAEX_Hardpoint_AV22","OPAEX_Hardpoint_D77-TC","OPTRE_Hardpoint_D77_Guided"};

	};
	class OPTRE_3Rnd_Jackknife_missile: OPTRE_Jackknife_missile
	{
		displayName = "3x AGM-502 'Jack Knife' SALH-ATGM";
		count = 3;
		
		hardpoints[]  = {"OPTRE_Hardpoint_SabrePilot","OPTRE_Hardpoint_SabreCopilot","OPAEX_Hardpoint_UH144"};		
	};
	class PylonRack_Bomb_SDB_x4;
	class SEC_Gunship_Glidebomb_x4: PylonRack_Bomb_SDB_x4
	{
		hardpoints[]=
		{
			"OPTRE_Hardpoint_D77_Guided",
		};
		pylonWeapon="SEC_Glidebomb_Launcher";
	};
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

	class OPTRE_M1024_ASWAC_30mm_MLA: autocannon_35mm
	{
		displayName="M1024 ASW/AC 30mm MLA";
		reloadTime=0.5;
		autoFire=1;
		magazines[]=
		{
			"OPTRE_M1024_2000Rnd_30mm",
			"SEC_OPTRE_M1024_2000Rnd_30mmAP"
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
			"SEC_5000Rnd_762x51_Belt"
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