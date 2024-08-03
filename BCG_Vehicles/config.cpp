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
		hiddenSelections[] = {
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[] = {
			"\knd_fang\data\fuselage_co.paa",
			"\knd_fang\data\wings_co.paa",
			"\knd_fang\data\cockpit_co.paa"
		};
		textureList[]={
			"buycegal",1,
			"neif",1,
			"balls",1
		};
		class textureSources {
			class buycegal
			{
				displayName = "Buy'ce Gal Cabur";
				author = "your mom";
				textures[] = { 
					"\knd_fang\data\fuselage_co.paa",
					"\knd_fang\data\wings_co.paa",
					"\knd_fang\data\cockpit_co.paa"
				};
				factions[]={};
			};
			class neif: buycegal
			{
				displayName = "Neifer";
				textures[] = { 
					"\knd_fang\data\fuselage_co.paa",
					"\knd_fang\data\wings_co.paa",
					"\knd_fang\data\cockpit_co.paa"
				};
			};
			class balls: buycegal
			{
				displayName = "Balls";
				textures[] = { 
					"\knd_fang\data\fuselage_co.paa",
					"\knd_fang\data\wings_co.paa",
					"\knd_fang\data\cockpit_co.paa"
				};
			};
		};
	};
};