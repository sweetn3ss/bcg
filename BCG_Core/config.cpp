class cfgPatches {
	class BCG_Core {
		authors[]={"Gray","Neifer","Indie Beninging"};
		name="Buy'ce Gal Cabur Core";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"a3_Characters_F",
			"OPTRE_Misc",
			"tgf_facewear",
			"442_misc_data_pad"
		};
	};
};
class cfgGlasses {
	class OPTRE_HUD_Glasses;
	class 82nd_Shawggles: OPTRE_HUD_Glasses {
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Shawggles";
		model="\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture="\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
		optreHUDStyle="Glasses";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"BCG_Core\data\shawggles.paa"};
	};
};
class cfgMarkers {
	class bcg_flag {
		name="BCG Flag Test";
		author="Gray";
		icon="\BCG_Core\data\bcg_flag";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=2;
		markerClass="Flags";
	};
};
class cfgVehicles {
	class Items_base_F;
	class 442_data_pad;
	class bcg_data_pad: 442_data_pad {
		scope=2;
		scopeCurator=2;
		author="Gray";
		displayName="Blanket";
		hiddenselections[]={"camo1","screen"};
		hiddenselectionstextures[]={"kobra\442_misc\data_pad\data\camo1_co.paa","BCG_Core\data\screen_co_bridget.paa"};
	};
};
class cfgEditorCategories {
	class BCG_House {
		displayName="House Buy'ce Gal";
	};
};
class cfgEditorSubcategories {
	class BCG_VTOL {
		displayName="VTOL Aircraft";
	};
	class BCG_Cars {
		displayName="Cars";
	};
};
class cfgFactionClasses {
	class BCG_Units {
		displayName="[BCG] Buy'ce Gal Units";
		dlc="BCG";
		priority=99;
		side=2;
	};
};