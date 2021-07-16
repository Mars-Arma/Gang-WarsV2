
waitUntil {!isNull (findDisplay 2903)};

_display = findDisplay 2903;

_clock = _display displayCtrl 29201;
_clockDisplay = _display displayCtrl 92918;



_time = parseNumber (ctrlText _clock);
seconds = _time * 60;

if (seconds == 0) exitWith {
	unpaused = true;
	publicVariable "unpaused";
};

unpaused = true;
publicVariable "unpaused";

[] spawn life_fnc_clockFunction;

