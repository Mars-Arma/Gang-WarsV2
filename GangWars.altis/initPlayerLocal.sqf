waitUntil {!isNull (findDisplay 46)};

player switchCamera "External";
enableSaving [false, false];
player enableFatigue false;
//player allowDamage false;
enableTeamSwitch false;

// Setup configuration
call life_fnc_configuration;

[] spawn life_fnc_initPlayer;

[] call life_fnc_coloredHex;

[] spawn life_fnc_handleDamage;

while {true} do {

	[] spawn life_fnc_hudUpdate;
	sleep 1;

};