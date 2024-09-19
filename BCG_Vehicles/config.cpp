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
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Blue
			{
				displayName="fuxck your";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\BCG_Vehicles\jeep\jeep12.paa",
					"\BCG_Vehicles\jeep\jeep12.paa",
					"\BCG_Vehicles\jeep\jeep34.paa",
					"\BCG_Vehicles\jeep\jeep34.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Orange
			{
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Brown
			{
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1,
			"Blue",
			1,
			"Green",
			1,
			"Orange",
			1,
			"Red",
			1,
			"White",
			1,
			"Brown",
			1,
			"Olive",
			1
		};
	};
};