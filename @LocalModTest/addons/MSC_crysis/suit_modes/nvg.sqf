/*
while {(uniform player in MSC_crysis_jump_enabled_suits)} do {

	sleep 0.05;
	if ((currentVisionMode player == 1) && !(player getVariable "color_inverted") && !(player getVariable "msc_active_mode" == "cloak")) then {
		
		player setVariable ["color_inverted",true];
		
		nanovision_colorI = ppEffectCreate ["ColorInversion",2584];
		nanovision_colorI ppEffectForceInNVG true;
		nanovision_colorI ppEffectEnable true;
		nanovision_colorI ppEffectAdjust [0.1,0.1,0];
		nanovision_colorI ppEffectCommit 0.1;
	
	};

	if ((currentVisionMode player != 1) && (player getVariable "color_inverted")) then {
		
		player setVariable ["color_inverted",false];
		ppEffectDestroy [nanovision_colorI];
	
	};

};
*/