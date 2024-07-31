this addAction ["<t color='#FF0000'>Submit Yourself</t>",
	{params ["_target", "_caller", "_actionId", "_arguments"];
	missionNamespace setVariable ["bcgInjuryTarget", _caller];
},
nil,3];