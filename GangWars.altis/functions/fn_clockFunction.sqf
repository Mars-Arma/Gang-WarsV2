while {seconds > 0 && unpaused} do {

	_display = findDisplay 2903;
	_clock = _display displayCtrl 29201;
	_clockDisplay = _display displayCtrl 92918;

	seconds = seconds - 1;
	if (!isNull _display) then {
		_clockDisplay ctrlSetText format["%1", [((seconds)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	};
	publicVariable "seconds";
	[] remoteExec ["life_fnc_hudUpdate"];
	sleep 1;
};