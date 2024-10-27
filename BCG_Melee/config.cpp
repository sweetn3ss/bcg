class cfgPatches {
	class BCG_Melee {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"BCG_Core",
			"A3_Weapons_F",
			"WBK_NewMeleeWEaponsTier2"
		};
	};
};
class cfgWeapons {
	class WBK_survival_weapon_2;
	class BCG_Thunderhammer: WBK_survival_weapon_2
	{
		IMS_WeaponType="Heavy";
		IMS_Melee_Param_Sounds="[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_Damage=0.8;
		model="BCG_Melee\data\thunderhammer\thunderhammer.p3d";
		displayName="[BCG] Shuk'Orok";
		descriptionShort="Forged from 40,000 souls.";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={
			"BCG_Melee\data\thunderhammer\camo1_CO.paa",
			"BCG_Melee\data\thunderhammer\camo2_CO.paa"
		};
	};
	class BCG_LegoSpear: WBK_survival_weapon_2
	{
		IMS_WeaponType="Poleax";
		IMS_Melee_Param_Sounds="[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_Damage=0.5;
		model="BCG_Melee\data\beskar\spear.p3d";
		displayName="[BCG] Beviiragir";
		descriptionShort="Hecho en China";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"BCG_Melee\data\beskar\camo_CO.paa"};
	};
};