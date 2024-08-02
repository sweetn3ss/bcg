switch (bcgInjuryVal) do {
	case "lArm": {[bcgInjuryTarget, 0.8, "leftarm", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "rArm": {[bcgInjuryTarget, 0.8, "rightarm", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "lLeg": {[bcgInjuryTarget, 0.8, "leftleg", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "rLeg": {[bcgInjuryTarget, 0.8, "rightleg", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "torso": {[bcgInjuryTarget, 0.8, "torso", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "head": {[bcgInjuryTarget, 0.8, "head", "bullet"] call ace_medical_fnc_addDamageToUnit};
	case "massive": {hint "Not Configured"};
	case "balls": {hint "lmao"};
	default {hint "No Injury Selected"};
};