msc_fnc_hud_start = {

	hud_chrom = ppEffectCreate ["ChromAberration",2561];
	hud_chrom ppEffectForceInNVG true;
	hud_chrom ppEffectAdjust [0.01,0.01,true];
	hud_chrom ppEffectCommit 0.3;
	hud_chrom ppEffectEnable true;
	hud_wetD = ppEffectCreate ["WetDistortion",2562];
	hud_wetD ppEffectForceInNVG true;
	hud_wetD ppEffectAdjust [0,-0.015,0.015,0,100,0,100,0.3,0.1,0.76,0.64,2,2,0,0];
	hud_wetD ppEffectCommit 0.3;
	hud_wetD ppEffectEnable true;
	
	call BIS_fnc_VRFadeOut;
		sleep 1;
		If (uniform player in MSC_crysis_Nanosuits) then {
		
		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...  </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum maximum strength...              </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 </t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initialization successful</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#BDFF9F' size='1'>C:\AchillesAI>initialize AI Link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>initialization successful</t><br/>
						<t valign='top' t align='left' t color='#BDFF9F' size='1'>Welcome, Spartan.</t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;
		
		
		};
		
		If (uniform player in MSC_crysis_Nanosuits2) then {
		
			titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...  </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 </t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 CryNet TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 CryNet TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 완전한</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 CryNet TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 완전한</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>초기화 성공ful</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e69100' size='1'>C:\DragonOperator>용 운영 체제 초기화</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>코드 초기화...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 주요 전력 원...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    시작 액추에이터...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른쪽 다리 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 다리 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        몸통 액추에이터...       완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        목 액추에이터...        완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        오른팔 액추에이터...   완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        왼쪽 팔 액추에이터...    완료</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    코드 초기화 소송/운영자 연결</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>	   코드 초기화 전술 바이저 쌍안경...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    초기화 실패한 바이저 쌍안경 없는</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    전원 공급 CryFibril 나노 섬유...</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        갑옷...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        힘...              준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        속도...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>        망토...                 준비된</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    성공</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 CryNet TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>    로딩 완전한</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>초기화 성공ful</t><br/>
						<t valign='top' t align='left' t color='#e69100' size='1'>소송 준비된</t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		
		

		};
		
		If (uniform player in MSC_crysis_Nanosuits3) then {
			
		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...  </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 </t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initialization successful</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'></t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		titleText ["<t valign='top' t align='left' t color='#e8fffc' size='1'>C:\CryNetOperatorProphet>initialize nanoOSv3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initializing...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing main power supply...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    starting actuators...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right leg actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left leg actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        torso actuators...       completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        neck actuators...        completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        right arm actuators...   completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        left arm actuators...    completed</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initializing neural interface link</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>	   initializing tactical visor binoculars...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    initialization failed binoculars unavailable</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    powering Hydrostatic Gel Layer...</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        armor lock...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        maximum strength...              ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        speed...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>        active camouflage...                 ready</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    success</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading ONI/S3/ACHILLES TACHUD v2.3</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>    loading complete</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>initialization successful</t><br/>
						<t valign='top' t align='left' t color='#e8fffc' size='1'>suit ready</t><br/>", "BLACK FADED", 0, true, true];
						
		sleep 0.1;

		
		};
		
	sleep 0.1;
	ppEffectDestroy [hud_chrom,hud_wetD];
	call BIS_fnc_VRFadeIn;
		

};