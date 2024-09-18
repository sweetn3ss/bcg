class CfgPatches
{
	class BCG_Weapons
	{
		requiredAddons[]={"OPTRE_Weapons","3AS_Weapons","JLTS_weapons_Core", "knd_silverhand","knd_ee3", "knd_mk", "knd_vornsk", "knd_amban", "knd_roba", "knd_de10", "knd_kGoodbye","OPTRE_M6GGNR", "knd_thompson", "knd_amr", "knd_dl44", "knd_beskad", "knd_westar_pistol", "knd_rotarycanon"};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		authors[]={"Gray","Neifer","Indie Beninging"};
	};
};
class cfgMagazines {
	class OPTRE_12Rnd_12Gauge_Pellets_Tracer;
	
	class BCG_12Rnd_12Gauge_Pellets_Tracer: OPTRE_12Rnd_12Gauge_Pellets_Tracer {
		displayname="[BCG] 12Rnd 12 Gauge Pellets (Tracer)";
		hiddenSelections[]={
			"camoBody"
		};
		hiddenSelectionsTextures[]={
			"BCG_Weapons\data\dullbog\Body_Black.paa",
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;	
class cfgWeapons {
	
	class OPTRE_CQS48_Bulldog_Automatic;
	class OPTRE_M393S_DMR;
	class OPTRE_M6GGNR;
	class SWLW_Westar35S;
	class SWLW_westar35c;
	class SWLW_Westar35SA;
	class LFP_RazorBlade;
	class knd_EE3;
	class knd_ee3_plastic;
	class knd_MK;
	class knd_silverhand;
	class knd_VORNSK_F;
	class knd_amban_F;
	class knd_roba_F;
	class knd_de10;
	class KND_KGoodBye;
	class knd_thompson_UGL_F;
	class knd_rotary;
	class knd_AMR_F;
	class knd_dl44;
	class knd_westar_bo;
	
	class DpSword;
	class demi_sv;
	class knd_orikad;
	class knd_axe;
	class knd_hammer;
	class knd_beskad;
	
	class JLTS_RPS6;
	class 3AS_PLX1_F;
	
	class JLTS_stun_muzzle;
	class 3AS_DWBlaster_F;
	

	class BCG_Bulldog: OPTRE_CQS48_Bulldog_Automatic 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Bulldog Slugthrower";
		baseWeapon="BCG_Bulldog";
		magazines[]={"BCG_12Rnd_12Gauge_Pellets_Tracer"};
		hiddenSelections[]=
		{
			"camoBody",
			"camoDecal"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Weapons\data\dullbog\Body_Black.paa",
			"BCG_Weapons\data\dullbog\DecalSheet_co.paa"
		}; 
		hiddenSelectionsMaterials[]=
		{
			"BCG_Weapons\data\dullbog\body.rvmat",
			"BCG_Weapons\data\dullbog\decal.rvmat"
		};
	};
	class BCG_M393S: OPTRE_M393S_DMR 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] M393S Slugthrower";
		baseWeapon="BCG_M393S";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Weapons\data\M393S\MainBody1_CO.paa",
			"BCG_Weapons\data\M393S\MainBody2_CO.paa"
		}; 	
	};
	
	class BCG_Westar35S: SWLW_Westar35S 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Westar 35S";
		baseWeapon="BCG_Westar35S";
	};
	
	class BCG_Westar35C: SWLW_westar35c 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Westar 35C";
		baseWeapon="BCG_Westar35C";
	};
	
	class BCG_Westar35SA: knd_westar_bo 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Westar 35SA";
		baseWeapon="BCG_Westar35SA";
	};
		
	class BCG_DC15SA: LFP_RazorBlade 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] DC-15SA";
		baseWeapon="BCG_DC15SA";
	};
	
	class BCG_VibroBlade: DpSword 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Vibro-Blade";
		baseWeapon="BCG_VibroBlade";
	};
	
	class BCG_VibroGS : demi_sv 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Vibro Greatsword";
		baseWeapon="BCG_VibroGS";
	};
	
	class BCG_RPS6: JLTS_RPS6 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] RPS6 Heavy Projectile Launcher";
		baseWeapon="BCG_RPS6";
	};
	
	class BCG_PLX1: 3AS_PLX1_F 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] PLX1 Proton Torpedo Launcher";
		baseWeapon="BCG_PLX1";
	};

	class BCG_Sponklo: OPTRE_M6GGNR
	{
		author="ya mum";
		displayName="[BCG] Rhodesian Sponkler";
		class WeaponSlotsInfo {
			mass=15;
		};
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Weapons\data\sponklo\Spartan_Laser_Camo1_co.paa",
			"BCG_Weapons\data\sponklo\Spartan_Laser_Camo2_co.paa"
		};
		baseWeapon="BCG_Sponklo";
	};
	
	class BCG_Gauntlet_BS: 3AS_DWBlaster_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] WIP Wrist Blaster"; // blaster + stun
		baseWeapon="BCG_Gauntlet_BS";
		recoil = "3as_recoil_light";
		modes[]={"Single","Burst"};
		muzzles[]={"this","stun"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_B2_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
			reloadTime = 0.1;
			dispersion = 0.00399;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Burst: Mode_Burst {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_B2_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
			reloadTime = 0.1;
			dispersion = 0.00399;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class stun: JLTS_stun_muzzle
		{
			reloadAction = "GestureReloadMX";
			reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",1,1,30};
		};
	};
	class BCG_Gauntlet_BF: 3AS_DWBlaster_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] WIP Wrist Blaster (F)"; // blaster + flamethrower
		baseWeapon="BCG_Gauntlet_BF";
	};
	class BCG_MK_DMR: knd_MK
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] MK Blaster Rifle";
		baseWeapon="BCG_MK_DMR";
	};
	class BCG_ee3_wd: knd_ee3
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] EE-3 Wooden Stock";
		baseWeapon="BCG_ee3_wd";
	};
	class BCG_ee3_plymr: knd_ee3_plastic
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] EE-3 Polymer Stock";
		baseWeapon="BCG_ee3_plymr";
	};
	class BCG_johnnygun: knd_silverhand
	{
		scope=2;
		scopeArsenal=2 ;
		displayName="[BCG] Malorian Slugthrower";
		baseWeapon="BCG_johnnygun";
	};
	class BCG_vornsk: knd_VORNSK_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Vornsk Slugthrower";
		baseWeapon="BCG_vornsk";
	};
	class BCG_amban: knd_amban_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Amban Phase-Pulse Rifle";
		baseWeapon="BCG_amban";
	};
	class BCG_jd69: knd_thompson_UGL_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] JD-69 Kivaroa";
		baseWeapon="BCG_jd69";
	};
	class BCG_rancor: knd_rotary
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Rancor Rotary Blaster";
		baseWeapon="BCG_rancor";
		WBK_UseHeavyWeaponFramework = true;
	};
	class BCG_immenseiron: knd_AMR_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] NCR-2281";
		baseWeapon="BCG_immenseiron";
	};
	class BCG_m69: knd_roba_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] M-69 Repeating Blaster";
		baseWeapon="BCG_m69";
	};
	class BCG_bigiron: knd_de10
	{ 
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] DE-10 Blaster";
		baseWeapon="BCG_bigiron";
	};
	class BCG_biggeriron: KND_KGoodBye
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] KG-96 Plasma Revolver";
		baseWeapon="BCG_biggeriron";
	};
	class BCG_solo: knd_dl44
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] DL-44 Blaster Pistol";
		baseWeapon="BCG_solo";
	};
	class BCG_beskad: knd_beskad
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Beskad";
		baseWeapon="BCG_beskad";
	};
	class BCG_gor: knd_hammer
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Gor";
		baseWeapon="BCG_gor";
	};
	class BCG_axe: knd_axe
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Shaap'shuk";
		baseWeapon="BCG_axe";
	};
	class BCG_reallybigknife: knd_orikad
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Ori'kad";
		baseWeapon="BCG_reallybigknife";
	};
};
