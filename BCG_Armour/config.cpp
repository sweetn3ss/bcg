class cfgPatches {
	class BCG_Armour {
		authors[] = {"Gray","Neifer","Beckket","Indie Beninging"};
		name = "Buy'ce Gal Cabur Armoury";
		weapons[]={};
		units[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_armor_greenfor", "tgf_helmets", "tgf_armour", "tgf_undersuit", "knd_Aranov", "knd_dalverd", "knd_newArmor"};
	};
};

class cfgWeapons {
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	
	class tgf_helmets_battle_master;
	class tgf_helmets_arbiter;
	class tgf_helmets_forgemaster;
	class tgf_helmets_pilot;
	class tgf_helmets_shrike;
	class tgf_helmets_super_commando;
	class tgf_helmets_super_commando_vet;
	class tgf_helmets_viper;
	class tgf_helmets_viper_vet;
	class tgf_helmets_war_chief;
	class tgf_helmets_warlord;
	class tgf_helmets_executioner;
	class tgf_helmets_heritage;
	class knd_helmet_Armorer;
	class knd_helmet_classic;
	class knd_helmet_Paz;
	class knd_helmet_Sabine;
	class knd_helmet_Foreman;
	class knd_helmet_Guardian;
	class knd_helmet_Grunt;
	class knd_helmet_Liege;
	class knd_helmet_Rook;
	class knd_helmet_Wren;	
	class knd_helmet_Djarin;
	class knd_helmet_Matriarch;
	class tgf_helmets_traditional;
	
	class tgf_armour_base;
	class tgf_armour_heavy_armour;
	class tgf_armour_battle_armour;
	class tgf_armour_forgemaster_armour;
	class tgf_armour_light_armour;
	class tgf_armour_medium_armour;
	class tgf_armour_super_light_armour;
	class tgf_armour_war_chief_armour;
	class tgf_armour_arbiter_armour;
	class knd_vest_aranov;
	class knd_vest_beroya;
	class knd_vest_beroya_dual;
	class knd_vest_beroya_dual_light;
	class knd_vest_dalverd;
	class knd_vest_dalverd_dual;
	class knd_vest_dalverd_dual_light;
	class knd_kama;
	
	class tgf_undersuit_uniform_black_seal;
	class knd_Aranov_Solid;
	class knd_dalverd;
	class knd_beroya;
	class knd_akior;
	class knd_kovshukur;
	class knd_helmet_punk;

	
		
	class tgf_nvg_rangefinder_r;
	class tgf_nvg_recon_antenna_L;
	class tgf_nvg_circuit;
	class knd_nvg_nya;
	
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
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\ForgeMaster\camo1_co.paa",
			"BCG_Armour\data\helmets\ForgeMaster\camo2_co.paa"
		};
	};
	class BCG_Helmet_Gunslinger: knd_helmet_Djarin {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Gunslinger";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Gunslinger\camo1_co.paa",
			"BCG_Armour\data\helmets\Gunslinger\camo2_co.paa"
		};
	};
	class BCG_Helmet_paz: knd_helmet_Paz {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet PAZ";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\paz\camo1_co.paa",
			"BCG_Armour\data\helmets\paz\camo2_co.paa"
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
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\SuperCommandoVet\camo1_co.paa",
			"BCG_Armour\data\helmets\SuperCommandoVet\camo2_co.paa"
		};
	};
	class BCG_Helmet_beroya: knd_helmet_classic {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Beroya";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\beroya\camo1_co.paa",
			"BCG_Armour\data\helmets\beroya\camo2_co.paa"
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
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\Warlord_Gryffin_Custom.paa",
			"BCG_Armour\data\helmets\Warlord\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Mavi: knd_helmet_punk {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Ambassador Mavi";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2",
			"camo"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\Mavi\mavi1_co",
			"BCG_Armour\data\helmets\customs\Mavi\mavi2_co",
			"BCG_Armour\data\helmets\customs\Mavi\mavi3_co",
			
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
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\funny.paa",
			"BCG_Armour\data\helmets\Traditional\camo2_co.paa"
		};
	};
	class BCG_Helmet_Sabine: knd_helmet_Sabine {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Sabine Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Sabine\camo1_co.paa",
			"BCG_Armour\data\helmets\Sabine\camo2_co.paa"
		};
	};
	class BCG_Helmet_Rook: knd_helmet_Rook {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Rook Helmet";
		hiddenSelections[]={
			"camo1",
			"camo2"
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
		scopeArsenal = 1;
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
		scopeArsenal = 1;
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
		scopeArsenal = 1;
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
		scopeArsenal = 1;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Armour\data\helmets\Wren\bcg_wren_gray_wdl.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
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
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Heritage\camo1_co.paa",
			"BCG_Armour\data\helmets\Heritage\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Armorer: knd_helmet_armorer {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Armorer Helmet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\Armorer\camo1_co.paa",
			"BCG_Armour\data\helmets\Armorer\camo2_co.paa",
			
		};
	};
	class BCG_Helmet_Foreman: knd_helmet_Foreman {
		displayName = "[BCG] Foreman Helmet";
		scope = 2;
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = {
			"BCG_Armour\data\helmets\Foreman\camo1_co.paa",
			"BCG_Armour\data\helmets\Foreman\camo2_co.paa"
		};
	};
	class BCG_Helmet_Guardian: knd_helmet_Guardian {
		displayName = "[BCG] Guardian Helmet";
		scope = 2;
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = {
			"BCG_Armour\data\helmets\Guardian\camo1_co.paa",
			"BCG_Armour\data\helmets\Guardian\camo2_co.paa"
		};
	};
	class BCG_Helmet_Grunt: knd_helmet_Grunt {
		displayName = "[BCG] Grunt Helmet";
		scope = 2;
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = {
			"BCG_Armour\data\helmets\Grunt\camo1_co.paa",
			"BCG_Armour\data\helmets\Grunt\camo2_co.paa"
		};
	};
	class BCG_Helmet_Liege: knd_helmet_Liege {
		displayName = "[BCG] Liege Helmet";
		scope = 2;
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = {
			"BCG_Armour\data\helmets\Liege\camo1_co.paa",
			"BCG_Armour\data\helmets\Liege\camo2_co.paa"
		};
	};
	class BCG_Helmet_Wolves: knd_helmet_Matriarch {
		displayName = "[BCG] Matriarch Wolves";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Matriarch\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"bcg_armour\data\helmets\customs\wolves\bcg_matriarch_wolves_blk.paa","knd_newHelmets\tex\Matriarch\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Matriarch\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class BCG_Helmet_Jacks: BCG_Helmet_Gunslinger {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Gunslinger Jacks";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\jacks\bcg_gunslinger_jacks_blk.paa",
			"BCG_Armour\data\helmets\Gunslinger\camo2_co.paa"
		};
	};
	class BCG_Helmet_Yeetster: BCG_Helmet_Gunslinger {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Gunslinger Yeet";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\tacobell\gunslinger.paa",
			"BCG_Armour\data\helmets\customs\tacobell\camo2_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\helmets\customs\tacobell\camo1.rvmat",
			"BCG_Armour\data\helmets\customs\tacobell\camo2.rvmat"
		};
	};
	class BCG_Helmet_Ace: tgf_helmets_executioner {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Executioner Ace";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\helmets\customs\Ace\Ace.paa",
			"BCG_Armour\data\helmets\customs\Ace\Visor.paa"
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
		hiddenSelections[]={"camo1"};
		hiddenSelectionsMaterials[]={"BCG_Armour\data\uniforms\neiferheavy\Vest\beskarshiny.rvmat"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\uniforms\neiferheavy\Vest\vest_co.paa"};
	};
	class BCG_Base_Holster: knd_vest_beroya {
		displayName="[BCG] Holster and Pouches";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\BHolster\camo3_co.paa"};
	};
	class BCG_Dual_Holster: knd_vest_beroya_dual {
		displayName="[BCG] Dual Holsters";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\BHolster\camo3_co.paa"};
	};
	class BCG_LightDual_Holster: knd_vest_beroya_dual_light {
		displayName="[BCG] Light Dual Holsters";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\BHolster\camo3_co.paa"};
	};
	class BCG_NiteO_Holster: knd_vest_dalverd {
		displayName="[BCG] Nite Owl Holster";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\DHolster\camo3_co.paa"};
	};
	class BCG_NiteOD_Holster: knd_vest_dalverd_dual {
		displayName="[BCG] Nite Owl Dual Holsters";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\DHolster\camo3_co.paa"};
	};
	class BCG_NiteODL_Holster: knd_vest_dalverd_dual_light {
		displayName="[BCG] Nite Owl Dual Holsters Light";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\DHolster\camo3_co.paa"};
	};
	class BCG_Vest_Heavy: knd_vest_aranov {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BCG] Heavy Plate";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\aranov\vest_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelections[]={"camo1"};
			vestType = "Rebreather";
			containerClass="Supply250";
			mass=80;
			modelSides[]={6};
			uniformModel = "knd_aranov\data\vest.p3d";
		};
	};
	class BCG_Vest_Wolves: knd_vest_aranov {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BCG] Wolves' Shoulder Plates";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\vests\aranov\wolves.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelections[]={"camo1"};
			vestType = "Rebreather";
			containerClass="Supply250";
			mass=80;
			modelSides[]={6};
			uniformModel = "knd_aranov\data\vest.p3d";
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
	class BCG_Heavy_neifer: knd_Aranov_Solid {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Heavy Plate Neifer";
		class Iteminfo: UniformItem {
			containerClass="Supply550";
			mass=40;
			uniformClass="BCG_Plate_neifer";
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
		scope=1;
		scopeArsenal=1;
		author="Gray";
		displayName="[BCG] Dal'verd Gray BLK";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		camoTypes[] = {"BLK","DES","SNO","WDL"};
		class ItemInfo: UniformItem {
			uniformModel = "knd_dalverd\data\dalverd.p3d";
			uniformClass = "BCG_Uni_Dalverd_Gray_BLK";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_base_armor_d: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Neifer";
		displayName="[BCG] Base Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_base_armor_d";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_jacks_custom: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Jacks' Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_jacks";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_camo_test: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Neifer";
		displayName="[BCG] Camo Test";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_camo";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_baseF_armor_d: knd_dalverd {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Nite Owl Armor";
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
		scope=1;
		scopeArsenal=1;
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
	class BCG_akior: knd_akior {
		scope=2;
		scopeArsenal=2;
		author="Neifer";
		displayName="[BCG] Akior Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_discountjedi";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_kyramud: knd_kovshukur {
		scope=2;
		scopeArsenal=2;
		author="Neifer";
		displayName="[BCG] Kyramud Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Uni_kyramud";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_Heavy_Plate: knd_Aranov_Solid {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Heavy Armor";
		class Iteminfo: UniformItem {
			containerClass="Supply550";
			mass=40;
			uniformClass="BCG_Plate_Heavy";
		};
	};
	class BCG_Heavy_Wolves: knd_Aranov_Solid {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Heavy Wolves";
		class Iteminfo: UniformItem {
			containerClass="Supply550";
			mass=40;
			uniformClass="BCG_Plate_Wolves";
		};
	};
	
	// nvg
	class BCG_nvg_circuit: tgf_nvg_circuit 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Integrated NVG Circuit";
		hiddenSelections[]={"camo1"};
		class ItemInfo
		{
            type=616;
            hmdType=0;
            hiddenSelections[]={"camo1"};
            mass=2;
		};
	};
	class BCG_Rangefinder_R : tgf_nvg_rangefinder_r 
	{
		displayName="[BCG] Rangefinder R";
		hiddenSelections[]={"camo1"};		
		hiddenSelectionsMaterials[]={"BCG_Armour\data\nvg\rangefinder\beskarized.rvmat",};
		hiddenSelectionsTextures[]={"BCG_Armour\data\nvg\rangefinder\camo1_co.paa"};
	};
	class BCG_antenna_L : tgf_nvg_recon_antenna_L 
	{
		displayName="[BCG] Recon Antenna L";
		hiddenSelections[]={"camo1"};		
		hiddenSelectionsMaterials[]={"BCG_Armour\data\nvg\recon\beskarized.rvmat"};
		hiddenSelectionsTextures[]={"BCG_Armour\data\nvg\recon\camo1_co.paa"};
	};	
	class BCG_nya_nv : knd_nvg_nya
	{
		displayName="[BCG] Nya Antenna";
		hiddenSelections[]={"camo1"};		
		hiddenSelectionsTextures[]={"BCG_Armour\data\nvg\nya\camo1_co.paa"};
	};
};


class cfgVehicles {
	//uniforms
	class tgf_undersuit_unit_black_seal;
	class knd_Aranov_Solid_F;
	class knd_dalverd_F;
	class knd_beroya_F;
	class knd_akior_F;
	class knd_kovshukur_F;
	
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
	class knd_backpack_fieldpack;
	class knd_backpack_medic;
	class knd_backpack_heavy_LR;
	class knd_backpack_regular;
	
	class ContainerSupply;
	class Supply550: ContainerSupply 
	{
		maximumLoad = 550;
	};
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class Personalization {
                displayName="Personalization";
                condition="(uniform player) in [""BCG_Dalverd_Gray_BLK""]";
                statement="";
                icon = "";
                class Camo_Select {
                    displayName="Change Camouflage";
                    condition="(uniform player) in [""BCG_Dalverd_Gray_BLK""]";
                    statement="";
                    icon = "";
                    class Urban {
                        displayName="Urban";
                        condition="true";
                        statement="[ACE_player, 'Urban'] call bcg_armor_fnc_camoChange;";
                        icon = "";
                    };
                    class Desert {
                        displayName="Desert";
                        condition="true";
                        statement="[ACE_player, 'Desert'] call bcg_armor_fnc_camoChange;";
                        icon = "";
                    };
                    class Winter {
                        displayName="Winter";
                        condition="true";
                        statement="[ACE_player, 'Winter'] call bcg_armor_fnc_camoChange;";
                        icon = "";
                    };
                    class Woodland {
                        displayName="Woodland";
                        condition="true";
                        statement="[ACE_player, 'Woodland'] call bcg_armor_fnc_camoChange;";
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
	class BCG_Plate_neifer: knd_Aranov_Solid_F
	{
		displayName="[BCG] Neifer's Armor";
		uniformClass="BCG_Heavy_neifer";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"BCG_Armour\data\uniforms\neiferheavy\Armor\beskarshiny.rvmat",
			"BCG_Armour\data\uniforms\neiferheavy\Armor\beskarshiny1.rvmat"
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
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\dalverd\bcg_dalverd_gray_blk.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_Uni_Dalverd_Gray_BLK: knd_dalverd_F
	{
		scope = 1;
		model = "knd_dalverd\data\dalverd.p3d";
		uniformClass = "BCG_Uni_Gray_BLK";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\dalverd\camo1_co.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_Uni_base_armor_d: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_base_armor_d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\base\newberoya.paa","BCG_Armour\data\uniforms\base\newberoyapants.paa","BCG_Armour\data\uniforms\base\camo3_co.paa"};	
	};
	class BCG_jacks: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_jacks_custom";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\customs\jacks.paa","BCG_Armour\data\uniforms\base\newberoyapants.paa","BCG_Armour\data\uniforms\base\camo3_co.paa"};	
	};
	class BCG_camo: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_camo_test";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\camotest\camotest1.paa","BCG_Armour\data\uniforms\camotest\camotest2.paa","BCG_Armour\data\uniforms\camotest\camo3_co.paa"};	
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
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\baseF\camo1light_co.paa","BCG_Armour\data\uniforms\baseF\camo2_co.paa","BCG_Armour\data\uniforms\baseF\camo3_co.paa"};	
	};
	class BCG_Uni_discountjedi: knd_akior_F
	{
		scope = 2;
		uniformClass = "BCG_akior";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\akior\camo1_co.paa","BCG_Armour\data\uniforms\akior\camo2_co.paa","BCG_Armour\data\uniforms\akior\camo3_co.paa"};	
	};
	class BCG_Uni_kyramud: knd_kovshukur_F
	{
		scope = 2;
		uniformClass = "BCG_kyramud";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Armour\data\uniforms\Kyramud\camo1_co.paa"," ","BCG_Armour\data\uniforms\Kyramud\camo3_co.paa"};	
	};
	class BCG_Plate_Heavy: knd_Aranov_Solid_F
	{
		displayName="[BCG] Heavy Armor";
		uniformClass="BCG_Heavy_Plate";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\uniforms\heavy\camo1_co.paa",
			"BCG_Armour\data\uniforms\heavy\camo2_co.paa"
		};
	};
	class BCG_Plate_Wolves: knd_Aranov_Solid_F
	{
		displayName="[BCG] Heavy Armor";
		uniformClass="BCG_Heavy_Wolves";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Armour\data\uniforms\customs\wolves1.paa",
			"BCG_Armour\data\uniforms\customs\wolves2.paa"
		};
	};

	// backpacks
	class BCG_AlicePackUCN: knd_backpack_fieldpack {
		displayName = "[BCG] Alice Pack";
		maximumLoad = 550;
		mass = 40;/*
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_AlicePackUCN_co.paa"
		};*/
	};
	class BCG_AlicePackUCNM: knd_backpack_medic {
		displayName = "[BCG] Medical Alice Pack";
		maximumLoad = 550;
		mass = 40;/*
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\backpacks\medic backpack\BCG_Medical_Alicepack_co.paa"
		};*/
	};
	class BCG_BackPack1: knd_backpack_regular {
		displayName = "[BCG] Combat Pack";
		maximumLoad = 400;
		mass = 32;/*
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\TKE_Kuiper_Engagements\TKE_MD\data\TKE_BackPack1_co.paa"
		};*/
	};
	class BCG_RadioPackUCN: knd_backpack_heavy_LR {
		displayName = "[BCG] Radio Pack";
		maximumLoad = 250;
		mass = 32;/*
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\backpacks\radio pack\BCG_RadioPack_co.paa"
		};*/
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
