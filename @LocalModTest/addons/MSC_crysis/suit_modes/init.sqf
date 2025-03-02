default_msc_suit_energy = 100;
player setVariable ["msc_suit_active",false];
player setVariable ["past_first_suit_init",false];

MSC_crysis_jump_enabled_suits = ["MSC_CRYSIS_Suit" , "MSC_CRYSIS_Suit_Original", "MSC_CRYSIS_Suit_O", "MSC_CRYSIS_NanosuitV3"];
MSC_crysis_helmets = ["MSC_CRYSIS_Helmet" , "MSC_CRYSIS_HelmetV3", "MSC_CRYSIS_Helmet_O"];
MSC_crysis_Nanosuits = ["MSC_CRYSIS_Suit" , "MSC_CRYSIS_Suit_Original"];
MSC_crysis_Nanosuits2 = ["MSC_CRYSIS_Suit_O"];
MSC_crysis_Nanosuits3= ["MSC_CRYSIS_NanosuitV3"];

MSC_armor_timer = 0;

MSC_CRYSIS_RECOIL_MODIFIER = 0.1;
MSC_CRYSIS_RECOIL_MODIFIER_PASSIVE = 0.8;
MSC_CRYSIS_AIM_MODIFIER = 0.0;
MSC_CRYSIS_AIM_MODIFIER_PASSIVE = 0.3;
MSC_CRYSIS_SPEED_MODIFIER_PASSIVE = 1.1;
MSC_CRYSIS_SPEED_MODE_MODIFIER = 3;
MSC_CRYSIS_SPEED_MODE_MODIFIER_PASSIVE = 1.3;
MSC_CRYSIS_JUMP_FORWARD = 3;
MSC_CRYSIS_JUMP_HIGH = 3.4;
MSC_CRYSIS_JUMP_LOW = 5;
MSC_CRYSIS_HEALING_BLOOD = 0.1;
MSC_CRYSIS_HEALING_PAIN = 0.2;
MSC_CRYSIS_HEALING_AIRWAY = 1;
MSC_CRYSIS_HEALING_DAMAGE = 0.2;

//loading scripts when packed as addon
if (true) then {
	execVM "\MSC_crysis\suit_modes\jump.sqf";
	execVM "\MSC_crysis\suit_modes\none.sqf";
	execVM "\MSC_crysis\suit_modes\cloak.sqf";
	execVM "\MSC_crysis\suit_modes\speed.sqf";
	execVM "\MSC_crysis\suit_modes\strength.sqf";
	execVM "\MSC_crysis\suit_modes\armor.sqf";
	execVM "\MSC_crysis\suit_modes\restdamage.sqf";
	execVM "\MSC_crysis\suit_modes\energy.sqf";
	execVM "\MSC_crysis\suit_modes\healing.sqf";
	execVM "\MSC_crysis\suit_modes\hud.sqf";
	execVM "\MSC_crysis\suit_modes\hudinittext.sqf";
};

//loading scripts while editing them in my mission file
if (false) then {
	execVM "MSC_crysis\suit_modes\jump.sqf";
	execVM "MSC_crysis\suit_modes\none.sqf";
	execVM "MSC_crysis\suit_modes\cloak.sqf";
	execVM "MSC_crysis\suit_modes\speed.sqf";
	execVM "MSC_crysis\suit_modes\strength.sqf";
	execVM "MSC_crysis\suit_modes\armor.sqf";
	execVM "MSC_crysis\suit_modes\restdamage.sqf";
	execVM "MSC_crysis\suit_modes\energy.sqf";
	execVM "MSC_crysis\suit_modes\healing.sqf";
	execVM "MSC_crysis\suit_modes\hud.sqf";
	execVM "MSC_crysis\suit_modes\hudinittext.sqf";
};

//Adds Keybinds
//[0x37] call OptionWheel_fnc_setWheelKey;

