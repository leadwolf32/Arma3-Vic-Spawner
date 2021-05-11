#include "CustomControlClasses.h"
class MyDialog
{
	idd = 1337;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,1};
			colorText[] = {0.498,0.3529,0.3882,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class PadList
		{
			type = 5;
			idc = 151;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.59027778;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.177;
			style = 16;
			colorBackground[] = {0.702,0.102,0.102,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class VehList
		{
			type = 5;
			idc = 150;
			x = 0.00000016;
			y = 0.19651904;
			w = 0.52606637;
			h = 0.32278483;
			style = 16;
			colorBackground[] = {0.702,0.102,0.102,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class VehText
		{
			type = 0;
			idc = -1;
			x = 0.00000002;
			y = 0.06360762;
			w = 0.52606637;
			h = 0.13;
			style = 0;
			text = "Vehicle";
			colorBackground[] = {0.4,0.4,0.4,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class PadText
		{
			type = 0;
			idc = -1;
			x = 0.00000002;
			y = 0.53164559;
			w = 0.52606637;
			h = 0.1321519;
			style = 0;
			text = "Pad";
			colorBackground[] = {0.4,0.4,0.4,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			
		};
		class SpawnButton
		{
			type = 1;
			idc = 145;
			x = 0.60000007;
			y = 0.70000012;
			w = 0.37500002;
			h = 0.27500002;
			style = 0+2;
			text = "Spawn";
			borderSize = 0;
			colorBackground[] = {0.302,0.302,0.302,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0.702,0.102,0.102,1};
			font = "PuristaBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 4);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class Text1
		{
			type = 0;
			idc = -1;
			x = 0.65000009;
			y = 0.00000002;
			w = 0.35000002;
			h = 0.12500003;
			style = 0+16;
			text = "1st MEU Spawner V1.0";
			colorBackground[] = {0,0,0,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			
		};
		class Text2
		{
			type = 0;
			idc = -1;
			x = 0.57500007;
			y = 0.07500002;
			w = 0.40000001;
			h = 0.12500003;
			style = 0+16;
			text = "Created by CWO2 Atlas. Please DM with any issues";
			colorBackground[] = {0,0,0,1};
			colorText[] = {0.902,0.902,0.902,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			
		};
		
	};
	
};
