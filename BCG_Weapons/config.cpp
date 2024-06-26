class CfgPatches
{
	class BCG_Weapons
	{
		requiredAddons[]={"OPTRE_Weapons"};
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
			"BCG_Weapons\dullbog\Body_Black.paa",
		};
	};
};
class cfgWeapons {
	
	class OPTRE_CQS48_Bulldog_Automatic;
	class SWLW_Westar35S;
	class SWLW_westar35c;
	class SWLW_Westar35SA;
	class MTI_RSKF44;
	class LFP_RazorBlade;
	class LFP_hi12;
	class LFP_lw7;
	
	class DpSword;
	class WBK_SciFi_Sword_1;
	class acklay_sv;
	class demi_sv;
	
	class 3AS_Chaingun;
	class JLTS_RPS6;
	class 3AS_PLX1_F;
	

		
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
			"BCG_Weapons\dullbog\Body_Black.paa",
			"BCG_Weapons\dullbog\DecalSheet_co.paa"
		}; 
		hiddenSelectionsMaterials[]=
		{
			"BCG_Weapons\dullbog\body.rvmat",
			"BCG_Weapons\dullbog\decal.rvmat"
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
	
	class BCG_Westar35SA: SWLW_Westar35SA 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Westar 35SA";
		baseWeapon="BCG_Westar35SA";
	};
	
	class BCG_RSKF44: MTI_RSKF44 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] RSK44";
		baseWeapon="BCG_RSK44";
	};
	
	class BCG_DC15SA: LFP_RazorBlade 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] DC-15SA";
		baseWeapon="BCG_DC15SA";
	};
	
	class BCG_HI12: LFP_hi12 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] HI-12 Marksman Blaster";
		baseWeapon="BCG_HI12";
	};
	
	class BCG_LW7: LFP_lw7 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] LW-7 Sniper";
		baseWeapon="BCG_LW7";
	};
	
	class BCG_VibroBlade: DpSword 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Vibro-Blade";
		baseWeapon="BCG_VibroBlade";
	};
	
	class BCG_VibroTanto : WBK_SciFi_Sword_1 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Vibro-Tanto";
		baseWeapon="BCG_VibroTanto";
	};
		class BCG_VibroBladeB : acklay_sv 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Beskar Vibro-Blade";
		baseWeapon="BCG_VibroBladeB";
		
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
	
	class BCG_Chaingun: 3AS_Chaingun 
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Heavy Rotary Blaster";
		baseWeapon="BCG_Chaingun";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Weapons\Chaingun\back_CO.paa"
		};
	};
};



