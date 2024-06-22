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
			"tgf_facewear_base"
		};
	};
};
class cfgGlasses {
	

	
	class OPTRE_HUD_Glasses;
	class tgf_facewear_arbiter_belt;
	class tgf_facewear_forgemaster_belt;
	class tgf_facewear_heavy_belt;
	class tgf_facewear_light_belt;
	class tgf_facewear_medium_belt;
	class tgf_facewear_pilot_belt;
	
	
	
	class 82nd_Shawggles: OPTRE_HUD_Glasses
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Shawggles";
		model="\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture="\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
		optreHUDStyle="Glasses";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Core\data\shawggles.paa"
		};
	};
	
	class BCG_arbiter_belt: tgf_facewear_arbiter_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Arbiter's Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\arbiter\camo1_co.paa"
		};
	};
	class BCG_forgemaster_belt: tgf_facewear_forgemaster_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Forgemaster's Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\forge\camo1_co.paa"
		};
	}
	class BCG_heavy_belt: tgf_facewear_heavy_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Heavy Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\heavy\camo1_co.paa"
		};
	}
	class BCG_light_belt: tgf_facewear_light_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Light Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\light\camo1_co.paa"
		};
	}
	class BCG_medium_belt: tgf_facewear_medium_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Medium Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\medium\camo1_co.paa"
		};
	}
	class BCG_pilot_belt: tgf_facewear_pilot_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Pilot Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\pilot\camo1_co.paa"
		};
	}
	
};
