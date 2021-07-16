_bool = param[0];

if (_bool) exitWith {
	_toThem = param[1,false];
	_unit = lbCurSel (2902);
	if (_toThem) exitWith {player setPosATL getPosATL vehicle (allUnits select _unit)};

	vehicle (allUnits select _unit) setPosATL getPosATL player;
};


titleText ["Click on the map to teleport.","plain", 0.4];
openMap true;
onMapSingleClick "(vehicle player) setPos _pos; openMap false; onMapSingleClick """";";
