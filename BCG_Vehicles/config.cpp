class cfgPatches {
	class BCG_Vehicles {
		requiredVersion=0.1;
		requiredAddons[]= {"BCG_Core","knd_fang"};
		units[]={"BCG_Fang_NeiferTesticles","BCG_Jeep"};
		weapons[]={};
	};
};
class cfgVehicles {
	class knd_FangFighter_VTOL_Dynamic_F;
	class BCG_Fang_NeiferTesticles: knd_FangFighter_VTOL_Dynamic_F {
		displayName="[BCG] Fang-class Fighter";
		scope=2;
		scopeArsenal=2;
		editorCategory="BCG_House";
		editorSubcategory="BCG_VTOL";
		faction="BCG_Units";
		hiddenSelections[]={"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]={"\knd_fang\data\fuselage_co.paa","\knd_fang\data\wings_co.paa","\knd_fang\data\cockpit_co.paa"};
		textureList[]={"buycegal",1,"neif",0,"balls",0};
		class textureSources {
			class buycegal {
				displayName="Buy'ce Gal Cabur";
				author="your mom";
				textures[]={ 
					"BCG_Vehicles\fang\bussygal\fuselage_co.paa",
					"BCG_Vehicles\fang\bussygal\wings_co.paa",
					"BCG_Vehicles\fang\bussygal\cockpit_co.paa"
				};
				factions[]={};
			};
			class neif: buycegal {
				displayName="Neifer";
				textures[]={ 
					"BCG_Vehicles\fang\chrome\fuselage_co.paa",
					"BCG_Vehicles\fang\chrome\wings_co.paa",
					"BCG_Vehicles\fang\chrome\cockpit_co.paa"
				};
			};
			class balls: buycegal {
				displayName="Balls";
				textures[]={ 
					"\knd_fang\data\fuselage_co.paa",
					"\knd_fang\data\wings_co.paa",
					"\knd_fang\data\cockpit_co.paa"
				};
			};
		};
	};
	class C_Offroad_02_unarmed_F;
	class BCG_Jeep: C_Offroad_02_unarmed_F {
		scope=2;
		scopeCurator=2;
		side=2;
		editorCategory="BCG_House";
		editorSubcategory="BCG_Cars";
		faction="BCG_Units";
		displayName="[BCG] Jeep";
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]={
			"\BCG_Vehicles\jeep\jeep12.paa",
			"\BCG_Vehicles\jeep\jeep12.paa",
			"\BCG_Vehicles\jeep\jeep34.paa",
			"\BCG_Vehicles\jeep\jeep34.paa"
		};
		class TextureSources {
			class Black {
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class Green {
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class Orange {
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class Red {
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class White {
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\BCG_Vehicles\jeep\jeep12.paa",
					"\BCG_Vehicles\jeep\jeep12.paa",
					"\BCG_Vehicles\jeep\jeep34.paa",
					"\BCG_Vehicles\jeep\jeep34.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class Brown {
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
			class Olive {
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
				};
				materials[]={
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]={
					"BCG_Units"
				};
			};
		};
		textureList[]={
			"Black",1,
			"Blue",1,
			"Green",1,
			"Orange",1,
			"Red",1,
			"White",1,
			"Brown",1,
			"Olive",1
		};
	};
	class LT_01_cannon_base_F;
	class BCG_weezy: LT_01_cannon_base_F {
		author="Jonk Morselbo";
		scope=2;
		scopeCurator=2;
		displayName="[BCG] Wiesel 5";
		hiddenSelectionsTextures[]={
			"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		textureList[]={
			"Indep_Olive",1
		};
		class TextureSources {
			class Indep_01 {
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[]={
					"IND_F"
				};
			};
			class Indep_02 {
				displayName="$STR_A3_texturesources_indepjungle0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[]={
					"IND_F"
				};
			};
			class Indep_03 {
				displayName="$STR_A3_texturesources_indepdesert0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[]={
					"IND_F"
				};
			};
			class Indep_Olive {
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]={
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[]={
					"IND_F"
				};
			};
		};
	};
	class 3AS_Delta7_Purple;
	class 3AS_Delta7_Purple: 3AS_Delta7_Base_F
	{
		author="$STR_3as_Studio";
		scope=2;
		scopeCurator=2;
		side=2;
		editorCategory="BCG_House";
		editorSubcategory="BCG_VTOL";
		faction="BCG_Units";
		displayName="[BCG] Delta 7 (Purple)";
		hiddenSelectionsTextures[]={"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Purple_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
	};
};