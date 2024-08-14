class cfgPatches
{
	class BCG_Armour
	{
		authors[] = {"Gray","Neifer","Beckket","Indie Beninging"};
		name = "Buy'ce Gal Cabur Armoury";
		weapons[] = {};
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_armor_greenfor", "tgf_helmets", "tgf_armour", "tgf_undersuit", "knd_Aranov", "knd_dalverd", "knd_newArmor"};
	};
};
class cfgWeapons
{
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	
	class tgf_helmets_battle_master;
	class tgf_helmets_arbiter;
	class tgf_helmets_forgemaster;
	class tgf_helmets_gar_saxon;
	class tgf_helmets_gunslinger;
	class tgf_helmets_gunslinger_vet;
	class tgf_helmets_heavy;
	class tgf_helmets_pilot;
	class tgf_helmets_shrike;
	class tgf_helmets_super_commando;
	class tgf_helmets_super_commando_vet;
	class tgf_helmets_traditional;
	class tgf_helmets_Veteran;
	class tgf_helmets_viper;
	class tgf_helmets_viper_vet;
	class tgf_helmets_war_chief;
	class tgf_helmets_warlord;
	class tgf_helmets_avenger_helmet;
	class tgf_helmets_rook; 
	class tgf_helmets_executioner;
	class tgf_helmets_heritage;
	
	class tgf_armour_base;
	class tgf_armour_heavy_armour;
	class tgf_armour_battle_armour;
	class tgf_armour_forgemaster_armour;
	class tgf_armour_light_armour;
	class tgf_armour_medium_armour;
	class tgf_armour_super_light_armour;
	class tgf_armour_war_chief_armour;
	class tgf_armour_arbiter_armour;
	class knd_vest_beroya;
	class knd_vest_beroya_dual;
	class knd_vest_beroya_dual_light;
	class knd_vest_dalverd;
	class knd_vest_dalverd_dual;
	class knd_vest_dalverd_dual_light;
	
	class tgf_undersuit_uniform_black_seal;
	class knd_Aranov_Solid;
	class knd_vest_aranov;
	class knd_dalverd;
	class knd_helmet_Wren;
	class knd_beroya;
	class tgf_undersuit_uniform_male_neo;
	
		
	class tgf_nvg_rangefinder_r;
	class tgf_nvg_recon_antenna_L;
	class tgf_nvg_heavy_nv;
	class tgf_nvg_circuit;
	class tgf_nvg_avenger_nv;
	
