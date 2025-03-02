msc_fnc_speed = {	

	If ( (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_suit_energy" != 0) && (player getVariable "msc_active_mode" == "speed")) then
	{
		
		
		speed_chrom = ppEffectCreate ["ChromAberration",2571];
		speed_chrom ppEffectForceInNVG true;
		speed_chrom ppEffectAdjust [0.01,0.01,true];
		speed_chrom ppEffectCommit 0.5;
		speed_chrom ppEffectEnable true;
		
		speed_wetD = ppEffectCreate ["WetDistortion",2572];
		speed_wetD ppEffectForceInNVG true;
		speed_wetD ppEffectAdjust [0,0,0,1,1,1,1,0.2,0.2,0.2,0.2,2,2,5,5];
		speed_wetD ppEffectCommit 0.5;
		speed_wetD ppEffectEnable true;
		speed_colorC = ppEffectCreate ["ColorCorrections",2573];
		speed_colorC ppEffectForceInNVG true;
		speed_colorC ppEffectAdjust [1,1,0,[-0.5,-0.5,-2,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]];
		speed_colorC ppEffectCommit 0.3;
		speed_colorC ppEffectEnable true;
		
		switch true do
		{
			case (uniform player in MSC_crysis_Nanosuits):	{
				playsound "maximum_speed_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body_armor.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi_armor.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\tou_armor.rvmat"];
			};
			case (uniform player in MSC_crysis_Nanosuits2):	{
				playsound "maximum_speed_asian";
			};
			case (uniform player in MSC_crysis_Nanosuits3):	{
				playsound "maximum_speed_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\NanosuitV3_arm\arm_armor.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\NanosuitV3_body\body_armor.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\NanosuitV3_hand\hand_armor.rvmat"];
				Player  setObjectMaterialGlobal[3, "MSC_crysis\data\NanosuitV3_head\head_armor.rvmat"];
				Player  setObjectMaterialGlobal[4, "MSC_crysis\data\NanosuitV3_leg\leg_armor.rvmat"];
			};
			default {};
		};

		while {player getVariable "msc_suit_energy" > 0 && (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_active_mode" == "speed")} do {
			_unit = player;
			if ((speed player < 20)) then {
				[_unit, MSC_CRYSIS_SPEED_MODE_MODIFIER_PASSIVE] remoteExec ["setanimspeedcoef"];
			} else {
				[_unit, MSC_CRYSIS_SPEED_MODE_MODIFIER] remoteExec ["setanimspeedcoef"];
			};
			sleep 0.1;
		};
		
		ppEffectDestroy [
			speed_chrom,
			speed_wetD,
			speed_colorC
		];
		
		_unit = player;
		[_unit, 1] remoteExec ["setanimspeedcoef"];
		
	};
};