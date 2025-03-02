msc_fnc_none = {
	If (uniform player in MSC_crysis_Nanosuits) then {
		Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body.rvmat"];
		Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi.rvmat"];
		Player  setObjectMaterialGlobal[2, "MSC_crysis\data\tou.rvmat"];
	};
	
	If (uniform player in MSC_crysis_Nanosuits2) then {
		/*
		Player  setObjectMaterialGlobal[0, "MSC_crysis\data\body.rvmat"];
		Player  setObjectMaterialGlobal[1, "MSC_crysis\data\bozi.rvmat"];
		Player  setObjectMaterialGlobal[3, "MSC_crysis\data\tou.rvmat"];
		*/
	};
	
	If (uniform player in MSC_crysis_Nanosuits3) then {
		Player  setObjectMaterialGlobal[0, "MSC_crysis\data\NanosuitV3_arm\arm.rvmat"];
		Player  setObjectMaterialGlobal[1, "MSC_crysis\data\NanosuitV3_body\body.rvmat"];
		Player  setObjectMaterialGlobal[2, "MSC_crysis\data\NanosuitV3_hand\hand.rvmat"];
		Player  setObjectMaterialGlobal[3, "MSC_crysis\data\NanosuitV3_head\head.rvmat"];
		Player  setObjectMaterialGlobal[4, "MSC_crysis\data\NanosuitV3_leg\leg.rvmat"];
	};
	player allowDamage true; 
};
		