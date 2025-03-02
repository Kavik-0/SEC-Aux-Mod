msc_fnc_energy =
{	

	if (missionnamespace getvariable "ace_advanced_fatigue_enabled") then {
		oldPerformanceFactor = ace_advanced_fatigue_performanceFactor;
		oldRecoveryFactor = ace_advanced_fatigue_recoveryFactor;
	};
	//titleRsc ["armor_hud","PLAIN", 1, false];
	while {alive player && (uniform player in MSC_crysis_jump_enabled_suits)} do {

		if ((uniform player in MSC_crysis_jump_enabled_suits) && (player getvariable "msc_suit_active")) then {
			
			_currentenergy = player getVariable "msc_suit_energy";

			if ((player getVariable "msc_suit_energy" <= 0) && (uniform player in MSC_crysis_jump_enabled_suits)) then {
				
				oldArmorMode = player getVariable "msc_active_mode";
			
				player setvariable ["msc_isShootingWhileCloaked", false];
				player setVariable ["msc_suit_energy", 0];
				_currentenergy = player getVariable "msc_suit_energy";
				//player setVariable ["msc_active_mode","none"];
				call msc_fnc_none;
				playsound "cloak_deactivate";
				
				/*Energy_chrom = ppEffectCreate ["ChromAberration",2671];
				Energy_chrom ppEffectEnable true;
				Energy_chrom ppEffectForceInNVG true;
				Energy_chrom ppEffectAdjust [0.02,0.02,true];
				Energy_chrom ppEffectCommit 0.8;
				Energy_wetD = ppEffectCreate ["WetDistortion",2592];
				Energy_wetD ppEffectForceInNVG true;
				Energy_wetD ppEffectEnable true;
				Energy_wetD ppEffectAdjust [0,0,0,1,1,1,1,0.2,0.2,0.2,0.2,2,2,5,5];
				Energy_wetD ppEffectCommit 0.5;
				Energy_colorC = ppEffectCreate ["ColorCorrections",2673];
				Energy_colorC ppEffectEnable true;
				Energy_colorC ppEffectForceInNVG true;
				Energy_colorC ppEffectAdjust [1,1.5,0,[0,0,0,0],[1,1,1,1],[0.33,0.33,0.33,0],[0,0,0,0,0,0,4]];
				Energy_colorC ppEffectCommit 0.8;*/
				
				titleText ["","PLAIN"];
				
				if (isNil "ace_advanced_fatigue_enabled") then {
					player enableFatigue true;
				};
				if (missionnamespace getvariable "ace_advanced_fatigue_enabled") then {
					ace_advanced_fatigue_performanceFactor = oldPerformanceFactor;
					ace_advanced_fatigue_recoveryFactor = oldRecoveryFactor;
				};
				
				sleep 4;

				/*Energy_chrom ppEffectAdjust [0,0,true];
				Energy_chrom ppEffectCommit 0.2;
				Energy_colorC ppEffectAdjust [1,1,0,[0,0,0,0],[1,1,1,1],[0.33,0.33,0.33,0],[0,0,0,0,0,0,4]];
				Energy_colorC ppEffectCommit 0.2;*/
				
				sleep 4;
				
				//ppEffectDestroy [Energy_chrom,Energy_wetD,Energy_colorC];
				if (alive player) then {
					playsound "cloak_ready";
				};
				player setVariable ["msc_beingshotat", false];
				sleep 1;

				player setVariable ["msc_suit_energy", _currentenergy + 1];
				//player setVariable ["msc_active_mode","armor"];
				//[] spawn {call msc_fnc_armor;};
				if (isNil "ace_advanced_fatigue_enabled") then {
					player enableFatigue true;
				};
				if (alive player) then {
					switch (player getVariable "msc_active_mode") do {
						case "armor" : {
							player setVariable ["msc_active_mode","armor"];
							[] spawn {call msc_fnc_armor;};
						};   
						case "strength": {
							player setVariable ["msc_active_mode","strength"];
							[] spawn {call msc_fnc_strength;};
						};
						case "speed": {
							player setVariable ["msc_active_mode","speed"];
							[] spawn {call msc_fnc_speed;};
						};
						case "cloak": {
							player setVariable ["msc_active_mode","armor"];
							[] spawn {call msc_fnc_armor;};
						};
						default {
							player setVariable ["msc_active_mode","armor"];
							[] spawn {call msc_fnc_armor;};
						};
					};
				};
			};
			
			if ((!(player getVariable "msc_suit_energy" < 0) && (player getVariable "msc_suit_energy" > 0)) && (uniform player in MSC_crysis_jump_enabled_suits) && ((player getVariable "msc_active_mode" == "cloak") or ((player getVariable "msc_active_mode" == "speed")))) then {
				
				if ((player getVariable "msc_active_mode" == "cloak") && (player getVariable "msc_suit_energy" > 0)) then {
				
					if ((player getVariable "msc_active_mode" == "cloak") && ((((velocity player) select 0) == 0) && ((velocity player) select 1) == 0) && (player getVariable "msc_suit_energy" > 0)) then {
						player setVariable ["msc_suit_energy", _currentenergy - 1];
						sleep 0.9;
					}
					else {
						if ((player getVariable "msc_active_mode" == "cloak") && (((velocity player) select 0) > -2 && ((velocity player) select 1) > -2) && (((velocity player) select 0) < 2 && ((velocity player) select 1) < 2)) then {
							player setVariable ["msc_suit_energy", _currentenergy - 1];
							sleep 0.4;
						} else {
							player setVariable ["msc_suit_energy", _currentenergy - 1];
							//sleep 0.1;
						};
					};
				};
				
				if ((player getVariable "msc_active_mode" == "speed") && ((speed player < 20) or !(vehicle player isEqualTo player)) && (player getVariable "msc_suit_energy" <= 100)) then {
					player setVariable ["msc_suit_energy", _currentenergy + 1];
				};
				
				if ((player getVariable "msc_active_mode" == "speed") && (vehicle player isEqualTo player) && (speed player > 20) && (player getVariable "msc_suit_energy" > 0)) then {
					player setVariable ["msc_suit_energy", _currentenergy - 2];
				};
				
			};
			
			if ((player getVariable "msc_suit_energy" < 100 ) && (player getVariable "msc_suit_energy" != 0) && (uniform player in MSC_crysis_jump_enabled_suits) && (!(player getVariable "msc_active_mode" == "cloak") && !(player getVariable "msc_active_mode" == "speed")) && !(player getVariable "msc_stopcharging")) then {
				player setVariable ["msc_suit_energy", _currentenergy + 1];
			};
			if (player getVariable "msc_suit_energy" > 100) then {
				player setVariable ["msc_suit_energy", 100];
			};
			if (missionnamespace getvariable "ace_advanced_fatigue_enabled") then {
				ace_advanced_fatigue_performanceFactor = 500;
				ace_advanced_fatigue_recoveryFactor = 500;
				ace_advanced_fatigue_anReserve = 2300;
			};
			if (!(player getVariable "msc_active_mode" == "speed") && (speed player > 11)) then {
				_unit = player;
				[_unit, MSC_CRYSIS_SPEED_MODIFIER_PASSIVE] remoteExec ["setanimspeedcoef"];
			};
			if (!(player getVariable "msc_active_mode" == "speed") && (speed player < 11)) then {
				_unit = player;
				[_unit, 1] remoteExec ["setanimspeedcoef"];
			};
		};
		sleep 0.1;
	};	
	player setVariable ["msc_suit_active",false];
	player setVariable ["msc_active_mode", "none"];
	player setVariable ["msc_acc_on", false];
	player setVariable ["msc_recoil_on",false];
	player setVariable ["msc_cloak_on", false];
	player setVariable ["msc_suit_energy", 0];

	_unit = player;
	[_unit, 1] remoteExec ["setanimspeedcoef"];
	
	titleText ["","PLAIN"];
	
	MSC_crysis_bandagableWounds = [];
	//[0x37] call OptionWheel_fnc_setWheelKey;
	if (isNil "ace_advanced_fatigue_enabled") then {
		player enableFatigue true;
	};
};
		