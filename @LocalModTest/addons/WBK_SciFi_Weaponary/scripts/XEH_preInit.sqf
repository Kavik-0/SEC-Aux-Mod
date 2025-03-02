WBK_SciFi_CreateScriptedDeathAnim = {
	_killed = _this select 0;
	_attacker = _this select 1;
	if (!(isNull objectParent _killed) or (_attacker == _killed) or !(local _killed) or (unitIsUAV (vehicle _killed)) or (isNull _killed) or (getText (configfile >> 'CfgVehicles' >> typeOf _killed >> 'moves') != 'CfgMovesMaleSdr') or !(isNil {_killed getVariable "WBK_AI_ISZombie"}) or !(isNil {_killed getVariable "IMS_ISAI"})) exitWith {};
	switch true do {
		case (currentWeapon _attacker in ["WRS_Weapon_ShockGun","WRS_Weapon_ShockGun_Arid","WRS_Weapon_ShockGun_Black","WRS_Weapon_ShockGun_Corpo","WRS_Weapon_ShockGun_Proto","WRS_Weapon_ShockGun_Snow","WRS_Weapon_ShockGun_Woodland"]): {
			[_killed, {
				if (isDedicated) exitWith {};
				_unit_afect = _this; 
				_bbr = boundingBoxReal vehicle _unit_afect; 
				_p1 = _bbr select 0; 
				_p2 = _bbr select 1; 
				_maxWidth = abs ((_p2 select 0) - (_p1 select 0)); 
				_maxLength = abs ((_p2 select 1) - (_p1 select 1)); 
				_maxHeight = abs ((_p2 select 2) - (_p1 select 2)); 
				_e_static = "#particlesource" createVehicleLocal (getPos _unit_afect); 
				_e_static setParticleCircle [0,[0,0,0]]; 
				_e_static setParticleRandom [0.2,[_maxWidth/4,_maxLength/4,_maxHeight],[0,0,0],0,0.001,[0,0,0,1],1,0]; 
				_e_static setParticleParams [["\A3\data_f\blesk1",1,0,1],"","SpaceObject",1,0.2,[0,0,0],[0,0,0],0,10,7.9,0,[0.002,0.002],[[1,2,1,1],[1,1,1,1]],[0.08], 1, 0, "", "", _unit_afect]; 
				_e_static setDropInterval 0.01; 
				[_e_static] spawn {_de_sters = _this select 0;sleep 2;deleteVehicle _de_sters};
			}] remoteExec ["spawn",0];
			switch true do {
				case ((stance _killed == "PRONE") or (stance _killed == "UNDEFINED")): {};
				case ((_killed distance _attacker) <= 10): {
					if (((_killed worldToModel (_attacker modelToWorld [0, 0, 0])) select 1) < 0) exitWith {
						[_killed,"shockgun_death_1"] remoteExec ["switchMove",0];
						_killed setVelocityModelSpace [0,5,1];
					};
					[_killed,"shockgun_death_2"] remoteExec ["switchMove",0];
					_killed setVelocityModelSpace [0,-5,1];
				};
				default {[_killed,"shockgun_death_3"] remoteExec ["switchMove",0];};
			};
		};
		case ((currentMagazine _attacker == "WRS_Shotgun_Magazine_DragonBreath") && (currentWeapon _attacker in ["WRS_Weapon_ShotGun","WRS_Weapon_ShotGun_Arid","WRS_Weapon_ShotGun_Black","WRS_Weapon_ShotGun_Police","WRS_Weapon_ShotGun_SNOW","WRS_Weapon_ShotGun_Woodland"])): {
			[_killed,{
				if (isDedicated) exitWith {};
				_object = _this;
				_rndBone = selectRandom ["spine3","head"];
				_smlfirelight = "#lightpoint" createVehicleLocal (getpos _object);
				_smlfirelight attachTo [_object,[0,0,0],_rndBone];
				_smlfirelight setLightAmbient [1, 0.3, 0.1];
				_smlfirelight setLightColor [1, 0.3, 0.1];
				_smlfirelight setLightBrightness 0.41;
				_source01 = "#particlesource" createVehicleLocal (getPosATL _object);
				_source01 setParticleClass "AirFireSparks";
				_source01 attachTo [_object,[0,0,0],_rndBone];
				_source02 = "#particlesource" createVehicleLocal (getPosATL _object);
				_source02 setParticleClass "SmallDestructionSmoke";
				_source02 attachTo [_object,[0,0,0],_rndBone];
				uiSleep 20;
				deleteVehicle _smlfirelight;
				deleteVehicle _source01;
				deleteVehicle _source02;
			}] remoteExec ["spawn",0];
		};
	};
};

