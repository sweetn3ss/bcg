class cfgPatches {
	class BCG_Customs {
		authors[] = {"Gray","Neifer","Wolves","Indie Beninging","Gryffin"};
		name = "Buy'ce Gal Cabur Customs";
		weapons[]={};
		units[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_armor_greenfor", "tgf_helmets", "tgf_armour", "tgf_undersuit", "knd_Aranov", "knd_dalverd", "knd_newArmor"};
	};
};
class cfgWeapons {
	
	// global inherits for most items when needed
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	
	// base helmet inherits
	class tgf_helmets_battle_master; 
	class knd_helmet_Wren;
	class knd_helmet_punk;
	class tgf_helmets_warlord;
	class knd_helmet_Matriarch;
	class BCG_Helmet_Gunslinger;
	class tgf_helmets_executioner;
	class SFA_Scout_Trooper_STND_Helmet;
	class knd_helmet_Kaste;
	class BCG_Helmet_Arbiter;
	
	// vest inherits
	class knd_vest_aranov;
	
	// uniform inherits
	class knd_Aranov_Solid;
	class knd_dalverd;
	class knd_beroya;
	
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
			"BCG_Customs\data\neifer\helmet\goldenized.rvmat"
		};
		hiddenSelectionsTextures[]={
			"BCG_Customs\data\neifer\camo1_co.paa",
			"BCG_Customs\data\neifer\camo2_co.paa"
		};
	};
	class BCG_Helmet_Wren_Gray: knd_helmet_Wren {
		displayName = "[BCG] Wren Gray";
		author = "Gray";
		scope = 2;
		model = "\knd_newHelmets\data\Wren\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Customs\data\Gray\bcg_wren_gray_blk.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
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
		hiddenSelectionstextures[] = {"BCG_Customs\data\Gray\bcg_wren_gray_blk.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
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
		hiddenSelectionstextures[] = {"BCG_Customs\data\Gray\bcg_wren_gray_des.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
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
		hiddenSelectionstextures[] = {"BCG_Customs\data\Gray\bcg_wren_gray_sno.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
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
		hiddenSelectionstextures[] = {"BCG_Customs\data\Gray\bcg_wren_gray_wdl.paa","knd_newHelmets\tex\Wren\camo2_co.paa"};
		class iteminfo: ItemInfo
		{
			uniformmodel = "\knd_newHelmets\data\Wren\helmet.p3d";
			hiddenSelections[] = {"camo1","camo2"};
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
			"BCG_Customs\data\Mavi\mavi1_co",
			"BCG_Customs\data\Mavi\mavi2_co",
			"BCG_Customs\data\Mavi\mavi3_co"
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
			"BCG_Customs\data\Gryffin\Warlord_Gryffin_Custom.paa",
			"BCG_Armour\data\helmets\Warlord\camo2_co.paa"
		};
	};
	class BCG_Helmet_Wolves: knd_helmet_Matriarch {
		displayName = "[BCG] Matriarch Wolves";
		author = "Gray & Wolves";
		scope = 2;
		model = "\knd_newHelmets\data\Matriarch\helmet.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"bcg_Customs\data\wolves\bcg_matriarch_wolves_blk.paa","knd_newHelmets\tex\Matriarch\camo2_co.paa"};
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
		subItems[]={};
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Customs\data\jacks\bcg_gunslinger_jacks_blk.paa",
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
		subItems[]={};
		descriptionShort = "Score 34785692857 for the Yeetster";
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Customs\data\tacobell\gunslinger.paa",
			"BCG_Customs\data\tacobell\camo2_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Customs\data\tacobell\camo1.rvmat",
			"BCG_Customs\data\tacobell\camo2.rvmat"
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
			"BCG_Customs\data\Ace\Ace.paa",
			"BCG_Customs\data\Ace\Visor.paa"
		};
	};
	class BCG_Helmet_Juggy: SFA_Scout_Trooper_STND_Helmet {
		displayName = "[BCG] Scout Juggy";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"BCG_Customs\data\Juggy\Juggy.paa"};
		descriptionShort = "The genie adds another 10-inch penis.";
	};
	class BCG_Helmet_Rag: knd_helmet_Kaste {
		displayName = "[BCG] Kaste Rag";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionstextures[] = {"BCG_Customs\data\Rag\Rag.paa","knd_newHelmets\tex\Kaste\camo2_co.paa"};
		descriptionShort = "Most shootable helmet this side of the Mississippi.";
		subItems[]={};
	};
	class BCG_Helmet_Chask: BCG_Helmet_Arbiter {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Arbiter Chask";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		knd_hasLowLight = 1;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Customs\data\Chask\Chask1.paa",
			"BCG_Armour\data\helmets\Arbiter\camo2_co.paa"
		};
	};
	
	// vests
	class BCG_Plate_Vest: knd_vest_aranov {
		displayName="[BCG] Neifer's Shoulder Plates";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsMaterials[]={"BCG_Customs\data\neifer\Vest\beskarshiny.rvmat"};
		hiddenSelectionsTextures[]={"BCG_Customs\data\neifer\Vest\vest_co.paa"};
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
};

class cfgVehicles {
	
	// global inherits
	class knd_Aranov_Solid_F;
	class knd_dalverd_F;
	class knd_beroya_F;
	
	// uniforms
	class BCG_Plate_neifer: knd_Aranov_Solid_F {
		displayName="[BCG] Neifer's Armor";
		uniformClass="BCG_Heavy_neifer";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"BCG_Customs\data\neifer\Armor\beskarshiny.rvmat",
			"BCG_Customs\data\neifer\Armor\beskarshiny1.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Customs\data\neifer\armor\camo1_co.paa",
			"BCG_Customs\data\neifer\armor\camo2_co.paa"
		};
	};
	class BCG_Uni_Dalverd_Gray: knd_dalverd_F {
		scope = 1;
		model = "knd_dalverd\data\dalverd.p3d";
		uniformClass = "BCG_Dalverd_Gray";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Customs\data\gray\bcg_dalverd_gray_blk.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_Uni_Dalverd_Gray_BLK: knd_dalverd_F {
		scope = 1;
		model = "knd_dalverd\data\dalverd.p3d";
		uniformClass = "BCG_Uni_Gray_BLK";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Customs\data\gray\camo1_co.paa","knd_dalverd\data\camo2_dark_co.paa","knd_dalverd\data\camo3_co.paa"};
	};
	class BCG_jacks: knd_beroya_F {
		scope = 1;
		uniformClass = "BCG_jacks_custom";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Customs\data\Jacks\jacks.paa","BCG_Armour\data\uniforms\base\newberoyapants.paa","BCG_Armour\data\uniforms\base\camo3_co.paa"};	
	};
};