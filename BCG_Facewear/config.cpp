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
class cfgFunctions {
	class bcg_MLG {
		class functions {
			file="BCG_Facewear\functions";
			class mlgmode {};		// bcg_MLG_fnc_mlgmode;
			class cringemode {};	// bcg_MLG_fnc_cringemode;
			class mlgmode_Duke {};		// bcg_MLG_fnc_mlgmode_Duke;
			class cringemode_Duke {};	// bcg_MLG_fnc_cringemode_Duke;
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
	class G_Combat;
	
	
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
	class BCG_HaveItTheWay: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Crown of Vibe'trei'des";
		model = "\BCG_Facewear\data\BK\bk_crownT.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\BK_Crown_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "";
	};
	
	class BCG_HaveItNoWay: G_Combat
	{
		scope = 1;
		displayName = "[BCG] Crown of The MLG";
		model = "\BCG_Facewear\data\BK\bk_crownT.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\BK_Crown_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "\BCG_Facewear\data\BK\vibetreides.paa";
		ACE_OverlayCracked = "\BCG_Facewear\data\BK\CombatGogglesCracked.paa";
	};
	class BCG_Duke: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Duke of Va'trei'des";
		model = "\BCG_Facewear\data\BK\duke.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\duke_camo1_ca.paa","\BCG_Facewear\data\BK\duke_camo2_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "";
	};
	class BCG_Duke_MLG: G_Combat
	{
		scope = 1;
		displayName = "[BCG] Duke of MLG";
		model = "\BCG_Facewear\data\BK\duke.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\duke_camo1_ca.paa","\BCG_Facewear\data\BK\duke_camo2_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "\BCG_Facewear\data\BK\vibetreides.paa";
		ACE_OverlayCracked = "\BCG_Facewear\data\BK\CombatGogglesCracked.paa";
	};
	class BCG_Mommy_Hat: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Mother's Hat";
		model = "\BCG_Facewear\data\mommy\mommy_hat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\mommy\camo_co.paa"};
		ACE_Overlay = "";
	};
};
class cfgVehicles {
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class bcg_MLG
			{
                displayName="Activate Gamer Mode";
                condition="(goggles player) in [""BCG_HaveItTheWay""]";
                statement="_player call bcg_MLG_fnc_mlgmode";
                icon = "BCG_Facewear\data\BK\vatreicon.paa";
			};
			class bcg_cringe
			{
                displayName="Activate Cringe Mode";
                condition="(goggles player) in [""BCG_HaveItNoWay""]";
                statement="_player call bcg_MLG_fnc_cringemode";
                icon = "BCG_Facewear\data\BK\vatreicon2.paa";
			};
			class bcg_MLG_duke
			{
                displayName="Activate Gamer Mode";
                condition="(goggles player) in [""BCG_Duke""]";
                statement="_player call bcg_MLG_fnc_mlgmode_Duke";
                icon = "BCG_Facewear\data\BK\vatreicon.paa";
			};
			class bcg_cringe_duke
			{
                displayName="Activate Cringe Mode";
                condition="(goggles player) in [""BCG_Duke_MLG""]";
                statement="_player call bcg_MLG_fnc_cringemode_Duke";
                icon = "BCG_Facewear\data\BK\vatreicon2.paa";
			};
		};
	};
};