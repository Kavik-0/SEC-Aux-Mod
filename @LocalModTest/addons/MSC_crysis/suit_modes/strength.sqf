msc_fnc_strength = {	
	If ( (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_suit_energy" != 0) && (player getVariable "msc_active_mode" == "strength")) then
	{

		_landingsound = selectRandom[
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_1.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_2.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_3.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_4.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_5.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_6.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_7.wss",
			"A3\Sounds_F\characters\footsteps\concrete\concrete_run_hpf_8.wss"
		];

		
		jump_chrom = ppEffectCreate ["ChromAberration",2561];
		jump_chrom ppEffectForceInNVG true;
		jump_chrom ppEffectAdjust [0.005,0.005,true];
		jump_chrom ppEffectCommit 0.3;
		jump_chrom ppEffectEnable true;
		
		jump_wetD = ppEffectCreate ["WetDistortion",2562];
		jump_wetD ppEffectForceInNVG true;
		jump_wetD ppEffectAdjust [0,0,0,1,1,1,1,0.2,0.2,0.2,0.2,2,2,5,5];
		jump_wetD ppEffectCommit 0.5;
		jump_wetD ppEffectEnable true;
		jump_colorC = ppEffectCreate ["ColorCorrections",2563];
		jump_colorC ppEffectForceInNVG true;
		jump_colorC ppEffectAdjust [1,1,0,[2,-0.5,-0.5,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]];
		jump_colorC ppEffectCommit 0.3;
		jump_colorC ppEffectEnable true;

		switch true do
		{
			case (uniform player in MSC_crysis_Nanosuits):	{
				playsound "maximum_strength_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body_strength.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi_strength.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\tou_strength.rvmat"];
			};
			case (uniform player in MSC_crysis_Nanosuits2):	{
				playsound "maximum_strength_asian";
			};
			case (uniform player in MSC_crysis_Nanosuits3):	{
				playsound "maximum_strength_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\NanosuitV3_arm\arm_strength.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\NanosuitV3_body\body_strength.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\NanosuitV3_hand\hand_strength.rvmat"];
				Player  setObjectMaterialGlobal[3, "MSC_crysis\data\NanosuitV3_head\head_strength.rvmat"];
				Player  setObjectMaterialGlobal[4, "MSC_crysis\data\NanosuitV3_leg\leg_strength.rvmat"];
			};
			default {};
		};

		while {player getVariable "msc_suit_energy" > 0 && (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_active_mode" == "strength")} do {
			
			player setUnitRecoilCoefficient  MSC_CRYSIS_RECOIL_MODIFIER;
			player setCustomAimCoef MSC_CRYSIS_AIM_MODIFIER;
					
			if (((getpos player select 2)>0.8) && (vehicle player isEqualTo player)) then {
				player setVariable ["msc_preventfalldamage",true];
				player allowdamage true;
			};
					
			if (((getpos player select 2)<0.8) && (vehicle player isEqualTo player) && (player getVariable "msc_preventfalldamage")) then {
				player allowdamage false;
			};

			if (((getpos player select 2)<0.6) && ((velocity player select 2) >= 0) && (player getVariable "msc_preventfalldamage")) then {
				player setVariable ["msc_preventfalldamage",false];
				addCamShake [20, 1, 5];
				playsound3d ["MSC_crysis\sound\Origin\down.wss", player, false, getPosASL player, 3, 1, 50];
				sleep 0.3;
				player allowdamage true;
			};
			sleep 0.01;
		};
		
		ppEffectDestroy [
			jump_chrom,
			jump_wetD,
			jump_colorC
		];
		
		player allowdamage true;
		player setVariable ["msc_preventfalldamage",false];
		
		player setUnitRecoilCoefficient  1;
		player setCustomAimCoef 1;

	};
};



