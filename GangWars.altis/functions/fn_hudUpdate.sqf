
private["_ui","_control","_text"];
disableSerialization;

_ui = uiNamespace getVariable "DTASHUD";

_timer = _ui displayCtrl 1001;
_mission = _ui displayCtrl 1002;
_scoreW = _ui displayCtrl 1101;
_scoreE = _ui displayCtrl 1102;

if (isNil "seconds") then {seconds = 0};

if (isNil "life_teams") then {life_teams = [["Team One", 0, []], ["Team Two", 0, []]]};

_mission ctrlSetText format ["%1", [((seconds)/60)+.01,"HH:MM"] call BIS_fnc_timeToString];
_scoreW  ctrlSetText format ["%1: %2", ((life_teams select 0) select 0), ((life_teams select 0) select 1)];
_scoreE ctrlSetText format ["%1: %2", ((life_teams select 1) select 0), ((life_teams select 1) select 1)];

_text = "<t align='center'>";
_footText = "";
_ui = uiNameSpace getVariable ["playerHUD",displayNull];
if (isNull _ui) then {2 cutRsc ["playerHUD","PLAIN"];;};
_control = _ui displayCtrl 23515;
_header = _ui displayCtrl 23525;
_control ctrlSetPosition [safeZoneX,safeZoneY+safeZoneH-0.04,safeZoneW,0.04];
_header ctrlSetPosition [safeZoneX,safeZoneY,safeZoneW,0.04];
_hp = ceil(round((1 - (damage player)) * 100));


_healthColor = switch (true) do
{
	case (_hp < 10): { "FF0000" };
	case (_hp < 20): { "FF4000" };
	case (_hp < 30): { "FF8000" };
	case (_hp < 40): { "FFB000" };
	case (_hp < 50): { "FFF000" };
	case (_hp < 60): { "D0FF00" };
	case (_hp < 70): { "90FF00" };
	case (_hp < 80): { "50FF00" };
	case (_hp < 90): { "25FF00" };
	default { "00FF00" };
};
if (isNull (findDisplay 7300)) then { _text = _text + format ["<img size='1' image='icons\hud_health.paa' /><t color='#%3'> %1%2</t>    ", _hp, "%", _healthColor]; }
else { _text = _text + "<img size='1' image='icons\hud_health.paa' /><t color='#ff0000'> DEAD</t>    " };
_text = _text + format ["<img size='1' image='icons\hud_water.paa' /> %1%2    ", 100, "%"];
_text = _text + format ["<img size='1' image='icons\hud_food.paa' /> %1%2    ", 100, "%"];

_text = _text + "</t>";

_control ctrlSetStructuredText parseText _text;
_control ctrlCommit 0;
