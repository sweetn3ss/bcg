class cfgPatches {
	class BCG_Facewear {
		authors[]={"Gray","Neifer","Indie Beninging"};
		name="Buy'ce Gal Cabur Core";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"tgf_facewear", "knd_vests"
		};
	};
};
class cfgGlasses {
	

	
	class tgf_facewear_arbiter_belt;
	class tgf_facewear_forgemaster_belt;
	class tgf_facewear_heavy_belt;
	class tgf_facewear_light_belt;
	class tgf_facewear_medium_belt;
	class tgf_facewear_pilot_belt;
	class knd_kama;
	
	
	
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
	};
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
	};
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
	};
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
			"BCG_Facewear\data\medium\whatthefuck.paa"
		};
	};
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
	};
	class BCG_MedicKama: knd_kama
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Medic Kama";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\MedicKama\camo1_co.paa"
		};
	};
		class BCG_MaviKama: knd_kama
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Mavi Kama";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\Customs\MaviKama.paa"
		};
	};
	

};