	// helmets
	class BCG_Helmet_RallyMaster: tgf_helmets_battle_master {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Neifer's Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\RallyMaster\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\RallyMaster\camo1_co.paa",
			"BCG_Armour\data\helmets\RallyMaster\camo2_co.paa"
		};
	};
	class BCG_Helmet_Arbiter: tgf_helmets_arbiter {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Arbiter";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Arbiter\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Arbiter\camo1_co.paa",
			"BCG_Armour\data\helmets\Arbiter\camo2_co.paa"
		};
	};
	class BCG_Helmet_ForgeMaster: tgf_helmets_forgemaster {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Forge Master";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\ForgeMaster\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\ForgeMaster\camo1_co.paa",
			"BCG_Armour\data\helmets\ForgeMaster\camo2_co.paa"
		};
	};
	class BCG_Helmet_GarSaxon: tgf_helmets_gar_saxon {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Gar Saxon";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\GarSaxon\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\GarSaxon\camo1_co.paa",
			"BCG_Armour\data\helmets\GarSaxon\camo2_co.paa"
		};
	};
	class BCG_Helmet_Gunslinger: tgf_helmets_gunslinger {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Gunslinger";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Gunslinger\camo1_co.paa",
			"BCG_Armour\data\helmets\Gunslinger\camo2_co.paa"
		};
	};
	class BCG_Helmet_GunslingerVet: tgf_helmets_gunslinger_vet {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Gunslinger Vet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\GunslingerVet\camo1_co.paa",
			"BCG_Armour\data\helmets\GunslingerVet\camo2_co.paa"
		};
	};
	class BCG_Helmet_Heavy: tgf_helmets_heavy {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Heavy";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Heavy\camo1_co.paa",
			"BCG_Armour\data\helmets\Heavy\camo2_co.paa"
		};
	};
	class BCG_Helmet_Pilot: tgf_helmets_pilot {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Pilot";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2",
			"camo"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Pilot\camo1_co.paa",
			"BCG_Armour\data\helmets\Pilot\camo2_co.paa",
			"BCG_Armour\data\helmets\Pilot\camo_co.paa"
		};
	};
	class BCG_Helmet_Shrike: tgf_helmets_shrike {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Shrike";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Shrike\camo1_co.paa",
			"BCG_Armour\data\helmets\Shrike\camo2_co.paa"
		};
	};
	class BCG_Helmet_SuperCommando: tgf_helmets_super_commando {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Super Commando";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\SuperCommando\camo1_co.paa",
			"BCG_Armour\data\helmets\SuperCommando\camo2_co.paa"
		};
	};
	class BCG_Helmet_SuperCommandoVet: tgf_helmets_super_commando_vet {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Super Commando Vet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\SuperCommandoVet\camo1_co.paa",
			"BCG_Armour\data\helmets\SuperCommandoVet\camo2_co.paa"
		};
	};
	class BCG_Helmet_Traditional: tgf_helmets_traditional {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Traditional";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Traditional\camo1_co.paa",
			"BCG_Armour\data\helmets\Traditional\camo2_co.paa"
		};
	};
	class BCG_Helmet_Veteran: tgf_helmets_Veteran {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Veteran";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Veteran\camo1_co.paa",
			"BCG_Armour\data\helmets\Veteran\camo2_co.paa"
		};
	};
	class BCG_Helmet_Viper: tgf_helmets_viper {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Viper";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Viper\camo1_co.paa",
			"BCG_Armour\data\helmets\Viper\camo2_co.paa"
		};
	};
	class BCG_Helmet_ViperVet: tgf_helmets_viper_vet {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Viper Vet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\ViperVet\camo1_co.paa",
			"BCG_Armour\data\helmets\ViperVet\camo2_co.paa"
		};
	};
	class BCG_Helmet_WarChief: tgf_helmets_war_chief {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet War Chief";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat",
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\WarChief\camo1_co.paa",
			"BCG_Armour\data\helmets\WarChief\camo2_co.paa"
		
		};
	};
	class BCG_Helmet_Warlord: tgf_helmets_warlord {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Warlord";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Warlord\camo1_co.paa",
			"BCG_Armour\data\helmets\Warlord\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Gryffin: tgf_helmets_warlord {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Warlord Gryffin";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\Warlord_Gryffin_Custom.paa",
			"BCG_Armour\data\helmets\Warlord\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Funny: tgf_helmets_traditional {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Funny";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\funny.paa",
			"BCG_Armour\data\helmets\Traditional\camo2_co.paa"
		};
	};
	class BCG_Helmet_Rook: tgf_helmets_rook {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Rook Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Rook\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Rook\camo1_co.paa",
			"BCG_Armour\data\helmets\Rook\camo2_co.paa"
		};
	};
	class BCG_Helmet_Exec: tgf_helmets_executioner {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Executioner Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Executioner\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Executioner\camo1_co.paa",
			"BCG_Armour\data\helmets\Executioner\camo2_co.paa"
		};
	};
	class BCG_Helmet_Wren_Gray: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_blk.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class BCG_Wren_Gray_BLK: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray BLK";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_blk.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
		camoTypes[]={ "BLK", "DES", "SNO", "WDL" };
	};
	class BCG_Wren_Gray_DES: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray DES";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_des.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class BCG_Wren_Gray_SNO: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray SNO";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_sno.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class BCG_Wren_Gray_WDL: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray WDL";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_wdl.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class BCG_Helmet_Avenger: tgf_helmets_avenger_helmet {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Avenger Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Gunslinger\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Avenger\camo1_co.paa",
			"BCG_Armour\data\helmets\Avenger\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Heritage: tgf_helmets_heritage {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Heritage Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\Heritage\beskarized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Heritage\camo1_co.paa",
			"BCG_Armour\data\helmets\Heritage\camo2_co.paa",
			
		};
	};
	
	// vests
	class BCG_Armour_Warrior: tgf_armour_battle_armour {
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Armour Warrior";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};	
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Battle\beskarized.rvmat",
			"BCG_Armour\data\vests\Battle\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Battle\camo1_co.paa",
			"BCG_Armour\data\vests\Battle\camo2_co.paa"
		};
	};
	class BCG_Armour_Forgemaster: tgf_armour_forgemaster_armour {
		displayName="[BCG] Armour Forgemaster";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Forge\beskarized.rvmat",
			"BCG_Armour\data\vests\Forge\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Forge\camo1_co.paa",
			"BCG_Armour\data\vests\Forge\camo2_co.paa"
		};
	};
	class BCG_Armour_Heavy: tgf_armour_heavy_armour {
		displayName="[BCG] Armour Heavy";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Heavy\beskarized.rvmat",
			"BCG_Armour\data\vests\Forge\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Heavy\camo1_co.paa",
			"BCG_Armour\data\vests\Heavy\camo2_co.paa"
		};
	};
	class BCG_Armour_Light: tgf_armour_light_armour {
		displayName="[BCG] Armour Light";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Light\beskarized.rvmat",
			"BCG_Armour\data\vests\Light\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Light\camo1_co.paa",
			"BCG_Armour\data\vests\Light\camo2_co.paa"
		};
	};
	class BCG_Armour_Medium: tgf_armour_medium_armour {
		displayName="[BCG] Armour Medium";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Medium\beskarized.rvmat",
			"BCG_Armour\data\vests\Medium\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Medium\camo1_co.paa",
			"BCG_Armour\data\vests\Medium\camo2_co.paa"
		};
	};
	class BCG_Armour_Super_Light: tgf_armour_super_light_armour {
		displayName="[BCG] Armour Super Light";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			
			"BCG_Armour\data\vests\SLight\beskarized.rvmat",
			"BCG_Armour\data\vests\SLight\beskarized.rvmat"
					
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\SLight\camo1_co.paa",
			"BCG_Armour\data\vests\SLight\camo2_co.paa"
		};
	};
	class BCG_Armour_WarChief: tgf_armour_war_chief_armour {
		displayName="[BCG] Armour War Chief";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\WarChief\beskarized.rvmat",
			"BCG_Armour\data\vests\WarChief\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\WarChief\camo1_co.paa",
			"BCG_Armour\data\vests\WarChief\camo2_co.paa"
		};
	};
	class BCG_Armour_Arbiter: tgf_armour_arbiter_armour {
		displayName="[BCG] Armour Arbiter";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};		
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\vests\Arbiter\beskarized.rvmat",
			"BCG_Armour\data\vests\Arbiter\beskarized.rvmat"
			
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\vests\Arbiter\camo1_co.paa",
			"BCG_Armour\data\vests\Arbiter\camo2_co.paa"
		};
	};
	class BCG_Plate_Vest: knd_vest_aranov {
		displayName="[BCG] Neifer's Shoulder Plates";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsMaterials[]={
		"BCG_Armour\data\uniforms\neiferheavy\Vest\beskarshiny.rvmat"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\uniforms\neiferheavy\Vest\vest_co.paa"
	
		};
	};
	class BCG_Base_Holster: knd_vest_beroya {
		displayName="[BCG] Holster and Pouches";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\BHolster\camo3_co.paa"
	
		};
	};
	class BCG_Dual_Holster: knd_vest_beroya_dual {
		displayName="[BCG] Dual Holsters";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\BHolster\camo3_co.paa"
	
		};
	};
	class BCG_LightDual_Holster: knd_vest_beroya_dual_light {
		displayName="[BCG] Light Dual Holsters";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\BHolster\camo3_co.paa"
	
		};
	};
	class BCG_NiteO_Holster: knd_vest_dalverd {
		displayName="[BCG] Nite Owl Holster";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\DHolster\camo3_co.paa"
	
		};
	};
	class BCG_NiteOD_Holster: knd_vest_dalverd_dual {
		displayName="[BCG] Nite Owl Dual Holsters";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\DHolster\camo3_co.paa"
	
		};
	};
	class BCG_NiteODL_Holster: knd_vest_dalverd_dual_light {
		displayName="[BCG] Nite Owl Dual Holsters Light";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
		
		"BCG_Armour\data\vests\DHolster\camo3_co.paa"
	
		};
	};
	// uniforms
	class BCG_Suit_Black: tgf_undersuit_uniform_black_seal {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Undersuit Standard";
		class ItemInfo: UniformItem {
			containerClass="Supply250";
			mass=40;
			uniformClass="BCG_Uni_Black";
		};
	};	
	class BCG_Suit_Medic: tgf_undersuit_uniform_black_seal {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Undersuit Medic";
		class ItemInfo: UniformItem {
			containerClass="Supply250";
			mass=40;
			uniformClass="BCG_Uni_Medic";			
		};
	};
	class BCG_Heavy_Plate: knd_Aranov_Solid {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Heavy Plate Neifer";
		class Iteminfo: UniformItem {
			containerClass="Supply550";
			mass=40;
			uniformClass="BCG_Plate_Heavy";
			
		};
	};
	class BCG_Dalverd_Gray: knd_dalverd {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Dal'verd Gray";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformModel = "knd_dalverd\data\dalverd.p3d";
			uniformClass = "BCG_Uni_Dalverd_Gray";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_Dalverd_Gray_BLK: knd_dalverd {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Dal'verd Gray BLK";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformModel = "knd_dalverd\data\dalverd.p3d";
			uniformClass = "BCG_Uni_Gray_BLK";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_base_armor_d: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Base Armor Dark";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_base_armor_d";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_base_armor_l: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Base Armor Light";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_base_armor_l";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_baseF_armor_d: knd_dalverd {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Nite Owl Armor Dark";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_baseF_armor_d";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_baseF_armor_l: knd_dalverd {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Nite Owl Armor Light";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_baseF_armor_l";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_michelin: tgf_undersuit_uniform_male_neo {
		scope=2;
		scopeArsenal=2;
		author="neifer";
		displayName="Michelin Man";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_funny";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo1"};
		};
	};
	
	// nvg
	class BCG_nvg_circuit: tgf_nvg_circuit 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Integrated NVG Circuit";
		hiddenSelections[]=
		{
			
			"camo1",
		};
	class ItemInfo
    {
            type=616;
            hmdType=0;
            hiddenSelections[]=
			{
				"camo1"
			};
            mass=2;
		};
	};
	class BCG_Rangefinder_R : tgf_nvg_rangefinder_r 
	{
		displayName="[BCG] Rangefinder R";
		hiddenSelections[]=
		{
			"camo1",			
		};		
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\nvg\rangefinder\beskarized.rvmat",		
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\nvg\rangefinder\camo1_co.paa",
		};
	};
	class BCG_antenna_L : tgf_nvg_recon_antenna_L 
	{
		displayName="[BCG] Recon Antenna L";
		hiddenSelections[]=
		{
			"camo1",			
		};		
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\nvg\recon\beskarized.rvmat",	
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\nvg\recon\camo1_co.paa",
		};
	};
	class BCG_heavy_nv : tgf_nvg_heavy_nv 
	{
		displayName="[BCG] Heavy Attachment";
		hiddenSelections[]={
			"camo1",			
		};		
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\nvg\heavy\beskarized.rvmat",	
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\nvg\heavy\camo1_co.paa",
		};
	};
	class BCG_avenger_nv : tgf_nvg_avenger_nv 
	{
		displayName="[BCG] Avenger Antenna";
		hiddenSelections[]={
			"camo1",			
		};		
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\nvg\avenger\beskarized.rvmat",	
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\nvg\avenger\camo1_co.paa",
		};
	};
};


