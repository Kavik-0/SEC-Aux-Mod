class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				isCopilot=1;
				CanEject=0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev=-51;
				maxElev=9;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Splits_Gunner_Pelican";
				gunnerInAction = "Splits_Gunner_Pelican";
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				precisegetinout=1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments="Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				commanding = -2;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
				playerPosition=3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "lever_pilot";
				gunnerRightHandAnimName = "stick_copilot";
				//gunnerRightLegAnimName = "OtocHlave";
								//gunnerLeftLegAnimName = "OtocHlave";
				memoryPointGun = "machinegun";
				weapons[] = { "Splits_M370_70mm_autocannon", "Laserdesignator_mounted"  };
				magazines[] =
				{
					"Splits_1200Rnd_Cannon_70mm_M370_MP",
					"Splits_1200Rnd_Cannon_70mm_M370_HE",
					"Laserbatteries"
				};
				memoryPointGunnerOptics = "PIP2_pos";
				memoryPointGunnerOutOptics= "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
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
						opticsDisplayName="WFOV";
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
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						initAngleX=0;
						initAngleY=0;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
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
			class RearDoorGun: MainTurret
			{
				showAsCargo=1;
				minElev=-35;
				maxElev=15;
				initElev=0;
				minTurn=120; //35
				maxTurn=240;
				initTurn=180;
				isCopilot=0;
				stabilizedInAxes=3;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				gunnerAction = "Splits_Rear_Gunner_Pelican";
				gunnerInAction = "Splits_Rear_Gunner_Pelican";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				ejectDeadGunner = 0;
				body="rearturret";
				gun="reargun";
				turretAxis="reargun_turretaxis";
				gunAxis="reargun_gunaxis";
				gunnerType="OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				animationSourceBody="rearturret"; //replace meee
				animationSourceGun="reargun"; //replace meee
				selectionFireAnim="zasleh3";
				proxyIndex=26;
				gunnerName="Rear Gunner";
				weapons[]=
				{
					"Splits_M247_Coax"
				};
				magazines[] = { "Splits_1200Rnd_762x51_AP_Mag_Tracer" };
				commanding=-3;
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				primaryGunner=0;
				primaryObserver = 0;
				hideWeaponsGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				memoryPointGun="usti hlavne3";
				memoryPointGunnerOptics="reargunview";
				gunnerCompartments="Compartment26";
				gunnerLeftHandAnimName="rear_gun";
				gunnerRightHandAnimName="rear_gun";
				gunnerLeftLegAnimName="gunner_2_legs";
				gunnerRightLegAnimName="gunner_2_legs";
				gunnerOpticsModel="";
				memoryPointsGetInGunner="pos_reargunner";
				memoryPointsGetInGunnerDir="pos_reargunner_dir";
				canUseScanners=0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
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
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Hitpoints
				{
				};
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger (Left door)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 10;
				minTurn = -50;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger (Right door)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -25;
				maxTurn = 50;
				minTurn = -10;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="Splits_Observer_Pelican";
				gunnerInAction="Splits_Observer_Pelican";
				gunnerType="OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				gunnerName="Pelican Observer Seat";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment25";
				proxyIndex=25;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment14";
				proxyIndex=14;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment15";
				proxyIndex=15;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_06: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_02_Pelican"; // Splits_Standing_Seat_Left_03_Pelican unhide weapon
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment17";
				proxyIndex=17;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_07: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_03_Pelican";
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment19";
				proxyIndex=19;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_08: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_01_Pelican";
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment21";
				proxyIndex=21;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_09: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Left_02_Pelican";
				gunnerName="Standing Seat Left";
        memoryPointsGetInGunner = "pos_cargo_l";
 				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
        gunnerCompartments = "Compartment23";
				proxyIndex=23;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_10: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_01_Pelican"; //Splits_Standing_Seat_Right_01_Pelican unhide weapon
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment13";
				proxyIndex=13;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_11: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_03_Pelican"; //Splits_Standing_Seat_Right_02_Pelican hide weapon
				gunnerInAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment16";
				proxyIndex=16;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_12: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_04_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_04_Pelican";
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment18";
				proxyIndex=18;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_13: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_03_Pelican";
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment20";
				proxyIndex=20;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_14: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_01_Pelican";
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment22";
				proxyIndex=22;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 0;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
			class CargoTurret_15: CargoTurret
			{
				gunnerAction="Splits_Standing_Seat_Right_02_Pelican";
				gunnerInAction="Splits_Standing_Seat_Right_02_Pelican";
				gunnerName="Standing Seat Right";
        memoryPointsGetInGunner = "pos_cargo_r";
 				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
        gunnerCompartments = "Compartment24";
				proxyIndex=24;
				isPersonTurret=0;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				forceHideGunner=0;
				canHideGunner=0;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				hideWeaponsGunner = 1;
				allowLauncherIn=0;
				allowLauncherOut=0;
			};
		};
		