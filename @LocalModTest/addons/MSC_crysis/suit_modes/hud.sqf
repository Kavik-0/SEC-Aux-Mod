msc_fnc_hud_loop = {
	#define __dsp (uiNamespace getVariable "MSC_CRY_GUI_Display")
	#define __ctrlenergy (__dsp displayCtrl 10860)
	#define __ctrlgrid (__dsp displayCtrl 10861)
	#define __ctrldirection (__dsp displayCtrl 10862)
	#define __ctrlhealth (__dsp displayCtrl 10863)
	#define __ctrlrange (__dsp displayCtrl 10864)
	#define __ctrlammo (__dsp displayCtrl 10865)
	#define __ctrlmagazine (__dsp displayCtrl 10866)


	#define __overlay (uiNamespace getVariable "MSC_CRY_OVERLAY_BASE")
	#define __ctrlframe (__overlay displayCtrl 1200)
	#define __ctrlmode (__overlay displayCtrl 1201)
	#define __ctrlenergybar (__overlay displayCtrl 1203)
	#define __ctrlenergyindicator (__overlay displayCtrl 1204)
	#define __ctrlenergyicon (__overlay displayCtrl 1205)
	#define __ctrlhealthbar (__overlay displayCtrl 1207)
	#define __ctrlhealthindicator (__overlay displayCtrl 1208)
	#define __ctrlhealthicon (__overlay displayCtrl 1209)


	disableSerialization;

	("MSC_CRY_OVERLAY_LAYER" call BIS_fnc_rscLayer)cutRsc["MSC_CRY_HUD","plain", 1, false];
	("MSC_CRY_HUD_LAYER" call BIS_fnc_rscLayer)cutRsc["MSC_CRY_OVERLAY_BASE","plain", 1, false];
	("MSC_CRY_TEXT_LAYER" call BIS_fnc_rscLayer)cutRsc["MSC_CRY_INFO","plain", 1, false];

	_hudColor = [0.745,0.996,0.655,0.25];
	_hudTextColor = [0.741, 1.000, 0.624,0.41];

	switch true do
	{
		case (uniform player in MSC_crysis_Nanosuits):	{
			_hudColor = [0.745,0.996,0.655,0.25];
			_hudTextColor = [0.741, 1.000, 0.624,0.81];
		};
		case (uniform player in MSC_crysis_Nanosuits2):	{
			_hudColor = [1.000, 0.827, 0.404,0.25];
			_hudTextColor = [1.000, 0.827, 0.404,0.81];
		};
		case (uniform player in MSC_crysis_Nanosuits3):	{
			_hudColor = [0.910, 1.000, 0.988,0.25];
			_hudTextColor = [0.910, 1.000, 0.988,0.81];
		};
		default {
			_hudColor = [0.745,0.996,0.655,0.25];
			_hudTextColor = [0.741, 1.000, 0.624,0.81];
		};
	};

	__ctrlenergy ctrlSetTextColor _hudTextColor;
	__ctrldirection ctrlSetTextColor _hudTextColor;
	__ctrlgrid ctrlSetTextColor _hudTextColor;
	__ctrlhealth ctrlSetTextColor _hudTextColor;
	__ctrlrange ctrlSetTextColor _hudTextColor;
	__ctrlammo ctrlSetTextColor _hudTextColor;
	__ctrlmagazine ctrlSetTextColor _hudTextColor;

	__ctrlframe ctrlSetTextColor _hudColor;
	__ctrlmode ctrlSetTextColor _hudTextColor;
	//__ctrlenergyicon ctrlSetTextColor _hudColor;
	//__ctrlhealthicon ctrlSetTextColor _hudColor;

	__ctrlenergy ctrlCommit 0;
	__ctrldirection ctrlCommit 0;
	__ctrlgrid ctrlCommit 0;
	__ctrlhealth ctrlCommit 0;
	__ctrlrange ctrlCommit 0;
	__ctrlammo ctrlCommit 0;
	__ctrlmagazine ctrlCommit 0;

	__ctrlframe ctrlCommit 0;
	__ctrlmode ctrlCommit 0;
	//__ctrlenergyicon ctrlCommit 0;
	//__ctrlhealthicon ctrlCommit 0;

	__ctrlenergyindicator progressSetPosition 1;
	__ctrlhealthindicator progressSetPosition 1;
	_oldArmorMode = player getVariable "msc_active_mode";
	_currenthealth = (((player getVariable "ace_medical_bloodVolume")-3)/3)*100;
	_compatibleMagazines = currentWeapon (vehicle player) call CBA_fnc_compatibleMagazines;
	_availableMagCount = {_x in _compatibleMagazines} count magazines (vehicle player);
	_currentAmmo = (vehicle player) ammo currentWeapon (vehicle player);

	sleep 0.1;

	while{uniform player in MSC_crysis_jump_enabled_suits}do{
		sleep 0.05;
		_currentenergy = round(player getVariable "msc_suit_energy");
		_currenthealth = (((player getVariable "ace_medical_bloodVolume")-3)/3)*100;
		__ctrlenergybar progressSetPosition (_currentenergy/100);
		__ctrlhealthbar progressSetPosition (_currenthealth/100);

		if ((vehicle player) != player) then {
			if ((weaponState [(vehicle player),((assignedVehicleRole player) select 1)] select 0) != "") then {
				_compatibleMagazines = (weaponState [(vehicle player),((assignedVehicleRole player) select 1)] select 3);
				_availableMagCount = {_x in _compatibleMagazines} count ((vehicle player) magazinesTurret [((assignedVehicleRole player) select 1),false]);
				_currentAmmo = (weaponState [(vehicle player),((assignedVehicleRole player) select 1)] select 4);
				if (_availableMagCount > 0) then {
					_availableMagCount = _availableMagCount - 1;
				};
			} else {
				_availableMagCount = "--";
				_currentAmmo = "---";
			};
		} else {
			if (((weaponState (vehicle player)) select 0) == ((weaponState (vehicle player)) select 1)) then {
				_compatibleMagazines = currentWeapon (vehicle player) call CBA_fnc_compatibleMagazines;
			} else {
				_compatibleMagazines = [configFile >> "CfgWeapons" >> ((weaponState (vehicle player)) select 0) >> ((weaponState (vehicle player)) select 1)] call CBA_fnc_compatibleMagazines;
			};
			
			_availableMagCount = {_x in _compatibleMagazines} count magazines (vehicle player);
			_currentAmmo = (weaponState (vehicle player)) select 4;
		};

		_ins = lineIntersectsSurfaces [AGLToASL positionCameraToWorld [0,0,0],AGLToASL positionCameraToWorld [0,0,5000],vehicle player,objNull,true,1,"FIRE","NONE"];
		_cursor_distance = if (count _ins > 0) then [{(_ins select 0 select 0) vectorDistance (eyepos player)},{5000}];
		_aim_dist_txt = if (count _ins > 0) then [{str(round _cursor_distance)},{"---"}];
		_aim_pos = (_ins select 0) select 0;
		_mapGrid = if (count _ins > 0) then [{mapGridPosition _aim_pos},{"---"}];

		__ctrlenergy ctrlSetText format["%1", _currentenergy];
		__ctrlgrid ctrlSetText format["%1", _mapGrid];

		_position = ATLToASL positionCameraToWorld [0,0,0];
		_direction = ATLToASL positionCameraToWorld [0,0,1];
		_azimuth = ((_direction select 0) - (_position select 0)) atan2 ((_direction select 1) - (_position select 1));

		if (_azimuth < 0) then {_azimuth = _azimuth + 360};
		if (round(_azimuth) == 360) then {_azimuth = 0};

		__ctrldirection ctrlSetText format["%1", round(_azimuth)];
		__ctrlhealth ctrlSetText format["%1", round(_currenthealth)];
		__ctrlrange ctrlSetText format["%1m", _aim_dist_txt];
		__ctrlammo ctrlSetText format["%1", _currentAmmo];
		__ctrlmagazine ctrlSetText format["%1", _availableMagCount];

		if (_currentenergy <= 0) then {
			__ctrlenergyindicator ctrlSetTextColor [0.957, 0.090, 0.090,0.6];
		} else {
			__ctrlenergyindicator ctrlSetTextColor [0.1,0.69,0.99,0.6];;
		};
		if (round(_currenthealth) <= 0) then {
			__ctrlhealthindicator ctrlSetTextColor [0.957, 0.090, 0.090,0.6];
		} else {
			__ctrlhealthindicator ctrlSetTextColor [0.490, 0.957, 0.090,0.6];;
		};
		__ctrlenergyindicator ctrlCommit 0;
		__ctrlhealthindicator ctrlCommit 0;

		if (!(_oldArmorMode == player getVariable "msc_active_mode")) then {
			_oldArmorMode = player getVariable "msc_active_mode";
			switch (_oldArmorMode) do {
				case "armor" : {
					__ctrlmode ctrlSetText "MSC_crysis\ui\msc_armor_icon.paa";
				};   
				case "strength": {
					__ctrlmode ctrlSetText "MSC_crysis\ui\strength.paa";
				};
				case "speed": {
					__ctrlmode ctrlSetText "MSC_crysis\ui\speed.paa";
				};
				case "cloak": {
					__ctrlmode ctrlSetText "MSC_crysis\ui\cloak.paa";
				};
				case "none": {
					__ctrlmode ctrlSetText "";
				};
				default {
					__ctrlmode ctrlSetText "MSC_crysis\ui\msc_armor_icon.paa";
				};
			};
		};
	};
	("MSC_CRY_OVERLAY_LAYER" call BIS_fnc_rscLayer)cutRsc["Default","plain"];
	("MSC_CRY_HUD_LAYER" call BIS_fnc_rscLayer)cutRsc["Default","plain"];
	("MSC_CRY_TEXT_LAYER" call BIS_fnc_rscLayer)cutRsc["Default","plain"];
};