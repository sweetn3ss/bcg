#include "macros\defines.hpp"
class cfgPatches {
	class BCG_Functions {
		requiredVersion = 0.1;
		requiredAddons[]= {"BCG_Core"};
		units[]={};
		weapons[]={};
	};
};
class cfgFunctions {
	class bcg_medbay {// bcg_medbay_fnc_injuryCase;
		tag="bcg_medbay";
		class funcs {
			SQF(injuryCase);
			SQF(injuryAssign);
			SQF(injuryConsole);
		};
	};
	class bcg_funny {// bcg_funny_fnc_porg;
		tag="bcg_funny";
		class funcs {
			SQF(porg);
		};
	};
	class armor {// bcg_armor_fnc_camoChange;
		tag="bcg_armor";
		class funcs {
			requiredAddons[] = { "ace_interaction" };
			SQF(camoChange);
		};
	};
};