["MSC Nanosuit","msc_armor_key", "Maximum Armor", {
	[] spawn {
		if ((uniform player in MSC_crysis_jump_enabled_suits) && player getVariable "msc_active_mode" != "armor" && player getVariable "msc_suit_active") then {
			player setvariable ["msc_active_mode", "armor"];
			call msc_fnc_armor;
		};
	};
}, "", [0x3B, [true, false, false]]] call CBA_fnc_addKeybind;	

["MSC Nanosuit","msc_strength_key", "Maximum Strength", {
	[] spawn {
		if ((uniform player in MSC_crysis_jump_enabled_suits) && player getVariable "msc_active_mode" != "strength" && player getVariable "msc_suit_active") then {
			player setvariable ["msc_active_mode", "strength"];
			call msc_fnc_strength;
		};
	};
}, "", [0x3C, [true, false, false]]] call CBA_fnc_addKeybind;	

["MSC Nanosuit","msc_speed_key", "Maximum Speed", {
	[] spawn {
		if ((uniform player in MSC_crysis_jump_enabled_suits) && player getVariable "msc_active_mode" != "speed" && player getVariable "msc_suit_active") then {
			player setvariable ["msc_active_mode", "speed"];
			call msc_fnc_speed;
		};
	};
}, "", [0x3D, [true, false, false]]] call CBA_fnc_addKeybind;	
["MSC Nanosuit","msc_cloak_key", "Engage Cloak", {
	[] spawn {
		if ((uniform player in MSC_crysis_jump_enabled_suits) && player getVariable "msc_active_mode" != "cloak" && player getVariable "msc_suit_active") then {
			player setvariable ["msc_active_mode", "cloak"];
			call msc_fnc_cloak;
		};
	};
}, "", [0x3E, [true, false, false]]] call CBA_fnc_addKeybind;	

["MSC Nanosuit","msc_jump_key", "Super Jump", {[] spawn {call msc_fnc_jump};}, "", [0x39, [true, false, false]]] call CBA_fnc_addKeybind;	

