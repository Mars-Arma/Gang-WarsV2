
if (isNull findDisplay 2900) then {

createDialog "life_team_select";

_display = findDisplay 2900;
_teamOne = _display displayCtrl 1337;
_teamTwo = _display displayCtrl 1338;

_teamOne ctrlSetText ((life_teams select 0) select 0);
_teamTwo ctrlSetText ((life_teams select 1) select 0);
};

// check to see if joining a team is even possible 
if (life_group_list isEqualto []) exitWith {
	closeDialog 0; 
	hint "Please wait until an Admin creates the teams!"};



counter = 0;
// check to make sure player is not on team 2
if (_this select 0 == 1) then {

	// if player is loop through players and find player
	if (player in ((life_teams select 1) select 2)) then {
		{
			
			// delete player from other team
			if (_x isEqualTo  player) then {
				((life_teams select 1) select 2) deleteAt counter;
			};
			counter = counter + 1;
		} forEach ((life_teams select 1) select 2);
	};

	// insert player into new team array
	((life_teams select 0) select 2) pushBackUnique player;

	// join the teams group
	_group = (life_group_list select 0) select 0;
	(life_group_list select 0) select 1 pushBackUnique [str(player),getPlayerUID player];
	publicVariable "life_group_list";
	[player] joinSilent _group;
};

// check to make sure player is not on team 1
if (_this select 0 == 2) then {

	// if player is loop through players and find player
	if (player in ((life_teams select 0) select 2)) then {
		{
			// delete player from other team
			if (_x ==  player) then {
				((life_teams select 0) select 2) deleteAt counter;
			};
			counter = counter + 1;
		} forEach ((life_teams select 0) select 2);
	};

	// insert player into new team
	((life_teams select 1) select 2) pushBackUnique player;

	// join the teams group
	_group = (life_group_list select 1) select 0;
	(life_group_list select 1) select 1 pushBackUnique [str(player),getPlayerUID player];
	publicVariable "life_group_list";
	[player] joinSilent _group;
};


