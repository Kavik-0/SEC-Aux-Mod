msc_fnc_jump = {
	if ((vehicle player isEqualTo player) && (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable 'msc_suit_energy' > 30) && (player getVariable 'msc_active_mode' == 'strength') && ((getpos player select 2)<0.6) && !(stance player == "PRONE")) exitwith {
		
		MSC_strength_timer = 3;

		if (!(player getVariable "msc_beingshotat")) then {

			player setVariable ["msc_beingshotat", true];
			player setVariable ["msc_stopcharging", true];
			[] spawn {
				while {(MSC_strength_timer > 0) && (player getVariable "msc_active_mode" == "strength")} do {
						_timer = MSC_strength_timer;
						MSC_strength_timer = _timer - 1;
						sleep 1;
				};
				player setVariable ["msc_beingshotat", false];
				player setVariable ["msc_stopcharging", false];
			};
		};

		_vel = velocity player;
		_dir = direction player;
		_speed = MSC_CRYSIS_JUMP_FORWARD;
		if (((getCameraViewDirection player) select 2) > 0) then {
			_cameraview = ((getCameraViewDirection player) select 2);

			_vel = velocity player;
			_dir = direction player;
			_speed = 3;
				
			_vel1 = (_vel select 0) + (sin _dir * _speed);
			_vel2 = (_vel select 1) + (cos _dir * _speed);
			_vel3 = (_vel select 2) + (MSC_CRYSIS_JUMP_HIGH * (2.1 + _cameraview));
				
				
			player setVelocity [
				_vel1, 
				_vel2, 
				_vel3
			];
			
			_currentenergy = player getVariable "msc_suit_energy";
			player setVariable ["msc_suit_energy", _currentenergy - 30];
		} else {
				
			_vel = velocity player;
			_dir = direction player;
			_speed = MSC_CRYSIS_JUMP_FORWARD;
				
			_vel1 = (_vel select 0) + ((sin _dir * _speed) / 2);
			_vel2 = (_vel select 1) + ((cos _dir * _speed) / 2);
			_vel3 = (_vel select 2) + MSC_CRYSIS_JUMP_LOW;
			
			//hint format ["%1 | %2 | %3", _vel1, _vel2, _vel3];
			
			player setVelocity [
				_vel1, 
				_vel2, 
				_vel3
			];
		};
		playsound3d ["MSC_crysis\sound\Origin\jump.wss",player];
		addCamShake [20, 1, 5];
	};
};

	
	