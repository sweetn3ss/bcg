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
			"neif",0,
			"balls",0
		};
		class textureSources {
			class buycegal
			{
				displayName = "Buy'ce Gal Cabur";
				author = "your mom";
				textures[] = { 
					"BCG_Vehicles\fang\bussygal\fuselage_co.paa",
					"BCG_Vehicles\fang\bussygal\wings_co.paa",
					"BCG_Vehicles\fang\bussygal\cockpit_co.paa"
				};
				factions[]={};
			};
			class neif: buycegal
			{
				displayName = "Neifer";
				textures[] = { 
					"BCG_Vehicles\fang\chrome\fuselage_co.paa",
					"BCG_Vehicles\fang\chrome\wings_co.paa",
					"BCG_Vehicles\fang\chrome\cockpit_co.paa"
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
	class C_Offroad_02_unarmed_F;
	class BCG_Jeep: C_Offroad_02_unarmed_F {
		displayName = "[BCG] Jeep";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\BCG_Vehicles\jeep\jeep12.paa",
			"\BCG_Vehicles\jeep\jeep12.paa",
			"\BCG_Vehicles\jeep\jeep34.paa",
			"\BCG_Vehicles\jeep\jeep34.paa"
		};
	};
};