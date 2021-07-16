private["_display","_list","_side"];
disableSerialization;

if (_this select 0 == 0) then {
		
	createDialog "life_admin_menu";
	waitUntil {!isNull (findDisplay 2900)};
	_display = findDisplay 2900;
	_list = _display displayCtrl 2902;

	ctrlShow[1000,false];
	ctrlShow[1001,false];
	ctrlShow[2000,false];


	//Purge List
	lbClear _list;

	{
		_side = switch (side _x) do {case west: {[0.05, 0.05, 0.65, 1]}; case civilian : {[0.218, 0.112, 0.214, 1]}; case independent : {0.34, 0.139, 0.34}; default {[0.255, 0.255 ,0, 1]};};	
		_list lbAdd format ["%1", name _x];
		_list lbSetdata [(lbSize _list)-1,str(_x)];
		_list lbSetColor [0, _side]
	} forEach allUnits;

};

if (_this select 0 == 1) then {

	createDialog "Admin_menu2";
	waitUntil {!isNull (findDisplay 2901)};
	_display = findDisplay 2901;
	_list = _display displayCtrl 2902;
	_listDelete = _display displayCtrl 2903;

	{


		_itemInfo = [_x] call life_fnc_fetchCFG;
		_list lbAdd format ["%1", (_itemInfo select 1)];
		_list lbSetPicture[(lbSize _list)-1,(_itemInfo select 2)];
		_list lbSetData[(lbSize _list)-1,(_itemInfo select 0)];

	} forEach Game_Vehicles;


	{


		_itemInfo = [_x select 0] call life_fnc_fetchCFG;
		_listDelete lbAdd format ["%1", (_itemInfo select 1)];
		_listDelete lbSetPicture[(lbSize _listDelete)-1,(_itemInfo select 2)];
		_listDelete lbSetData[(lbSize _listDelete)-1,(_itemInfo select 0)];

	} forEach Spawned_Vehicles;

};

if (_this select 0 == 2) then {

	createDialog "Admin_menu3";

	waitUntil {!isNull (findDisplay 2902)};

	_display = findDisplay 2902;

	_teamOne = _display displayCtrl 29201;
	_teamTwo = _display displayCtrl 29202;
	_scoreOne = _display displayCtrl 109291;
	_scoreTwo = _display displayCtrl 109292;



	if (!isNil "life_teams") then {
		_teamOne ctrlSetText ((life_teams select 0) select 0);
		_teamTwo ctrlSetText ((life_teams select 1) select 0);

		_scoreOne ctrlSetText format ["%1 Score: %2", ((life_teams select 1) select 0), ((life_teams select 0) select 1)];
		_scoreTwo ctrlSetText format ["%1 Score: %2", ((life_teams select 1) select 0), ((life_teams select 1) select 1)];
	};
};

if (_this select 0 == 3) then {

	createDialog "Admin_menu4";

	waitUntil {!isNull (findDisplay 2903)};

	_display = findDisplay 2903;
	_clockDisplay = _display displayCtrl 92918;
	
	_clockDisplay ctrlSetText format["%1", [((seconds)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];

}