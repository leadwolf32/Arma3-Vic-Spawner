createDialog "MyDialog";

_Veh = (findDisplay 1337) displayCtrl 150;
_Pads = (findDisplay 1337) displayCtrl 151;


lbAdd [150, "Pelican AV"];
lbAdd [150, "Pelican [Unarmed]"];
lbAdd [150, "Sparrowhawk [M9019/M6]"];
lbAdd [150, "Sparrowhawk [M9019/M230]"];
lbAdd [150, "Sparrowhawk [GAU-23/M6]"];
lbAdd [150, "Sparrowhawk [GAU-23/M230]"];
lbAdd [150, "Falcon [Armed]"];
lbAdd [150, "Falcon [Unarmed]"];
lbAdd [150, "M808B [Scorpion]"];
lbAdd [150, "M808B2 [Sun Devil]"];
lbAdd [150, "M808BS [Heavy Scorpion]"];
lbAdd [150, "IFV-76 [Honeybadger]"];
lbAdd [150, "FV-510 [Warrior]"];
lbAdd [150, "Rooikat 120 UP"];
lbAdd [150, "Namer [Repair]"];


lbSetData [150, 0, "VES_D77HTCI_A"];
lbSetData [150, 1, "VES_D77HTCI"];
lbSetData [150, 2, "VES_AV22A_Sparrowhawk"];
lbSetData [150, 3, "VES_AV22C_Sparrowhawk"];
lbSetData [150, 4, "VES_AV22B_Sparrowhawk"];
lbSetData [150, 5, "VES_AV22_Sparrowhawk"];
lbSetData [150, 6, "VES_UH144"];
lbSetData [150, 7, "VES_UH144_A"];
lbSetData [150, 8, "MEU_SCORPION"];
lbSetData [150, 9, "OPTRE_M808B2"];
lbSetData [150, 10, "OPTRE_M808S"];
lbSetData [150, 11, "MEU_IFV_A"];
lbSetData [150, 12, "MEU_Warrior_WDL"];
lbSetData [150, 13, "B_AFV_Wheeled_01_up_cannon_F"];
lbSetData [150, 14, "Vulkan_Repair_APC"];

lbAdd [151, "Air Pad 1"];
lbAdd [151, "Air Pad 2"];
lbAdd [151, "Air Pad 3"];
lbAdd [151, "Fixed Wing Pad"];
lbAdd [151, "Ground Pad 1"];
lbAdd [151, "Ground Pad 2"];
lbAdd [151, "Ground Pad 3"];

lbSetData [151, 0, "AirPad1"];
lbSetData [151, 1, "AirPad2"];
lbSetData [151, 2, "AirPad3"];
lbSetData [151, 3, "FixedPad"];
lbSetData [151, 4, "GroundPad1"];
lbSetData [151, 5, "GroundPad2"];
lbSetData [151, 6, "GroundPad3"];