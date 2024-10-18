class cfgPatches {
	class BCG_Vatreides {
		authors[] = {"Gray","Yeetster"};
		name = "Clan Va'trei'des";
		weapons[]={};
		units[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {"knd_newArmor"};
	};
};

class cfgWeapons {
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	
	// helmets
	class BCG_Helmet_Gunslinger;
	class BCG_Gunslinger_Vatreides: BCG_Helmet_Gunslinger {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayname="[BCG] Helmet Va'trei'des";
		ace_hearing_lowerVolume=0.3;
		ace_hearing_protection=0.85;
		hiddenSelections[]={
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={
			"BCG_Vatreides\data\helmets\gunslinger.paa",
			"BCG_Armour\data\helmets\Gunslinger\camo2_co.paa"
		};
	};
	
	//uniforms
	class knd_beroya;
	class BCG_base_Vatreides: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Va'trei'des Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_base_Vatreides_d";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
	class BCG_Yeet_Vatreides: knd_beroya {
		scope=2;
		scopeArsenal=2;
		author="Gray";
		displayName="[BCG] Yeetster Armor";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: UniformItem {
			uniformClass = "BCG_Yeet_Vatreides_d";
			containerClass = "Supply250";
			mass = 20;
			hiddenSelections[] = {"camo"};
		};
	};
};

class cfgVehicles {
	
	// uniforms
	class knd_beroya_F;
	class BCG_base_Vatreides_d: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_base_Vatreides";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Vatreides\data\uniforms\vatreides1.paa","BCG_Vatreides\data\uniforms\vatreides2.paa","BCG_Vatreides\data\uniforms\vatreides3.paa"};	
	};
	class BCG_Yeet_Vatreides_d: knd_beroya_F
	{
		scope = 1;
		uniformClass = "BCG_Yeet_Vatreides";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"BCG_Vatreides\data\uniforms\yeet1.paa","BCG_Vatreides\data\uniforms\yeet2.paa","BCG_Vatreides\data\uniforms\yeet3.paa"};
	};
	
	// jetpacks
	class knd_jetpack_maxim6_light_LR;
	class BCG_Z6LR_Vatreides: knd_jetpack_maxim6_light_LR {
		displayName = "[BCG] Z-6 LR Va'trei'des";
		maximumLoad = 500;
		hiddenselectionstextures[] = {"BCG_Vatreides\data\jetpacks\Rocket_co.paa","BCG_Vatreides\data\jetpacks\z6rto.paa"};
	};
	class BCG_Z6LR_Yeet: knd_jetpack_maxim6_light_LR {
		displayName = "[BCG] Z-6 LR Yeet";
		maximumLoad = 500;
		hiddenselectionstextures[] = {"BCG_Vatreides\data\jetpacks\Rocket_yeet.paa","BCG_Vatreides\data\jetpacks\z6rto_yeet.paa"};
		hiddenSelectionsMaterials[] = {"BCG_Vatreides\data\jetpacks\Rocket.rvmat","BCG_Vatreides\data\jetpacks\goldenized.rvmat"};
	};
};