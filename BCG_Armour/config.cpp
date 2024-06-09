class cfgPatches {
	class BCG_Armour {
		authors[]={
			"Gray",
			"Neifer",
			"Beckket",
			"Indie Beninging"
		};
		name="Buy'ce Gal Cabur Armoury";
		weapons[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"ls_armor_greenfor",
			"armor_unit" // last force project armour folder :puking_face:
		};
	};
};
class cfgWeapons {
	class ls_mandalorian_nightowl_helmet;
	class LST_Uniform_Hyperion;
	class Merc_Helmet_Hyperion;
	class UniformItem;
	class ItemInfo;
	class VestItem;
	
	class BCG_JazzHands_Helmet: Merc_Helmet_Hyperion {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Helmet Heavy";
		hiddenSelections[]={
			"Camo1"
		};
		hiddenSelectionsTextures[]={
			"\armor_unit\Hyperion\Hyperion_helmet_co.paa"
		};
	};
	class BCG_JazzHands_Uniform: LST_Uniform_Hyperion {
		scope=2;
		displayName="[BCG] Uniform Basic";
		picture="\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="BCG_JazzHands_Armour";
			picture="\armor_unit\ui\Mando_Armor_Komtrabas.paa";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class cfgVehicles {
	class LST_Armor_Hyperion;
	
	class BCG_JazzHands_Armour: LST_Armor_Hyperion {
		displayName="[BCG] Uniform Basic";
		picture="\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		uniformClass="BCG_JazzHands_Uniform";
		model="\armor_unit\Uniform_Hyperion.p3d";
		hiddenSelections[]={
			"camo1",
			"camo2",
			"camoB",
			"Uniform"
		};
		hiddenSelectionsTextures[]={
			"\BCG_Armour\data\uniforms\Hyperion_Camo1_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_Camo2_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_CamoB_co.paa",
			"\armor_unit\Hyperion\uniform.paa"
		};
	};
};