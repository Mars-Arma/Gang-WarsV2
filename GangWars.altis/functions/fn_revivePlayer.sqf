params ["_target", "_admin"];

if (_admin) exitWith {
	_unit = lbCurSel (2902);
	_unit = allUnits select _unit;
	if (!((lifeState _unit) isEqualTo "INCAPACITATED")) then {
		hint "That player is not dead!";
	} else {
	_unit setUnconscious false;
	_unit allowDamage true;
	hint "Revived that player!";
	};
};


_targetName = name _target;
_title = format ["Reviving %1",_targetName];


//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable ["life_progress",displayNull];
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format ["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;
_continue = true;


player playMove "AinvPknlMstpSnonWnonDr_medic0";
systemChat _title;
while {_cP < 1 && _continue} do
{
	uiSleep 0.25;
	_cP = _cP + 0.01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_title];

	if (isWeaponDeployed player) then {
	hint "You cannot Revive with your weapon out!";
		_continue = false;
	};
	if (player distance _target > 4) then {
		hint "You moved too far away!";
		_continue = false;
	};
	if (lifeState _target == "ALIVE") then {
		hint "This person is no longer dead";
		_continue = false;
	};

};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if (_continue) then {
	_target setUnconscious false;
	
	{	
		
		// get the unit from the players name, then make sure that they're able to take damage
		if ((name _target) isEqualTo (name _x)) then {
			_x allowDamage true;
		};
	} forEach allUnits;
};