WBK_SciFi_ShockGunParticle = {  
	_obj = _this select 0; 
	_weaponCheck = _this select 1;
	switch true do {
		case (_weaponCheck in ["WRS_Weapon_ShockGun","WRS_Weapon_ShockGun_Arid","WRS_Weapon_ShockGun_Black","WRS_Weapon_ShockGun_Corpo","WRS_Weapon_ShockGun_Proto","WRS_Weapon_ShockGun_Snow","WRS_Weapon_ShockGun_Woodland"]): {
			[_obj,{
				if (isDedicated) exitWith {};
				_smlfirelight = "#lightpoint" createVehicleLocal (getPos _this);  
				_smlfirelight attachTo [_this,[-0.2,0.2,-0.2],"leftHand",true];  
				_smlfirelight setLightAmbient [0.3, 0.7, 1];     
				_smlfirelight setLightColor [0.3, 0.7, 1];  
				_smlfirelight setLightBrightness 0.25;  
				_smlfirelight setLightUseFlare true;  
				_smlfirelight setLightDayLight true;  
				_smlfirelight setLightFlareSize 3.5;  
				_smlfirelight setLightFlareMaxDistance 300;   
				_electra = "#particlesource" createVehicleLocal position _this; 
				_electra attachTo [_this,[-0.2,0.2,-0.2],"leftHand",true]; 
				_electra setParticleCircle [0, [0, 0, 0]]; 
				_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
				_electra setDropInterval 0.01;  
				_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.4, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.003,0.003,0.003], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true]; 
				uisleep 0.1;
				deleteVehicle _smlfirelight;
				deleteVehicle _electra;
			}] remoteExec ["spawn",0];
		};
		case ((currentMagazine _obj == "WRS_Shotgun_Magazine_DragonBreath") && (_weaponCheck in ["WRS_Weapon_ShotGun","WRS_Weapon_ShotGun_Arid","WRS_Weapon_ShotGun_Black","WRS_Weapon_ShotGun_Police","WRS_Weapon_ShotGun_SNOW","WRS_Weapon_ShotGun_Woodland"])): {
			[_obj,{
				if (isDedicated) exitWith {};
				_smlfirelight = "#lightpoint" createVehicleLocal (getPos _this);  
				_smlfirelight attachTo [_this,[-0.3,0.3,-0.3],"leftHand",true];  
				_smlfirelight setLightAmbient [1,0.4,0.1];     
				_smlfirelight setLightColor [1,0.4,0.1];  
				_smlfirelight setLightBrightness 1;  
				_smlfirelight setLightUseFlare true;  
				_smlfirelight setLightDayLight true;  
				_smlfirelight setLightFlareSize 3.5;  
				_smlfirelight setLightFlareMaxDistance 300;   
				_flow_1 = _this weaponDirection currentWeapon _this vectorMultiply 5;
				_electra = "#particlesource" createVehicleLocal position _this; 
				_electra attachTo [_this,[-0.3,0.3,-0.3],"leftHand",true]; 
				_electra setParticleCircle [0, [0, 0, 0]];
				_electra setParticleRandom [1, [0.05, 0.05, 0.1], [2, 2, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0];
				_electra setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1, [0,0,0], _flow_1, 0, 20, 7.9, 0, [0.3,0.3,0.05], [[1, 0.4, 0.1, 1], [1, 0.4, 0.1, 1], [1, 0.4, 0.1, 0]], [0.1], 1, 0, "", "",_electra,0,true,0.3,[[255, 125, 30, 1], [255, 125, 30, 0.7], [255, 125, 30, 0.3]]];
				_electra setDropInterval 0.001;
				playSound3D [selectRandom ["\WBK_SciFi_Weaponary\sounds\dragonBreath_1.ogg","\WBK_SciFi_Weaponary\sounds\dragonBreath_2.ogg","\WBK_SciFi_Weaponary\sounds\dragonBreath_3.ogg"],_electra,false,getPos _electra,5,1,300,0,true]; 
				uisleep 0.1;
				deleteVehicle _smlfirelight;
				deleteVehicle _electra;
			}] remoteExec ["spawn",0];
		};
	};
};

WBK_fnc_weaponEvents = {
	_unit = _this select 0;
	if !(local _unit) exitWith {};
	_weapon = _this select 1;
	_muzzle = currentMuzzle _unit;
	switch true do {
		case ((_weapon isKindOf ["WRS_Weapon_Sniper_Bolt", configFile >> "CfgWeapons"]) and ((_unit ammo currentWeapon _unit) > 0)): {
			if !(isPlayer _unit) exitWith {
				uiSleep 0.1;
				_unit playActionNow "SCI_FI_WEAPON_SNIPERBOLT_BOLT";
				playSound3D ["WBK_SciFi_Weaponary\sounds\boomslang_bolt.ogg", _unit, false, aimPos _unit, 2, 1, 20];
			};
			waitUntil {_unit setWeaponReloadingTime [_unit,_muzzle,1]; (inputAction "DefaultAction" == 0)};
			_unit setWeaponReloadingTime [_unit,_muzzle,1];
			uiSleep 0.1;
			_unit playActionNow "SCI_FI_WEAPON_SNIPERBOLT_BOLT";
			playSound3D [selectRandom ["\WBK_SciFi_Weaponary\sounds\boomslang_bolt.ogg","\WBK_SciFi_Weaponary\sounds\boomslang_bolt1.ogg"], _unit, false, aimPos _unit, 1.5, 1, 40,0,false];
		};
		default {};
	};
};


WBK_WRS_Hit_Script = {
(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
	if (((_ammo select 4) != "Shotgin_NonLethalRound") || (getText (configfile >> 'CfgVehicles' >> typeOf _target >> 'moves') != 'CfgMovesMaleSdr')) exitWith {};
	[_target, [_shooter vectorModelToWorld [0,500,100], _target selectionPosition (_selection select 0), false]] remoteExec ["addForce", _target];
};