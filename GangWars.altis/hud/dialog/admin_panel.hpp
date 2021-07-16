
class life_admin_menu {
	idd = 2900;
	name= "life_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	// onLoad = "[] spawn life_fnc_adminMenu;";

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};

	class controls {
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Gang Wars Admin Menu: Players";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class PlayerList_Admin: Life_RscListBox {
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			x = 0.12;
			y = 0.36;
			w = 0.30;
			h = 0.2;
		};

		class PlayerBInfo: Life_RscStructuredText{
			idc = 2903;
			text = "";
			x = 0.42;
			y = 0.25;
			w = 0.35;
			h = 0.6;
		};

		class PlayerSpec: Life_RscButtonRed {
			idc = 2101;
			text = "Spectate";
			onButtonClick = "[] call life_fnc_spec";
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.45 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Tab1: Life_RscButtonRed {
			idc = 7331;
			text = "Players";
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_adminMenu;";
			x = 0.12;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab2: Life_RscButtonRed {
			idc = 7331;
			text = "Admin";
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_adminMenu;";
			x = 0.32;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class Tab3: Life_RscButtonRed {
			idc = 7331;
			text = "Teams";
			onButtonClick = "closeDialog 0; [2] spawn life_fnc_adminMenu;";
			x = 0.52;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Tab4: Life_RscButtonRed {
			idc = 7331;
			text = "Game";
			onButtonClick = "closeDialog 0; [3] spawn life_fnc_adminMenu;";
			x = 0.72;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class TeleSpot: Life_RscButtonRed {
			idc = 2102;
			text = "Teleport";
			onButtonClick = "[false] call life_fnc_adminTP";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.4 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class TpPlyr2Me: Life_RscButtonRed {
			idc = 2104;
			text = "TPtoME";
			onButtonClick = "[true] call life_fnc_adminTP";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.45 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class TpPlyrThem: Life_RscButtonRed {
			idc = 1337;
			text = "TPtoTHEM";
			onButtonClick = "[true,true] call life_fnc_adminTP";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.5 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class revTarg: Life_RscButtonRed {
			idc = 1338;
			text = "Revive";
			onButtonClick = "[nil, true] call life_fnc_revivePlayer"; //[nil, true] call life_fnc_revivePlayer;
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.4 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			colorText[] = { 1, 0, 0, 1 };
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Admin_menu2 {
	idd = 2901;
	name= "Admin_menu2";
	movingEnable = false;
	enableSimulation = true;
	// onLoad = "[1] spawn life_fnc_adminMenu;";

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};

	class controls {
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Gang Wars Admin Menu: Admin";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class Spawn: Life_RscListBox {
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			x = 0.12;
			y = 0.36;
			w = 0.30;
			h = 0.2;
		};

		class Spawend: Life_RscListBox {
			idc = 2903;
			text = "";
			sizeEx = 0.035;
			x = 0.47;
			y = 0.36;
			w = 0.30;
			h = 0.2;
		};

		class SpawnButton: Life_RscButtonRed {
			idc = 2101;
			text = "Spawn";
			onButtonClick = "[false] call life_fnc_spawnVehicle";
			x = 0.12;
			y = 0.60;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class DeleteButton: Life_RscButtonRed {
			idc = 2102;
			text = "Delete";
			onButtonClick = "[true] call life_fnc_spawnVehicle";
			x = 0.47;
			y = 0.60;
			w = (6.25 / 40);
			h = (1 / 25);
		};


		class Tab1: Life_RscButtonRed {
			idc = 7331;
			text = "Players";
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_adminMenu;";
			x = 0.12;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab2: Life_RscButtonRed {
			idc = 7331;
			text = "Admin";
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_adminMenu;";
			x = 0.32;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class Tab3: Life_RscButtonRed {
			idc = 7331;
			text = "Teams";
			onButtonClick = "closeDialog 0; [2] spawn life_fnc_adminMenu;";
			x = 0.52;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Tab4: Life_RscButtonRed {
			idc = 7331;
			text = "Game";
			onButtonClick = "closeDialog 0; [3] spawn life_fnc_adminMenu;";
			x = 0.72;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			colorText[] = { 1, 0, 0, 1 };
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Admin_menu3 {
	idd = 2902;
	name= "Admin_menu3";
	movingEnable = false;
	enableSimulation = true;
	// onLoad = "[1] spawn life_fnc_adminMenu;";

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
		class ScoreTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.45;
			w = 0.8;
			h = (1 / 25);
		};
	};

	class controls {
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Gang Wars Admin Menu: Teams";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		class scoreTitle: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Team Scores: 0";
			x = 0.1;
			y = 0.45;
			w = 0.6;
			h = (1 / 25);
		};
		class TeamOneTitle: Life_RscText {
			idc = 109291;
			text = "Team One Score: 0";
			x = 0.20;
			y = 0.48;
			w = (9.25 / 30);
			h = (1 / 20);
		};
		class TeamTwoTitle: Life_RscText {
			idc = 109292;
			text = "Team Two Score: 0";
			x = 0.60;
			y = 0.48;
			w = (9.25 / 30);
			h = (1 / 20);
		};
		class teamOnePlusOne: Life_RscButtonRed {
			idc = 2102;
			text = "+1";
			onButtonClick = "[true, true, true] call life_fnc_setTeamName";
			x = 0.35;
			y = 0.53;
			w = (6.25 / 150);
			h = (1 / 25);
		};
		class teamOneMinusOne: Life_RscButtonRed {
			idc = 2102;
			text = "-1";
			onButtonClick = "[true, false, true] call life_fnc_setTeamName";
			x = 0.225;
			y = 0.53;
			w = (6.25 / 150);
			h = (1 / 25);
		};
		class teamTwoPlusOne: Life_RscButtonRed {
			idc = 2102;
			text = "+1";
			onButtonClick = "[true, true, false] call life_fnc_setTeamName";
			x = 0.75;
			y = 0.53;
			w = (6.25 / 150);
			h = (1 / 25);
		};
		class teamTwoMinusOne: Life_RscButtonRed {
			idc = 2102;
			text = "-1";
			onButtonClick = "[true, false, false] call life_fnc_setTeamName";
			x = 0.625;
			y = 0.53;
			w = (6.25 / 150);
			h = (1 / 25);
		};
		class Team1: Life_RscEdit {
			idc = 29201;
			text = "Team One Name";
			onButtonClick = "";
			x = 0.12;
			y = 0.35;
			w = (9.25 / 40);
			h = (1 / 25);
		};
		class Team2: Life_RscEdit {
			idc = 29202;
			text = "Team Two Name";
			onButtonClick = "";
			x = 0.12;
			y = 0.40;
			w = (9.25 / 40);
			h = (1 / 25);
		};
		class Set1: Life_RscButtonRed {
			idc = 2101;
			text = "Set";
			onButtonClick = "[false] call life_fnc_setTeamName";
			x = 0.37;
			y = 0.40;
			w = (6.25 / 100);
			h = (1 / 25);
		};
		class Set2: Life_RscButtonRed {
			idc = 2102;
			text = "Set";
			onButtonClick = "[false] call life_fnc_setTeamName";
			x = 0.37;
			y = 0.35;
			w = (6.25 / 100);
			h = (1 / 25);
		};
		class Tab1: Life_RscButtonRed {
			idc = 7331;
			text = "Players";
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_adminMenu;";
			x = 0.12;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab2: Life_RscButtonRed {
			idc = 7331;
			text = "Admin";
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_adminMenu;";
			x = 0.32;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};	
		class Tab3: Life_RscButtonRed {
			idc = 7331;
			text = "Teams";
			onButtonClick = "closeDialog 0; [2] spawn life_fnc_adminMenu;";
			x = 0.52;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab4: Life_RscButtonRed {
			idc = 7331;
			text = "Game";
			onButtonClick = "closeDialog 0; [3] spawn life_fnc_adminMenu;";
			x = 0.72;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			colorText[] = { 1, 0, 0, 1 };
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Admin_menu4 {
	idd = 2903;
	name= "Admin_menu4";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};

	class controls {
		class Clock: Life_RscTitleLarge {
			idc = 92918;
			text = "00:00"
			x = 0.365;
			y = -0.1;
			w = (6.25 / 6.25);
			h = (1 / 1);
		};
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Gang Wars Admin Menu: Game";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		class ClockSetTime: Life_RscEdit {
			idc = 29201;
			text = "Clock Set Time";
			onButtonClick = "";
			x = 0.375;
			y = 0.5;
			w = (9.25 / 45);
			h = (1 / 25);
		};
		class Set2: Life_RscButtonRed {
			idc = 2101;
			text = "Pause Clock";
			onButtonClick = "[] spawn life_fnc_clockPause";
			x = 0.375;
			y = 0.54;
			w = (9.25 / 45);
			h = (1 / 25);
		};
		class Set3: Life_RscButtonRed {
			idc = 2101;
			text = "Start Clock";
			onButtonClick = "[] spawn life_fnc_clock";
			x = 0.375;
			y = 0.59;
			w = (9.25 / 45);
			h = (1 / 25);
		};
		class Tab1: Life_RscButtonRed {
			idc = 7331;
			text = "Players";
			onButtonClick = "closeDialog 0; [0] spawn life_fnc_adminMenu;";
			x = 0.12;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab2: Life_RscButtonRed {
			idc = 7331;
			text = "Admin";
			onButtonClick = "closeDialog 0; [1] spawn life_fnc_adminMenu;";
			x = 0.32;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};	
		class Tab3: Life_RscButtonRed {
			idc = 7331;
			text = "Teams";
			onButtonClick = "closeDialog 0; [2] spawn life_fnc_adminMenu;";
			x = 0.52;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class Tab4: Life_RscButtonRed {
			idc = 7331;
			text = "Game";
			onButtonClick = "closeDialog 0; [3] spawn life_fnc_adminMenu;";
			x = 0.72;
			y = 0.3 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			colorText[] = { 1, 0, 0, 1 };
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};