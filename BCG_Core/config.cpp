class cfgPatches {
	class BCG_Core {
		authors[]={"Gray","Neifer","Indie Beninging"};
		name="Buy'ce Gal Cabur Core";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"a3_Characters_F",
			"OPTRE_Misc"
		};
	};
};
class cfgGlasses {
	class OPTRE_HUD_Glasses;
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
};