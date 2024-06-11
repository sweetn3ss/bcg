////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 10 14:41:23 2024 : 'file' last modified on Sun Jun 09 22:43:31 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgPatches
{
	class BCG_Armour
	{
		authors[] = {"Gray","Neifer","Beckket","Indie Beninging"};
		name = "Buy'ce Gal Cabur Armoury";
		weapons[] = {};
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_armor_greenfor"};
	};
};
class cfgWeapons
{
	class ls_mandalorian_nightowl_helmet;
	class LST_Uniform_Hyperion;
	class Merc_Helmet_Hyperion;
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class LST_Clone_Helmet_Guard;
	class LST_Merc_Helmet_Ver;
	class ls_mandalorian_dinDjarin_helmet;
	class ls_mandalorian_executioner_helmet;
	class ls_mandalorian_armorer_helmet;
	class ls_mandalorian_traditional_helmet;
	class LST_merc_helmet_v1_free;
	class ls_mandalorian_elite_helmet;
	class ls_mandalorian_stalker_helmet;
	class LST_Mando_G_Notre_Helmet;
	class LST_Mando_G_cyclo_helmet;
	class LST_Mando_G_Fil_cyclo_helmet;
	#include "bcgHelms.hpp"
	
	class BCG_JazzHands_Uniform: LST_Uniform_Hyperion
	{
		scope = 2;
		displayName = "[BCG] Uniform JazzHands";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BCG_JazzHands_Armour";
			picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
			containerClass = "Supply200";
			mass = 40;
		};
	};
	class BCG_Uniform_Basic: LST_Uniform_Hyperion
	{
		scope = 2;
		displayName = "[BCG] Uniform Basic";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BCG_Armor_Basic";
			picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
			containerClass = "Supply200";
			mass = 40;
		};
	};
	class BCG_Uniform_Trim: LST_Uniform_Hyperion
	{
		scope = 2;
		displayName = "[BCG] Uniform Trim";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BCG_Armor_Trim";
			picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
			containerClass = "Supply200";
			mass = 40;
		};
	};
	class BCG_Uniform_Fancy: LST_Uniform_Hyperion
	{
		scope = 2;
		displayName = "[BCG] Uniform Fancy";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BCG_Armor_Fancy";
			picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
			containerClass = "Supply200";
			mass = 40;
		};
	};
	
};
class cfgVehicles
{
	class LST_Armor_Hyperion;
	class JLTS_Clone_jumppack_JT12;
	
	#include "bcgBackpack.hpp"
	
	class BCG_JazzHands_Armour: LST_Armor_Hyperion
	{
		displayName = "[BCG] Uniform JazzHands";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		uniformClass = "BCG_JazzHands_Uniform";
		model = "\armor_unit\Uniform_Hyperion.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camoB",
			"Uniform"
		};
		hiddenSelectionsMaterials[] = {
			"\BCG_Armour\data\uniforms\camo1.rvmat",
			"\armor_unit\Hyperion\camo2.rvmat",
			"\armor_unit\Hyperion\camoB.rvmat",
			"\armor_unit\Hyperion\uniform.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"\BCG_Armour\data\uniforms\basic\Hyperion_Camo1_basic_co.paa",
			"\BCG_Armour\data\uniforms\basic\Hyperion_Camo2_basic_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_CamoB_co.paa",
			"\armor_unit\Hyperion\uniform.paa"
		};
	};
	class BCG_Armor_Basic: LST_Armor_Hyperion
	{
		displayName = "[BCG] Uniform Basic";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		uniformClass = "BCG_Uniform_Basic";
		model = "\armor_unit\Uniform_Hyperion.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camoB",
			"Uniform"
		};
		hiddenSelectionsMaterials[] = {
			"\BCG_Armour\data\uniforms\camo1.rvmat",
			"\armor_unit\Hyperion\camo2.rvmat",
			"\armor_unit\Hyperion\camoB.rvmat",
			"\armor_unit\Hyperion\uniform.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"\BCG_Armour\data\uniforms\basic\Hyperion_Camo1_basic_co.paa",
			"\BCG_Armour\data\uniforms\basic\Hyperion_Camo2_basic_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_CamoB_co.paa",
			"\armor_unit\Hyperion\uniform.paa"
		};
	};
	class BCG_Armor_Trim: LST_Armor_Hyperion
	{
		displayName = "[BCG] Uniform Trim";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		uniformClass = "BCG_Uniform_Trim";
		model = "\armor_unit\Uniform_Hyperion.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camoB",
			"Uniform"
		};
		hiddenSelectionsMaterials[] = {
			"\BCG_Armour\data\uniforms\camo1.rvmat",
			"\armor_unit\Hyperion\camo2.rvmat",
			"\armor_unit\Hyperion\camoB.rvmat",
			"\armor_unit\Hyperion\uniform.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"\BCG_Armour\data\uniforms\trim\Hyperion_Camo1_trim_co.paa",
			"\BCG_Armour\data\uniforms\trim\Hyperion_Camo2_trim_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_CamoB_co.paa",
			"\armor_unit\Hyperion\uniform.paa"
		};
	};
	class BCG_Armor_Fancy: LST_Armor_Hyperion
	{
		displayName = "[BCG] Uniform Fancy";
		picture = "\armor_unit\ui\Mando_Armor_Komtrabas.paa";
		uniformClass = "BCG_Uniform_Fancy";
		model = "\armor_unit\Uniform_Hyperion.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camoB",
			"Uniform"
		};
		hiddenSelectionsMaterials[] = {
			"\BCG_Armour\data\uniforms\camo1.rvmat",
			"\armor_unit\Hyperion\camo2.rvmat",
			"\armor_unit\Hyperion\camoB.rvmat",
			"\armor_unit\Hyperion\uniform.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"\BCG_Armour\data\uniforms\fancy\Hyperion_Camo1_fancy_co.paa",
			"\BCG_Armour\data\uniforms\fancy\Hyperion_Camo2_fancy_co.paa",
			"\BCG_Armour\data\uniforms\Hyperion_CamoB_co.paa",
			"\armor_unit\Hyperion\uniform.paa"
		};
	};
};
class cfgMods
{
	author = "SunPraiser";
	timepacked = "1718016211";
};
