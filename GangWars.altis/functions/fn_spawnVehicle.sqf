
_bool = _this select 0;

if (_bool) then {

	_veh = lbCurSel (2903);

	if (_veh isEqualTo -1) exitWith {hint "Please select a vehicle"};

	_delete = (Spawned_Vehicles select _veh) select 1;

	Spawned_Vehicles deleteAt _veh;
	
	deleteVehicle _delete;

	


} else {

	// create vehicle
	_veh = lbData[2902,lbCurSel (2902)];

	if (lbCurSel (2902) isEqualTo -1) exitWith {hint "Please select a vehicle"};
	
	_vehName = _veh;
	_data = [_vehName];

	_veh = createVehicle [_veh, position player];
	
	_data pushback _veh;
	Spawned_Vehicles pushBack _data;
	

	// remove all weapons/mags
	clearMagazineCargo _veh;
	clearWeaponCargo _veh;

};

closeDialog 0;
[1] spawn life_fnc_adminMenu;