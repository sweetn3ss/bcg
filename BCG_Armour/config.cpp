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
	
	class tgf_armour_base;
	class tgf_armour_heavy_armour;
	class tgf_armour_battle_armour;
	class tgf_armour_forgemaster_armour;
	class tgf_armour_light_armour;
	class tgf_armour_medium_armour;
	class tgf_armour_super_light_armour;
	class tgf_armour_war_chief_armour;
	class tgf_armour_arbiter_armour;
	
	class tgf_undersuit_uniform_black_seal;
	
		
	class tgf_nvg_rangefinder_r;
	class tgf_nvg_recon_antenna_L;
	class tgf_nvg_heavy_nv;
	class tgf_nvg_circuit;
	
	// helmets
	class BCG_Helmet_RallyMaster: tgf_helmets_battle_master {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Rally Master Helmet";
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
		
		};
	};
	class BCG_Helmet_Warlord: tgf_helmets_warlord {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Warlord";
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
	
	// uniforms
	class BCG_Suit_Black: tgf_undersuit_uniform_black_seal 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Undersuit Standard";
		class ItemInfo: UniformItem {
			containerClass="Supply200";
			mass=40;
			uniformClass="BCG_Uni_Black";
		};
	};	
	class BCG_Suit_Medic: tgf_undersuit_uniform_black_seal 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[BCG] Undersuit Medic";
		class ItemInfo: UniformItem {
			containerClass="Supply200";
			mass=40;
			uniformClass="BCG_Uni_Medic";
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
};


class cfgVehicles
{
	class tgf_undersuit_unit_black_seal;
	class JLTS_Clone_jumppack_JT12;
	class tgf_backpacks_JT12;
	class tgf_backpacks_JT12_LR;
	class tgf_backpacks_Z6;
	class tgf_backpacks_Z6_LR;
	class TKE_AlicePackUCN;
	class TKE_AlicePackUCNM;
	class TKE_CamelBakUCN;
	class TKE_BackPack1;
	class TKE_BackPack2;
	class TKE_CamelBakV2UCN;
	class TKE_RadioPackUCN;
	
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
	
	// backpacks
	class BCG_Backpack_JT12: tgf_backpacks_JT12 {
		displayName="[BCG] JT12 Ascension Pack";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\backpacks\jumppack\JT12\camo1_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\backpacks\jumppack\JT12\beskarized.rvmat"
		};
	};
	class BCG_Backpack_JT12_LR: tgf_backpacks_JT12_LR {
		displayName="[BCG] JT12 Ascencion Pack LR";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\backpacks\jumppack\JT12\camo1_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\backpacks\jumppack\JT12\beskarized.rvmat"
		};
	};
	class BCG_Backpack_Z6: tgf_backpacks_Z6 {
		displayName="[BCG] Z6 Draigon Pack";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\backpacks\jumppack\Z6\camo1_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\backpacks\jumppack\Z6\beskarized.rvmat"
		};
	};
	class BCG_Backpack_Z6_LR: tgf_backpacks_Z6_LR {
		displayName="[BCG] Z6 Draigon Pack LR";
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
			"BCG_Armour\data\backpacks\jumppack\Z6\camo1_co.paa"
			};
		hiddenSelectionsMaterials[]={
			"BCG_Armour\data\backpacks\jumppack\Z6\beskarized.rvmat"
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
