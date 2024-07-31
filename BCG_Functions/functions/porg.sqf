this addAction ["<t color='#FF0000'>Tickle Tickle</t>",
	{params ["_target", "_caller", "_actionId", "_arguments"];
    playSound3D [getMissionPath "\sound\porg.ogg", _caller];
    _caller setVelocity [-45, -45, 15];
},
nil,3];