if (!hasInterface) exitWith {};
private _speaker = player getVariable "BCG_ipodSpeaker";
player setVariable ["BCG_ipodSpeaker",nil];
deleteVehicle _speaker;