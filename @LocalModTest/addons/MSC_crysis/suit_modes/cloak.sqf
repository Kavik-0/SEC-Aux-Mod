msc_fnc_cloak =
{	
	If ((uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_suit_energy" != 0) && (player getVariable "msc_active_mode" == "cloak")) then
	{
		_unit = player;
		_oldstance = "START";
		_cloakHelper = "Land_HelipadEmpty_F" createVehicle getpos player;
		_cloakHelper attachto [player,[0,0,0],"pelvis"];

		_hitbox = "MSC_cloak_collision" createVehicle [0,0,0];

		[[_unit,_cloakHelper], {
			_unit = _this select 0;
			_cloakHelper = _this select 1;
			[_unit,_cloakHelper] spawn msc_fnc_cloak_createParticles;
		}] remoteExec ["spawn"];
		
		Cloak_chrom = ppEffectCreate ["ChromAberration",2581];
		Cloak_chrom ppEffectForceInNVG true;
		Cloak_chrom ppEffectEnable true;
		Cloak_chrom ppEffectAdjust [0.02,0.02,true];
		Cloak_chrom ppEffectCommit 0.5;
		Cloak_wetD = ppEffectCreate ["WetDistortion",2582];
		Cloak_wetD ppEffectForceInNVG true;
		Cloak_wetD ppEffectEnable true;
		Cloak_wetD ppEffectAdjust [0,0,0,1,1,1,1,0.2,0.2,0.2,0.2,2,2,5,5];
		Cloak_wetD ppEffectCommit 0.5;
		Cloak_colorC = ppEffectCreate ["ColorCorrections",2583];
		Cloak_colorC ppEffectForceInNVG true;
		Cloak_colorC ppEffectEnable true;
		Cloak_colorC ppEffectAdjust [1,1,0,[0,0,2,0.5],[0,0,0,1],[0,0,0,1],[1,1,0,0,0,0,10]];
		Cloak_colorC ppEffectCommit 0.3;
		
		switch true do
		{
			case (uniform player in MSC_crysis_Nanosuits):	{
				playsound "cloak_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\tou.rvmat"];
			};
			case (uniform player in MSC_crysis_Nanosuits2):	{
				playsound "cloak_asian";
			};
			case (uniform player in MSC_crysis_Nanosuits3):	{
				playsound "cloak_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\NanosuitV3_arm\arm.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\NanosuitV3_body\body.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\NanosuitV3_hand\hand.rvmat"];
				Player  setObjectMaterialGlobal[3, "MSC_crysis\data\NanosuitV3_head\head.rvmat"];
				Player  setObjectMaterialGlobal[4, "MSC_crysis\data\NanosuitV3_leg\leg.rvmat"];
			};
			default {};
		};
		
		player setCaptive true;
		_unit = player;
		[_unit, true] remoteExec ["hideobject"];

		[] spawn {
			sleep 0.1;
			player hideobject false;
		};

		while {player getVariable "msc_suit_energy" > 0 && (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_active_mode" == "cloak") && alive _hitbox} do {
			if (_oldstance != stance player) then {
				_oldstance = stance player;
				deleteVehicle _hitbox;
				switch (stance player) do
				{
					case "STAND" : {
						_hitbox = "MSC_cloak_collision" createVehicle [0,0,0];
						_hitbox attachto [player,[0.03,0.1,0.8]];
						[_hitbox, {
							[_this] call msc_fnc_cloak_eventhandler;
						}] remoteExec ["call"];
					};   
					case "CROUCH": {
						_hitbox = "MSC_cloak_collision_crouch" createVehicle [0,0,0];
						_hitbox attachto [player,[0.03,0.15,0.5]];
						[_hitbox, {
							[_this] call msc_fnc_cloak_eventhandler;
						}] remoteExec ["call"];
					};
					case "PRONE": {
						_hitbox = "MSC_cloak_collision_prone" createVehicle [0,0,0];
						_hitbox attachto [player,[0.1,-0.1,0.2]];
						[_hitbox, {
							[_this] call msc_fnc_cloak_eventhandler;
						}] remoteExec ["call"];
					};
					default {};
				};
			};
			sleep 0.5;
		};
		
		ppEffectDestroy [
			Cloak_chrom,
			Cloak_wetD,
			Cloak_colorC
		];
		
		player setCaptive false;
		deleteVehicle _hitbox;
		deleteVehicle _cloakHelper;
		/*{
			if (typeOf _x == "Land_VR_CoverObject_01_standHigh_F") then {
				detach _x,
				deleteVehicle _x;
			};
		} forEach attachedObjects player;*/
		player setVariable ["msc_cloak_on",false];
		_unit = player;
		[_unit, false] remoteExec ["hideobject"];
	};
};

msc_fnc_cloak_eventhandler = {
	(_this select 0) addEventHandler ["HitPart",
	{
		(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
		_unit = attachedTo _target;
		//[format ["%1 %2",_target, _ammo]] remoteexec ['hint'];
		deletevehicle _target;
		[[_unit,_ammo], {
			_this params ["_unit", "_ammo"];
			//[format ["%1", _this]] remoteexec ['systemchat'];
			if ((_unit getVariable "msc_suit_energy" >= 0) && (alive _unit)) then {
				playsound3d ["MSC_crysis\sound\origin\hit.wss", _unit];
				MSC_armor_timer = 3;
				_energyloss = (_ammo select 0)*2;
				_hitbodypart = selectRandom ["Head","Body","LeftArm","RightArm","LeftArm","RightArm"];
				_currentenergy = _unit getVariable "msc_suit_energy";
				_unit setVariable ["msc_suit_energy", _currentenergy - _energyloss];
				_unit setVariable ["msc_beingshotat", true];
				_unit setVariable ["msc_stopcharging", true];
				//[format ["%1 %2",_energyloss, _currentenergy]] remoteexec ['systemchat'];
				if (_energyloss > _currentenergy) then {
					_restDamage = ((_energyloss/2) - _currentenergy);
					[_unit,_hitbodypart,_selection,_restdamage] spawn {
						[_this] call MSC_fnc_restDamage;
					};
				};
				playsound "cloak_deactivate";
				_unit setVariable ["msc_active_mode","armor"];
				[] spawn {call msc_fnc_armor;};
				[_unit] spawn {
				
					(_this select 0) params ["_unit"];
					
					while {(MSC_armor_timer > 0) && (_unit getVariable "msc_active_mode" == "armor")} do {
						_timer = MSC_armor_timer;
						MSC_armor_timer = _timer - 1;
						sleep 1;
					};
					_unit setVariable ["msc_beingshotat", false];
					_unit setVariable ["msc_stopcharging", false];
				};
			};
		}] remoteExec ["call", _unit];
	}];
};

msc_fnc_cloak_createParticles = {

	_unit = _this select 0;
	_cloakHelper = _this select 1;
	if (isNull _unit) exitWith {};
	if (!hasInterface) exitWith {};
	_dropPoints = [
		["head", 0.6, [0,0,0]],
		["spine3", 0.8, [0,0,0]],
		["pelvis", 0.6, [0,0,0]],
		["leftforearm", 0.5, [0,0,0]],
		["leftforearmroll", 0.4, [0,0,0]],
		["rightforearm", 0.5, [0,0,0]],
		["rightforearmroll", 0.4, [0,0,0]],
		["leftleg", 0.6, [0,0,0]],
		["leftfoot", 0.5, [0,0,0]],
		["rightleg", 0.6, [0,0,0]],
		["rightfoot", 0.5, [0,0,0]]
	];
	while {(alive _cloakHelper) && alive _unit} do {
		waitUntil {sleep 0.5;(vehicle _unit == _unit)};
		_emitterArray = [];
		{
			_x params ["_memPoint", "_size", "_offset"];

			_distort = "#particlesource" createVehicleLocal (getPosATL _unit);
			_distort attachTo [_unit, _offset, _memPoint];

			_distort setParticleParams [
				["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1],
				"","Billboard",
				1,
				0.12,
				[0, 0, 0],
				[0, 0, 0],
				17,
				10,
				7.9,
				0, 
				[_size],
				[[0,0,0,0.7]],
				[0.08],
				1,
				0,
				"",
				"",
				_distort
			];
			_distort setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0, 0, 0, 0],1,0];
			_distort setParticleCircle [0,[0, 0, 0]];
			_distort setDropInterval 0.04; //0.08

			_emitterArray pushBackUnique _distort;
		} forEach _dropPoints;

		waitUntil {sleep 0.1; (!(alive _cloakHelper) OR (player distance _unit > 100) OR (vehicle _unit != _unit))};

		{
			deleteVehicle _x;
		} forEach _emitterArray;

		while {player distance _unit > 100 && (alive _cloakHelper) && (vehicle _unit == _unit)} do {
			if (player distance _unit < 1000) then {
				drop [
					["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1],
					"","Billboard",
					1,
					0.2,
					[0, 0, 0],
					[0, 0, 0],
					17,
					10,
					7.9,
					0, 
					[1.3],
					[[0,0,0,0.7]],
					[0.08],
					1,
					0,
					"",
					"",
					_cloakHelper
				];
			};
			sleep 0.1;
		};
	};
};
//waitUntil {sleep 0.1; !(alive _cloakHelper)};

/*
["head", 0.6, [0,0,0]],
["spine3", 0.8, [0,0,0]],
["pelvis", 0.6, [0,0,0]],
["leftforearm", 0.5, [0,0,0]],
["leftforearmroll", 0.4, [0,0,0]],
["rightforearm", 0.5, [0,0,0]],
["rightforearmroll", 0.4, [0,0,0]],
["leftleg", 0.6, [0,0,0]],
["leftfoot", 0.5, [0,0,0]],
["rightleg", 0.6, [0,0,0]],
["rightfoot", 0.5, [0,0,0]]
*/