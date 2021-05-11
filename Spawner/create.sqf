_VehCurs = lbCurSel 150;
_PadCurs = lbCurSel 151;
_VehSel = lbData [150, _VehCurs];
_PadSel = lbData [151, _PadCurs];
_Pad = missionNamespace getVariable _PadSel;
_Pos = getPosATL _Pad;
_Veh = CreateVehicle [_VehSel, _Pos, [], 0, "NONE"];
{ _x addCuratorEditableObjects [[_Veh], true] } forEach allCurators;
_Veh setDir (getDir _Pad);