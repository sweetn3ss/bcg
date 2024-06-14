	class BCG_Helmet_Armorer: ls_mandalorian_armorer_helmet {
		displayName = "[BCG] Armorer Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Armorer\helmet.rvmat",
			"BCG_Armour\data\helmets\Armorer\visor.rvmat",
			"BCG_Armour\data\helmets\Armorer\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Armorer\helmet_co.paa",
			"BCG_Armour\data\helmets\Armorer\visor_co.paa",
			"BCG_Armour\data\helmets\Armorer\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Assassin: LST_Mando_Assasin_V2 {
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Assassin Helmet";
		hiddenSelections[] = {
			"Camo",
			"visor"
		};
		hiddenSelectionsMaterials[] = {
			//"BCG_Armour\data\helmets\Assassin\mando.rvmat",
			"BCG_Armour\data\helmets\shiny.rvmat",
			"BCG_Armour\data\helmets\Assassin\Visor_Mando.rvmat"
		};
		hiddenSelectionsTextures[] = {
			//"BCG_Armour\data\helmets\Assassin\V3_co.paa",
			"BCG_Armour\data\helmets\blank.paa",
			"BCG_Armour\data\helmets\Assassin\V3_co.paa"
		};
	};
	
	class BCG_Helmet_Commando: LST_Merc_Helmet_Ver {
		displayName = "[BCG] Commando Helmet";
		hiddenSelections[] = {
			"Camo1"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Commando\Ver_helmet.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Commando\Ver_helmet_co.paa"
		};
	};
	
	class BCG_Helmet_Executioner: ls_mandalorian_executioner_helmet {
		displayName = "[BCG] Executioner Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Executioner\helmet.rvmat",
			"BCG_Armour\data\helmets\Executioner\visor.rvmat",
			"BCG_Armour\data\helmets\Executioner\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Executioner\helmet_co.paa",
			"BCG_Armour\data\helmets\Executioner\visor_co.paa",
			"BCG_Armour\data\helmets\Executioner\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Guard: LST_Clone_Helmet_Guard {
		displayName = "[BCG] Guard Helmet";
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\shiny.rvmat",
			"BCG_Armour\data\helmets\shiny.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Guard\Helemt_Guard_ca.paa",
			"BCG_Armour\data\helmets\Guard\Helemt_Guard_ca.paa"
		};
	};
	
	class BCG_Helmet_Gunslinger: ls_mandalorian_dinDjarin_helmet {
		displayName = "[BCG] Gunslinger Helmet";
		model = "ls_armor_greenfor\helmet\mandalorian\dinDjarin\ls_mandalorian_dinDjarin_helmet.p3d";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Gunslinger\gunslinger_shiny.rvmat",
			"BCG_Armour\data\helmets\Gunslinger\visor.rvmat",
			"BCG_Armour\data\helmets\Gunslinger\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Gunslinger\helmet_co.paa",
			"BCG_Armour\data\helmets\Gunslinger\visor_co.paa",
			"ls_armor_greenfor\helmet\mandalorian\dinDjarin\data\neck_co.paa"	
		};
		class ItemInfo: HeadGearItem	
		{
			uniformModel = "ls_armor_greenfor\helmet\mandalorian\dinDjarin\ls_mandalorian_dinDjarin_helmet.p3d";
			mass= 30; 
			hiddenSelections[] = {
				"camo1",
				"visor",
				"neckTex"
			};
			hiddenSelectionsMaterials[] = {
				"BCG_Armour\data\helmets\Gunslinger\helmet.rvmat",
				"BCG_Armour\data\helmets\Gunslinger\visor.rvmat",
				"BCG_Armour\data\helmets\Gunslinger\neck.rvmat"
			};
			hiddenSelectionsTextures[] = {
				"BCG_Armour\data\helmets\Gunslinger\helmet_co.paa",
				"BCG_Armour\data\helmets\Gunslinger\visor_co.paa",
				"ls_armor_greenfor\helmet\mandalorian\dinDjarin\data\neck_co.paa"	
			};	
		};
	
	};
	
	class BCG_Helmet_Heavy: Merc_Helmet_Hyperion {
		displayName = "[BCG] Heavy Helmet";
		hiddenSelections[] = {
			"Camo1"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Heavy\Helmet_maze.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Heavy\Hyperion_helmet_co.paa"
		};
	};
	
	class BCG_Helmet_Imperial: LST_merc_helmet_v1_free {
		displayName = "[BCG] Imperial Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\shiny.rvmat",
			"BCG_Armour\data\helmets\shiny.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Imperial\Helmet_FR.paa",
			"BCG_Armour\data\helmets\Imperial\Helmet_FR.paa"
		};
	};
	
	class BCG_Helmet_Nightowl: ls_mandalorian_nightowl_helmet {
		displayName = "[BCG] Nightowl Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Nightowl\helmet.rvmat",
			"BCG_Armour\data\helmets\Nightowl\visor.rvmat",
			"BCG_Armour\data\helmets\Nightowl\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Nightowl\helmet_co.paa",
			"BCG_Armour\data\helmets\Nightowl\visor_co.paa",
			"BCG_Armour\data\helmets\Nightowl\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Notre: LST_Mando_G_Notre_Helmet {
		displayName = "[BCG] Notre Helmet";
		hiddenSelections[] = {
			"Camo1",
			"visor"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Notre\G_Notre_Helmet.rvmat",
			"BCG_Armour\data\helmets\Notre\G_Visor_Notre_Helmet.rvmat"
		};
		hiddenSelectionsTextures[] = {
			//"BCG_Armour\data\helmets\Notre\G_Notre_Helmet_co.paa",
			"BCG_Armour\data\helmets\blank.paa",
			"BCG_Armour\data\helmets\Notre\G_Notre_Helmet_co.paa"
		};
	};
	
	class BCG_Helmet_Pilot: LST_Mando_G_Fil_cyclo_helmet {
		displayName = "[BCG] Pilot Helmet";
		hiddenSelections[] = {
			"Camo1",
			"visor"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Pilot\Mando_Cyclo_Fil_helmet.rvmat",
			"BCG_Armour\data\helmets\Pilot\Visor_Fil_Mando.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Pilot\G_Cyclo_helmet_Fil_co.paa",
			"BCG_Armour\data\helmets\Pilot\G_Cyclo_helmet_Fil_co.paa"
		};
	};
	
	class BCG_Helmet_Recruit: LST_Mando_G_cyclo_helmet {
		displayName = "[BCG] Recruit Helmet";
		hiddenSelections[] = {
			"Camo1",
			"visor"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Recruit\Mando_Cyclo_helmet.rvmat",
			"BCG_Armour\data\helmets\Recruit\Visor_Mando.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Recruit\G_Cyclo_helmet_co.paa",
			"BCG_Armour\data\helmets\Recruit\G_Cyclo_helmet_co.paa"
		};
	};
	
	class BCG_Helmet_SplitJaw: ls_mandalorian_elite_helmet {
		displayName = "[BCG] Split Jaw Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\SplitJaw\helmet.rvmat",
			"BCG_Armour\data\helmets\SplitJaw\visor.rvmat",
			"BCG_Armour\data\helmets\SplitJaw\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\SplitJaw\helmet_co.paa",
			"BCG_Armour\data\helmets\SplitJaw\visor_co.paa",
			"BCG_Armour\data\helmets\SplitJaw\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Stalker: ls_mandalorian_stalker_helmet {
		displayName = "[BCG] Stalker Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Stalker\helmet.rvmat",
			"BCG_Armour\data\helmets\Stalker\visor.rvmat",
			"BCG_Armour\data\helmets\Stalker\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Stalker\helmet_co.paa",
			"BCG_Armour\data\helmets\Stalker\visor_co.paa",
			"BCG_Armour\data\helmets\Stalker\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Traditional: ls_mandalorian_traditional_helmet {
		displayName = "[BCG] Traditional Helmet";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\Traditional\helmet.rvmat",
			"BCG_Armour\data\helmets\Traditional\visor.rvmat",
			"BCG_Armour\data\helmets\Traditional\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\Traditional\helmet_co.paa",
			"BCG_Armour\data\helmets\Traditional\visor_co.paa",
			"BCG_Armour\data\helmets\Traditional\neck_co.paa"
		};
	};
	
	class BCG_Helmet_Gunslinger_Test: ls_mandalorian_dinDjarin_helmet {
		displayName = "[BCG] Gunslinger Helmet TEST";
		model = "ls_armor_greenfor\helmet\mandalorian\dinDjarin\ls_mandalorian_dinDjarin_helmet.p3d";
		hiddenSelections[] = {
			"camo1",
			"visor",
			"neckTex"
		};
		hiddenSelectionsMaterials[] = {
			"BCG_Armour\data\helmets\shiny.rvmat",
			"BCG_Armour\data\helmets\Gunslinger\visor.rvmat",
			"BCG_Armour\data\helmets\Gunslinger\neck.rvmat"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\helmets\blank.paa",
			"BCG_Armour\data\helmets\Gunslinger\visor_co.paa",
			"ls_armor_greenfor\helmet\mandalorian\dinDjarin\data\neck_co.paa"
	//boobies 
		};
	};