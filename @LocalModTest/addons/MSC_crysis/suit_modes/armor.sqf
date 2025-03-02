msc_fnc_armor = {
	If ( (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_suit_energy" != 0) && (player getVariable "msc_active_mode" == "armor")) then
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

		
		Armor_chrom = ppEffectCreate ["ChromAberration",2591];
		Armor_chrom ppEffectForceInNVG true;
		Armor_chrom ppEffectEnable true;
		Armor_chrom ppEffectAdjust [0.005,0.005,true];
		Armor_chrom ppEffectCommit 0.5;
		
		Armor_wetD = ppEffectCreate ["WetDistortion",2592];
		Armor_wetD ppEffectForceInNVG true;
		Armor_wetD ppEffectEnable true;
		Armor_wetD ppEffectAdjust [0,0,0,1,1,1,1,0.2,0.2,0.2,0.2,2,2,5,5];
		Armor_wetD ppEffectCommit 0.5;
		Armor_colorC = ppEffectCreate ["ColorCorrections",2593];
		Armor_colorC ppEffectForceInNVG true;
		Armor_colorC ppEffectEnable true;
		Armor_colorC ppEffectAdjust [0,1,0,[0.105,0.105,0.105,0.5],[1,1,1,0],[1,1,1,0],[1,1,0,0,0,0,10]];
		Armor_colorC ppEffectCommit 0.3;

		switch true do
		{
			case (uniform player in MSC_crysis_Nanosuits):	{
				playsound "maximum_armor_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\tou.rvmat"];
			};
			case (uniform player in MSC_crysis_Nanosuits2):	{
				playsound "maximum_armor_asian";
			};
			case (uniform player in MSC_crysis_Nanosuits3):	{
				playsound "maximum_armor_origin";
				Player  setObjectMaterialGlobal[0, "MSC_crysis\data\NanosuitV3_arm\arm.rvmat"];
				Player  setObjectMaterialGlobal[1, "MSC_crysis\data\NanosuitV3_body\body.rvmat"];
				Player  setObjectMaterialGlobal[2, "MSC_crysis\data\NanosuitV3_hand\hand.rvmat"];
				Player  setObjectMaterialGlobal[3, "MSC_crysis\data\NanosuitV3_head\head.rvmat"];
				Player  setObjectMaterialGlobal[4, "MSC_crysis\data\NanosuitV3_leg\leg.rvmat"];
			};
			default {};
		};
		
		while {player getVariable "msc_suit_energy" > 0 && (uniform player in MSC_crysis_jump_enabled_suits) && (player getVariable "msc_active_mode" == "armor")} do {
			player setUnitRecoilCoefficient  MSC_CRYSIS_RECOIL_MODIFIER_PASSIVE;
			player setCustomAimCoef MSC_CRYSIS_AIM_MODIFIER_PASSIVE;
			if (((getpos player select 2)>0.6) && (vehicle player isEqualTo player) && (player getVariable "msc_active_mode" == "armor") && !(player getVariable "msc_preventfalldamage")) then {
				player setVariable ["msc_preventfalldamage",true];
			};
			if (((getpos player select 2)<0.6) && ((velocity player select 2) == 0) && (player getVariable "msc_active_mode" == "armor") && (player getVariable "msc_preventfalldamage")) then {
				player setVariable ["msc_preventfalldamage",false];
				addCamShake [20, 1, 5];
				playsound3d [_landingsound, player, false, getPosASL player, 3, 1, 50]
			};
			player allowDamage false;
			sleep 0.01;
		};

		player allowDamage true;
		player setVariable ["msc_preventfalldamage",false];
		ppEffectDestroy [
			Armor_chrom,
			Armor_wetD,
			Armor_colorC
		];

		player setUnitRecoilCoefficient  1;
		player setCustomAimCoef 1;

	};	
};