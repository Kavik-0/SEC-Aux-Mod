msc_fnc_healing = {	

	if (!(isClass(configFile >> "CfgPatches" >> "ace_medical"))) exitwith {};
	//systemchat "script started";

	//creating necessary variables
	_MSC_crysis_bandagableWounds = [];
	_bodyPartsArray = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"];
	_limbdamage = [0,0,0,0,0,0];
	_newdamage = [0,0,0,0,0,0];
	if (isNil {player getVariable "ace_medical_bodyPartDamage"}) then {
		player setVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0], true];
	};
	if (isNil {player getvariable "ace_medical_woundbleeding"}) then {
		player setVariable ["ace_medical_woundbleeding", 0, true];
	};
	
	_loops = 0;
	
	while {uniform player in MSC_crysis_jump_enabled_suits} do {

		if (uniform player in MSC_crysis_jump_enabled_suits) then {
			_loops = _loops + 1;
			//systemchat format ["%1 %2 %3",count _MSC_crysis_bandagableWounds, _limbdamage , _loops];
			//hint format ["loop ran %1 times", _loops];
			if (count (player getVariable "ace_medical_openWounds") != 0) then {
				_MSC_crysis_bandagableWounds = [];
				{
					_x params ["", "_bodyPartN", "_amountOf", "_bleeding"];
					_bandagable = _amountOf * _bleeding > 0;
					if (_bandagable) then {
						_MSC_crysis_bandagableWounds pushback _x;
					};
				} forEach (player getVariable ["ace_medical_openWounds", []]);
				if (count _MSC_crysis_bandagableWounds != 0) then {
					_woundToTreat = selectRandom _MSC_crysis_bandagableWounds;
					_bodyPart = _woundToTreat select 1;
					_bodyPartToTreat = _bodyPartsArray select _bodyPart;
					[player,player, _bodyPartToTreat, "FieldDressing"] call ace_medical_treatment_fnc_bandage;
					player setVariable ["ace_medical_bandagedWounds", [], true];
				} else {
					player setVariable ["ace_medical_openWounds", [], true];
				};
			};

			_limbdamage = player getVariable "ace_medical_bodyPartDamage";
			_newdamage = _limbdamage apply {
				_value = _x;
				if (_value > 0) then {
					_value = _value - MSC_CRYSIS_HEALING_DAMAGE;
				};
				if (_value < 0) then {
					_value = 0;
				};
				_x = _value;
				_x
			};

			player setVariable ["ace_medical_bodyPartDamage", _newdamage, true];
	
			if (player getvariable "ace_medical_woundbleeding" == 0 && player getvariable "ace_medical_bloodVolume" < 6) then {
				_ace_medical_bloodVolume = player getvariable "ace_medical_bloodVolume";
				if ((_ace_medical_bloodVolume + MSC_CRYSIS_HEALING_BLOOD) < 6) then {
					player setvariable ["ace_medical_bloodVolume", _ace_medical_bloodVolume + MSC_CRYSIS_HEALING_BLOOD,true];
				} else {
					player setvariable ["ace_medical_bloodVolume", 6,true];
				};
			};
			if (player getvariable "ace_medical_pain" > 0) then {
				_ace_medical_pain = player getvariable "ace_medical_pain";
				player setvariable ["ace_medical_pain", _ace_medical_pain - MSC_CRYSIS_HEALING_PAIN];
			};
			if ((isClass(configFile >> "CfgPatches" >> "kat_main"))) then {
				if (player getVariable "KAT_medical_airwayStatus" < 100) then {
				_KAT_medical_airwayStatus = player getvariable "KAT_medical_airwayStatus";
				player setvariable ["KAT_medical_airwayStatus", _KAT_medical_airwayStatus + MSC_CRYSIS_HEALING_AIRWAY,true];
				};
				if (player getVariable "KAT_medical_airwayOccluded") then {
					player setVariable ["KAT_medical_airwayOccluded", false, true];
				};
				if (player getVariable "kat_airway_obstruction") then {
					player setVariable ["kat_airway_obstruction", false, true];
				};
				if (player getVariable "KAT_medical_pneumothorax") then {
					[player,player] call kat_breathing_fnc_treatmentAdvanced_chestSeal;
				};
				if (player getVariable "KAT_medical_hemopneumothorax") then {
					[player,player] call kat_breathing_fnc_treatmentAdvanced_hemopneumothorax;
				};
				if (player getVariable "KAT_medical_tensionpneumothorax") then {
					[player,player] call kat_breathing_fnc_treatmentAdvanced_tensionpneumothorax;
				};
			};
			player setVariable ["ace_medical_fractures", [0,0,0,0,0,0], true];
			player setVariable ["ace_medical_isLimping", false, true];

			private _state = [player, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState;
			if (player getVariable ["ACE_isUnconscious", false] && (player getVariable "ace_medical_bloodVolume" >= 5.5) && player getvariable "ace_medical_woundbleeding" == 0) then {
				["ace_medical_WakeUp", player] call CBA_fnc_localEvent;
				_state = [player, ace_medical_STATE_MACHINE] call CBA_statemachine_fnc_getCurrentState;
			};

			[player] call ace_medical_engine_fnc_updateDamageEffects
		};
		sleep 5;
	};	

};
		