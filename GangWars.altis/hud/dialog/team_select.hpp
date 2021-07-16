class life_team_select {
	idd = 2900;
	name= "life_team_select";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {0.4, 0.05, 0.05, 0.7};
			idc = -1;
			x = 0.4;
			y = 0.2;
			w = 0.4;
			h = (1 / 25);
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.4;
			y = 0.2 + (11 / 250);
			w = 0.4;
			h = 0.125;
		};
	};

	class controls {
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Team Selection";
			x = 0.4;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class teamOne: Life_RscButtonRed {
			idc = 1337;
			text = "";
			onButtonClick = "[1] call life_fnc_selectTeam";
			x = 0.405;
			y = 0.205 + (11 / 250);
			w = (6.25 / 40);
			h = 0.1;
		};

		class teamTwo: Life_RscButtonRed {
			idc = 1338;
			text = "";
			onButtonClick = "[2] call life_fnc_selectTeam";
			x = 0.64);
			y = 0.205 + (11 / 250);
			w = (6.25 / 40);
			h = 0.1;
		};

		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			colorText[] = { 1, 0, 0, 1 };
			x = 0.6447;
			y = 0.33 + (11 / 250);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};