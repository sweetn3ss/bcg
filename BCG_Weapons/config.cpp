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
class cfgWeapons {
	class OPTRE_CQS48_Bulldog_Automatic;
	class SWLW_Westar35S;
	
	class BCG_Bulldog: OPTRE_CQS48_Bulldog_Automatic {
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Bulldog Slugthrower";
		baseWeapon="BCG_Bulldog";
		hiddenSelections[]={
			"camoBody",
			"camoDecal"
		};
		hiddenSelectionsTextures[]={
			"BCG_Weapons\dullbog\Body_Black.paa",
			"BCG_Weapons\dullbog\DecalSheet_co.paa"
		}; 
		hiddenSelectionsMaterials[]={
			"BCG_Weapons\dullbog\body.rvmat",
			"BCG_Weapons\dullbog\decal.rvmat"
		};
	};
	class BCG_Westar35S: SWLW_Westar35S {
		displayName="[BCG] Westar-35S";
		baseWeapon="BCG_Westar35S";
	};
};