["CAManBase", "HitPart", {
    (_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo"];

	[_this, {
		(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo"];
		if ( player getVariable "msc_suit_active" && (_target getVariable "msc_active_mode" == "armor") && (_target getVariable "msc_suit_energy" > 0) && (alive _target)) then {
			//playSound "armor_hit";
			playsound3d ["MSC_crysis\sound\origin\hit.wss", _target];
			MSC_armor_timer = 3;
			_energyloss = (_ammo select 0)*0.75;
			_hitbodypart = (_selection select 0);
			_currentenergy = _target getVariable "msc_suit_energy";
			_target setVariable ["msc_suit_energy", _currentenergy - round(_energyloss)];
			//[format ["%1 %2", _currentenergy, _energyloss]] remoteexec ['systemchat'];
			
			if (_energyloss > _currentenergy) then {
				_restDamage = (_energyloss - _currentenergy);
				[_target,_hitbodypart,_selection,_restdamage] spawn {
					[_this] call MSC_fnc_restDamage;
				};
			};

			if (!(_target getVariable "msc_beingshotat")) then {
				[_target] spawn {
					
					(_this select 0) params ["_target"];
					
					while {(MSC_armor_timer > 0) && (_target getVariable "msc_active_mode" == "armor")} do {
							_timer = MSC_armor_timer;
							MSC_armor_timer = _timer - 1;
							sleep 1;
					};
					_target setVariable ["msc_beingshotat", false];
					_target setVariable ["msc_stopcharging", false];
				};
				_target setVariable ["msc_beingshotat", true];
				_target setVariable ["msc_stopcharging", true];
			};
		};
	}] remoteExec ["call", _target];
}] call CBA_fnc_addClassEventHandler;
	
msc_fnc_suit_ready =
{	
	player setvariable ["msc_isShootingWhileCloaked", false];
	player setVariable ["msc_beingshotat", false];
	player setVariable ["msc_stopcharging", false];
	player setVariable ["msc_fallTooHigh",false];
	player setVariable ["msc_suit_active",false];
	player setvariable ["msc_active_mode", "none"];
	
	oldArmorMode = player getVariable "msc_active_mode";

	player addAction ["Activate Suit", {
	
	call msc_fnc_hud_start;
	
	if (!((_this select 0) getVariable "past_first_suit_init")) then {
		
		(_this select 0) setVariable ["past_first_suit_init",true];
		(_this select 0) addeventhandler ["Fired", {
			
			if (((_this select 0) getVariable "msc_active_mode" == "strength") && ((_this select 0) getVariable "msc_suit_energy" > 0) && (alive (_this select 0))) then {
				_currentenergy = player getVariable "msc_suit_energy"; 
				if ((_currentenergy - 10) > 0) then {
					player setVariable ["msc_suit_energy", _currentenergy - 10];
				} else {
					player setVariable ["msc_suit_energy", 0];
				};
				MSC_strength_timer = 1;

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
			};

			if (((_this select 0) getVariable "msc_active_mode" == "cloak") && ((_this select 0) getVariable "msc_suit_energy" >= 0)) then {
				player setvariable ["msc_isShootingWhileCloaked", true];
				_currentenergy = player getVariable "msc_suit_energy";
				if ((_currentenergy - 40) > 0) then {
					player setVariable ["msc_suit_energy", _currentenergy - 40];
				} else {
					player setVariable ["msc_suit_energy", 0];
				};
			};
		}];
	};
	
	call msc_fnc_suit_activation}, [], 6, false, true,"","(alive _originalTarget) && (uniform player in MSC_crysis_jump_enabled_suits) && !(player getVariable 'msc_suit_active')"];

};

msc_fnc_suit_activation = 
{	
	player setVariable ["msc_suit_active",true];
	player setVariable ["msc_acc_on", false];
	player setVariable ["msc_recoil_on",false];
	player setVariable ["msc_cloak_on", false];
	player setVariable ["msc_suit_energy", 100];
	player setVariable ["msc_preventfalldamage",false];
	player setvariable ["msc_isShootingWhileCloaked", false];
	
	//[]execVM "MSC_crysis\suit_modes\hud.sqf";

	player setvariable ["msc_active_mode", "armor"];
	
	/*if (headgear player in MSC_crysis_helmets) then {
		titleRsc ["armor_hud","PLAIN", 1, false];
	};*/
	
	[] spawn {call msc_fnc_hud_loop;};
	[] spawn {call msc_fnc_healing;};
	[] spawn {call msc_fnc_armor;};
	
	player enableFatigue false;

	if ((vehicle player isEqualTo player) && (uniform player in MSC_crysis_jump_enabled_suits) ) then {

		/*[[["Strength", "strength" ],["Cloak", "cloak"],["Armor", "armor"],["Speed", "speed"]],{ 
			if (player getVariable "msc_active_mode" != (_this select 1)) then {
				if (((player getVariable "msc_suit_energy" != 0) or !(player getVariable "msc_suit_energy" < 0))) then {
						player setvariable ["msc_active_mode", (_this select 1)];
				};
				
				[] spawn {
					
					switch (player getVariable "msc_active_mode") do {
						case "armor": {call msc_fnc_armor;};
						case "strength": {call msc_fnc_strength;};
						case "speed": {call msc_fnc_speed;};
						case "cloak": {call msc_fnc_cloak;};
						case "none": {call msc_fnc_none;};
					};
					
				};
			};		
		},0.3,0.15] call OptionWheel_fnc_setWheel;
		//[0x2F] call OptionWheel_fnc_setWheelKey;*/
		call msc_fnc_energy;
	};
};

player addEventHandler ["VisionModeChanged", {
	params ["_person", "_visionMode", "_TIindex", "_visionModePrev", "_TIindexPrev", "_vehicle", "_turret"];
	If (headgear player in MSC_crysis_helmets && vehicle player isEqualTo player) then {
		playSound "RscDisplayCurator_visionMode";
		//systemchat format ["%1 %2",_visionMode,_TIindex];
	};
}];

call msc_fnc_suit_ready;
player addEventHandler ["respawn", "call msc_fnc_suit_ready"];
