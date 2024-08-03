class cfgPatches {
	class BCG_Vehicles {
		requiredVersion = 0.1;
		requiredAddons[]= {"BCG_Core","knd_fang"};
		units[]={"BCG_Fang_NeiferTesticles"};
		weapons[]={};
	};
};
class cfgVehicles {
	class knd_FangFighter_VTOL_Dynamic_F;
	class BCG_Fang_NeiferTesticles: knd_FangFighter_VTOL_Dynamic_F {
		displayName = "[BCG] Fang-class Fighter";
		scope = 2;
		scopeArsenal = 2;
		textureList[]={
			"buycegal",1,
			"neif",0,
			"balls",0
		};
		class buycegal
		{
			displayName = "[BCG] Factory Paint";
			author = "your mom";
			textures[] = { 
				"BCG_Vehicles\fang\fuselage_co.paa",
				"BCG_Vehicles\fang\wings_co.paa",
				"BCG_Vehicles\fang\cockpit_co.paa"
			};
			factions[]={};
		};
		class neif: buycegal
		{
			displayName = "ooh shiny";
			textures[] = { 
				"\knd_fang\data\fuselage_co.paa",
				"\knd_fang\data\wings_co.paa",
				"\knd_fang\data\cockpit_co.paa"
			};
		};
		class balls: buycegal
		{
			displayName = "Night Fighter";
			textures[] = { 
				"\knd_fang\data\fuselage_co.paa",
				"\knd_fang\data\wings_co.paa",
				"\knd_fang\data\cockpit_co.paa"
			};
		};
	};
};