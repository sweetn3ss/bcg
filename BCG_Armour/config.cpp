class cfgPatches
{
	class BCG_Armour
	{
		authors[] = {"Gray","Neifer","Beckket","Indie Beninging"};
		name = "Buy'ce Gal Cabur Armoury";
		weapons[] = {};
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_armor_greenfor", "tgf_helmets", "tgf_armour", "tgf_undersuit"}; 
	};
};
class cfgWeapons
{
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	class tgf_helmets_battle_master; 
	class tgf_armour_base;
	class tgf_armour_heavy_armour;
	class tgf_armour_battle_armour;
	class tgf_armour_forgemaster_armour;
	class tgf_armour_light_armour;
	class tgf_armour_medium_armour;
	class tgf_armour_super_light_armour;
	class tgf_armour_war_chief_armour;
	class V_PlateCarrier2_rgr;
	
	// wip, ignore lol
	class BCG_Helmet_Testing: tgf_helmets_battle_master {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname = "[BCG] Rally Master Helmet";
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\RallyMasterTesting\rally_master.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\RallyMasterTesting\camo1_co.paa",
			"BCG_Armour\data\helmets\RallyMasterTesting\camo2_co.paa"	
		};
	};
	// this is the brokey shit
	
	class BCG_Armour_Rifleman: tgf_armour_battle_armour {
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Armour Rifleman";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\beskarshiny.rvmat"
		
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\vests\Battle\camo1_co.paa",
			"BCG_Armour\data\vests\Battle\camo2_co.paa"
		};
	};
};
class cfgVehicles
{
	class JLTS_Clone_jumppack_JT12;
	class TKE_AlicePackUCN;
	class TKE_AlicePackUCNM;
	class TKE_CamelBakUCN;
	class TKE_BackPack1;
	class TKE_BackPack2;
	class TKE_CamelBakV2UCN;
	class TKE_RadioPackUCN;
	
	
	class BCG_Back_JT12: JLTS_Clone_jumppack_JT12 {
		displayName = "[BCG] JT12 Ascension Pack";
		maximumLoad = 300;
		mass = 40;
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"\BCG_Armour\data\backpacks\jumppack\BCG_jumppack_co.paa"
		};
	};
	class BCG_AlicePackUCN: TKE_AlicePackUCN {
		displayName = "[BCG] Alice Pack";
		maximumLoad = 550;
		mass = 40;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_AlicePackUCN_co.paa"
		};
	};
	class BCG_AlicePackUCNM: TKE_AlicePackUCNM {
		displayName = "[BCG] Medical Alice Pack";
		maximumLoad = 550;
		mass = 40;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\backpacks\medic backpack\BCG_Medical_Alicepack_co.paa"
		};
	};
	class BCG_CamelBakUCN: TKE_CamelBakUCN {
		displayName = "[BCG] Camelbak";
		maximumLoad = 250;
		mass = 32;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_CamelBak_co.paa"
		};
	};
	class BCG_BackPack1: TKE_BackPack1 {
		displayName = "[BCG] Combat Pack";
		maximumLoad = 400;
		mass = 32;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BackPack1_co.paa"
		};
	};
	class BCG_BackPack2: TKE_BackPack2 {
		displayName = "[BCG] Combat Pack (Bedroll)";
		maximumLoad = 400;
		mass = 32;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BackPack1_co.paa"
		};
	};
	class BCG_CamelBakV2UCN: TKE_CamelBakV2UCN {
		displayName = "[BCG] Field Camelbak";
		maximumLoad = 250;
		mass = 32;
		hiddenSelections[] = {
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_CamelBak_co.paa",
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BedRoll_co",
			"\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa"
		};
	};
	class BCG_RadioPackUCN: TKE_RadioPackUCN {
		displayName = "[BCG] Radio Pack";
		maximumLoad = 250;
		mass = 32;
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\backpacks\radio pack\BCG_RadioPack_co.paa"
		};
	};
};
