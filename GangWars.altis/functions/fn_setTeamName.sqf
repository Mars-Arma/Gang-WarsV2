

_display = findDisplay 2902;

_teamOne = ctrlText (_display displayCtrl 29201);
_teamTwo = ctrlText (_display displayCtrl 29202);

_scoreOne = 0;
_scoreTwo = 0;



if (!isNil"life_teams") then {

	_scoreOne = (life_teams select 0) select 1;
	_scoreTwo = (life_teams select 1) select 1;

};

// checks to see if score updating should run
if (_this select 0) then {

	_bool = _this select 1;
	_team = _this select 2;	
	
	// adding points to team
	if (_bool) then {

		// add points to first team
		if (_team) then {
			_scoreOne = _scoreOne + 1;
		// add points to second team
		} else {
			_scoreTwo = _scoreTwo + 1;
		};

	// remove points from team
	} else {

		// remove first team points
		if (_team) then {
			_scoreOne = _scoreOne - 1;
		// removes second team points
		} else {
			_scoreTwo = _scoreTwo - 1;
		};

	};
};

life_teams = [];

life_teams = [[_teamOne, _scoreOne, []], [_teamTwo, _scoreTwo, []]];

publicVariable "life_teams";

// create teams groups 
_groupOne = createGroup [civilian, false];
_groupTwo = createGroup [civilian, false];

life_group_list = [[_groupOne, []], [_groupTwo, []]];

publicVariable "life_group_list";

closeDialog 0;
[2] spawn life_fnc_adminMenu;
[] spawn life_fnc_hudUpdate;