class CfgPatches
{
	class BCG_Weapons
	{
		requiredAddons[] 	= {"OPTRE_Weapons"};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		authors[]={"Gray","Neifer","Indie Beninging"};
	};
};
<<<<<<< Updated upstream
=======
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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		reloadMyWeapon = "reloadMyWeapon";
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class reloadMyWeapon : Default
		{
			file = "3AS_Reloads\anims\3AS_Vent_Reload.rtm";
			looped = 0;
			speed = 0.400000;
			mask = "handsWeapon";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
		};
	};
};

class cfgWeapons
{
	class myWeapon
	{
		reloadAction = "reloadMyWeapon";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;	
>>>>>>> Stashed changes
class cfgWeapons {
	class OPTRE_CQS48_Bulldog_Automatic;
	
	class BCG_Bulldog: Optre_CQS48_Bulldog_Automatic
	
	{
		displayName = "BCG_Bulldog";
		BaseWeapon = "BCG_Bulldog";
		
		hiddenSelectionsTextures[] = {
			"BCG_Weapons\dullbog\Body_Black.paa";
			"BCG_wEapons\dullbog\data\\DecalSheet_co.paa"
		}; 
		hiddenSelectionsMaterials[] = {
			"BCG_Weapons\dullbog\body.rvmat";
			"BCG_Weapons\dullbog\decal.rvmat"
			
			
};