
[0] spawn life_fnc_adminMenu;

disableSerialization;
cutRsc ["DTASHUD","PLAIN"];
_ui = uiNamespace getVariable "DTASHUD";

_timer = _ui displayCtrl 1001;
_mission = _ui displayCtrl 1002;
_scoreW = _ui displayCtrl 1101;
_scoreE = _ui displayCtrl 1102;

{_x ctrlShow true} foreach [_timer, _mission, _scoreW, _scoreE];


// allows player to be able to revive others
player addAction
[
	"<t color='#FF0000'>Defibrillate player</t>",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];

		[cursorObject, false] call life_fnc_revivePlayer;
	},
	nil,
	1.5,
	true,
	false,
	"",
	"cursorObject isKindOf ""Man"" && lifeState cursorObject == ""INCAPACITATED""",
	4,
	false,
	"",
	""
];