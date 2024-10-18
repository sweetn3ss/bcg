private _className = param[0,"",[""]];
if (!hasInterface || _className == "") exitWith {
    diag_log text (format ["[%1] (%2) WARNING: %3 ","BCG","Facewear","iPod script called with invalid params."]);
};
private _prev = player getVariable "BCG_ipodSpeaker";
if !(isNil _prev) then {
    player setVariable ["BCG_ipodSpeaker",nil];
    deleteVehicle _prev;
};
private _speaker = player say3D [_className,25,1,true,0,true];
player setVariable ["BCG_ipodSpeaker",_speaker,true];