class cfgVehicles
{
	//uniforms
	class tgf_undersuit_unit_black_seal;
	class knd_Aranov_Solid_F;
	class knd_dalverd_F;
	class knd_beroya_F;
	class tgf_undersuit_uniform_male_neo;
	
	//jetpacks
	class JLTS_Clone_jumppack_JT12;
	class tgf_backpacks_JT12;
	class tgf_backpacks_JT12_LR;
	class tgf_backpacks_Z6;
	class tgf_backpacks_Z6_LR;
	class knd_jetpack_maxim6_light;
	class knd_jetpack_maxim6_light_LR;
	class knd_jetpack_JT12_Maxim_Light;
	class knd_jetpack_JT12_Maxim_Light_LR;
	class knd_jetpack_JT13;
	class knd_jetpack_JT13_LR;
	class knd_jetpack_JT13_Uptuned_LR;
	
	//backpacks
	class TKE_AlicePackUCN;
	class TKE_AlicePackUCNM;
	class TKE_CamelBakUCN;
	class TKE_BackPack1;
	class TKE_BackPack2;
	class TKE_CamelBakV2UCN;
	class TKE_RadioPackUCN;
	
	class ContainerSupply;
	class Supply550: ContainerSupply 
	{
		maximumLoad = 550;
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Personalization
			{
                displayName="Personalization";
                condition="(uniform player) in [""BCG_Dalverd_Gray_BLK""]";
                statement="";
                icon = "";
                class Camo_Select
				{
                    displayName="Change Camouflage";
                    condition="(uniform player) in [""BCG_Dalverd_Gray_BLK""]";
                    statement="";
                    icon = "";
                    class Urban
                    {
                        displayName="Urban";
                        condition="true";
                        statement="[player, ""Urban""] call personalizeArmor_fnc_camoChange;";
                        icon = "";
                    };
                    class Desert
                    {
                        displayName="Desert";
                        condition="true";
                        statement="[_player, ""Desert""] call personalizeArmor_fnc_camoChange;";
                        icon = "";
                    };
                    class Winter
                    {
                        displayName="Winter";
                        condition="true";
                        statement="[_player, ""Winter""] call personalizeArmor_fnc_camoChange;";
                        icon = "";
                    };
                    class Woodland
                    {
                        displayName="Woodland";
                        condition="true";
                        statement="[_player, ""Woodland""] call personalizeArmor_fnc_camoChange;";
                        icon = "";
                    };
                };
			};
		};
	};
	
	// uniforms
	class BCG_Uni_Black: tgf_undersuit_unit_black_seal
	{
		displayName="[BCG] Undersuit Standard";
		uniformClass="BCG_Suit_Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\uniforms\camo1_black_co.paa",
			"BCG_Armour\data\uniforms\camo2_co.paa"
		};
	};
	class BCG_Uni_Medic: tgf_undersuit_unit_black_seal 
	{
		displayName="[BCG] Undersuit Medic";
		uniformClass="BCG_Suit_Medic";
		hiddenSelections[]=
		{
		
		"camo1",
		"camo2"
		
		};
		hiddenSelectionsTextures[]= 
		{
		
		"BCG_Armour\data\uniforms\medic\camo1_medic_co.paa",
		"BCG_Armour\data\uniforms\camo2_co.paa"
		
		};
	};
	class BCG_Plate_Heavy: knd_Aranov_Solid_F
	{
		displayName="[BCG] Neifer's Armor";
		uniformClass="BCG_Heavy_Plate";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\beskarshiny.rvmat",
			"BCG_Armour\data\beskarshiny1.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\uniforms\neiferheavy\armor\camo1_co.paa",
			"BCG_Armour\data\uniforms\neiferheavy\armor\camo2_co.paa"
		};
	};
	class BCG_Uni_Dalverd_Gray: knd_dalverd_F
	{
		scope = 1;
		model = "knd_dalverd\data\dalverd.p3d";
		uniformClass = "BCG_Dalverd_Gray";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\dalverd\camo1_co.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_Uni_Dalverd_Gray_BLK: knd_dalverd_F
	{
		scope = 1;
		model = "knd_dalverd\data\dalverd.p3d";
		uniformClass = "BCG_Dalverd_Gray_BLK";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\dalverd\camo1_co.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_Uni_base_armor_d: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_base_armor_d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\base\camo1_co.paa","BCG_Armour\data\uniforms\base\camo2_co.paa","BCG_Armour\data\uniforms\base\camo3_co.paa"};	
	};
	class BCG_Uni_base_armor_l: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_base_armor_l";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\base\camo1light_co.paa","BCG_Armour\data\uniforms\base\camo2light_co.paa","BCG_Armour\data\uniforms\base\camo3_co.paa"};	
	};
	class BCG_Uni_baseF_armor_d: knd_dalverd_F
	{
		scope = 1;
		uniformClass = "BCG_base_armor_d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\baseF\camo1_co.paa","BCG_Armour\data\uniforms\baseF\camo2_co.paa","BCG_Armour\data\uniforms\baseF\camo3_co.paa"};	
	};
	class BCG_Uni_baseF_armor_l: knd_dalverd_F
	{
		scope = 1;
		uniformClass = "BCG_base_armor_l";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\baseF\camo1light_co.paa","BCG_Armour\data\uniforms\baseF\camo2light_co.paa","BCG_Armour\data\uniforms\baseF\camo3_co.paa"};	
	};
	class BCG_funny : tgf_undersuit_uniform_male_neo
	{
		scope = 1;
		uniformClass = "BCG_michelin";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\funny\camo1_co.paa"};		
	};

	// backpacks
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
	
	//jetpacks
	class BCG_Backpack_JT12: knd_jetpack_JT12_Maxim_Light
	{
		displayName = "[BCG] JT12 Ascension Pack";
		scope = 2;
		picture = "knd_jetpacks\data\JT12_icon_co.paa";
		author = "Maxim + Jenna";
		model = "\knd_jetpacks\data\jt12\jt12.p3d";
		hiddenselections[] = {"rocket","pack"};
		hiddenselectionstextures[] = {"\knd_jetpacks\data\jt12\rocket_co.paa","\knd_jetpacks\data\jt12\pack_co.paa"};
		knd_jetpack_acceleration = 1.8;
		knd_jetpack_resistance = 4;
		knd_jetpack_fuelCoef = 1.5;
		knd_jetpack_heatCoef = 1.1;
		knd_jetpack_coolCoef = 1;
		knd_jetpack_ascensionCoef = 1;
		knd_jetpack_jumpCoef = 1;
		knd_jetpack_fuelCapacity = 400;
		knd_jetpack_strafeCoef = 0.3;
		maximumLoad = 500;
	};
	class BCG_Backpack_JT12_LR: knd_jetpack_JT12_Maxim_Light_LR
	{
		displayName = "[BCG] JT12 Ascension Pack LR";
		model = "\knd_jetpacks\data\jt12RTO\jt12RTO.p3d";
		hiddenselections[] = {"rocket","pack"};
		hiddenselectionstextures[] = {"\knd_jetpacks\data\jt12\rocket_co.paa","\knd_jetpacks\data\jt12RTO\pack_co.paa"};
		maximumLoad = 500;
	};
	class BCG_Backpack_JT13: knd_jetpack_JT13
	{
		author = "Maxim + Jenna";
		displayName = "[BCG] JT13 Cliff Racer Pack";
		scope = 2;
		hiddenselections[] = {"camo1"};
		hiddenselectionstextures[] = {"knd_jetpacks\data\jt13\camo1_co.paa"};
		maximumLoad = 500;
	};
	class BCG_Backpack_JT13_LR: knd_jetpack_JT13_LR
	{
		displayName = "[BCG] JT13 Cliff Racer Pack LR";
		model = "knd_jetpacks\data\jt13RTO\JT13RTO.p3d";
		hiddenselectionstextures[] = {"knd_jetpacks\data\jt13RTO\camo1_co.paa"};
		maximumLoad = 500;
	};
	class BCG_Backpack_Z6: knd_jetpack_maxim6_light
	{
		displayName = "[BCG] Z-6 Draigon Pack";
		scope = 2;
		model = "knd_jetpacks\data\z6\z6_final.p3d";
		hiddenselections[] = {"rocket","pack"};
		hiddenselectionstextures[] = {"knd_jetpacks\data\Z6\Rocket_co.paa","BCG_Armour\data\backpacks\z6\pack_co.paa"};
		maximumLoad = 500;
	};
	class BCG_Backpack_Z6_LR: knd_jetpack_maxim6_light_LR {
		displayName = "[BCG] Z-6 Draigon Pack LR";
		model = "knd_jetpacks\data\z6RTO\z6RTO.p3d";
		hiddenselectionstextures[] = {"knd_jetpacks\data\Z6\Rocket_co.paa","BCG_Armour\data\backpacks\z6rto\pack_co.paa"};
		maximumLoad = 500;
	};
	class BCG_Backpack_Neifer: knd_jetpack_JT13_Uptuned_LR {
		displayName = "[BCG] Neifer's JT13";
		hiddenselections[] = {"camo1"};
		hiddenSelectionsMaterials[]= {"BCG_Armour\data\backpacks\jetpack\customs\beskarized.rvmat"};
		hiddenselectionstextures[] = {"BCG_Armour\data\backpacks\jetpack\customs\neifer_co.paa"};
		maximumLoad = 500;	
	};
};