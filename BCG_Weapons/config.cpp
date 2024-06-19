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