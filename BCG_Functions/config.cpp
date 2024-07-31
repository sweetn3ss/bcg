class cfgPatches {
	class BCG_Functions {
		requiredVersion = 0.1;
		requiredAddons []= {"BCG_Core"};
		units[]={};
		weapons[]={};
	};
};
class cfgFunctions {
	class bcg_medbay {
		class functions {
			file = "BCG_Functions\functions";
			class injuryCase {};
			class injuryConsole {};
			class injuryAssign {};
		};
	};
	class bcg_funny {
		class functions {
			file = "BCG_Functions\functions";
			class porg {};
		};
	};
};