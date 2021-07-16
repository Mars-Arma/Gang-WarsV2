	class DTASHUD
	{
      	idd = 1000;
     	movingEnable=0;
      	duration=1e+011;
      	name = "DTASHUD_name";
      	onLoad = "uiNamespace setVariable ['DTASHUD', _this select 0];";
		onUnLoad = "uiNamespace setVariable ['DTASHUD', nil]";
      	controlsBackground[] = {};
      	objects[] = {};
      	class controls
		{
			class TimerDisplay
			{
				type = CT_STATIC;
				style = ST_CENTER;
				idc = 1001;
				text = "";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.00500001 * safezoneH + safezoneY;
				w = 0.0979687 * safezoneW;
				h = 0.033 * safezoneH;
				font = "PuristaMedium";
				colorBackground[] = {0.05,0.05,0.05,0.5};
				colorText[] = {1,1,1,1};
				sizeEx = 0.05;
			};
			
			class MissionDisplay
			{
				type = CT_STATIC;
				style = ST_CENTER;
				idc = 1002;
				text = "";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.038 * safezoneH + safezoneY;
				w = 0.0979687 * safezoneW;
				h = 0.033 * safezoneH;
				font = "PuristaMedium";
				colorBackground[] = {0.05,0.05,0.05,0.5};
				colorText[] = {1,1,1,1};
				sizeEx = 0.05;
			};
			
			class ScoreWDisplay
			{
				type = CT_STATIC;
				style = ST_CENTER;
				idc = 1101;
				text = "Team One";
				x = 0.525781 * safezoneW + safezoneX;		
				y = 0.00500001 * safezoneH + safezoneY;
				w = 0.109375 * safezoneW;
				h = 0.033 * safezoneH;
				font = "PuristaMedium";
				colorBackground[] = {0,0,1,0.5};
				colorText[] = {1,1,1,1};
				sizeEx = 0.05;
			};

			class ScoreEDisplay
			{
				type = CT_STATIC;
				style = ST_CENTER;
				idc = 1102;
				text = "Team Two";
				x = 0.525781 * safezoneW + safezoneX;
				y = 0.038 * safezoneH + safezoneY;
				w = 0.109375 * safezoneW;
				h = 0.033 * safezoneH;
				font = "PuristaMedium";
				colorBackground[] = {1,0,0,0.5};
				colorText[] = {1,1,1,1};
				sizeEx = 0.05;
			};
		};
	};