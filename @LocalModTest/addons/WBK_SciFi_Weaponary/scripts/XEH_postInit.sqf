if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	sleep 1;

	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		_key = _this select 1;
		if (
		!(gestureState _unit in ["sci_fi_mg_switchfiremode","sci_fi_mg_reload_context","sci_fi_mg_reload_prone","sci_fi_mg_reload"]) and (_key in actionKeys "nextWeapon") and !(visibleMap) and (alive _unit) and (isNull objectParent _unit) and (currentWeapon _unit in ["WRS_Weapon_LMG"]) and (stance _unit != "PRONE")
		) then {
			_unit playActionNow "SCI_FI_MG_SwitchFireMode";
			playSound3D ["WBK_SciFi_Weaponary\sounds\mg_switchFireMode.ogg", _unit, false, aimPos _unit, 2, 1, 50,0,false];
		};
	}];
	
};