	class BCG_Kama: SFA_Kama
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Kama";
		model = "SFA_Equipment_R\Vest\kama.p3d";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\vests\kama_STND_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "SFA_Equipment_R\Vest\kama.p3d";
			containerClass = "Supply100";
			mass = 80;
			modelSides[]={6};
			hiddenSelections[] = {
				"camo1"
			};
			hiddenSelectionsTextures[] = {
				"BCG_Armour\data\vests\kama_STND_co.paa"
			
			};
		};
	};
	
	class BCG_Kama_Ammo_Sash :BCG_Kama
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Kama & Sash";
		model = "SFA_Equipment_R\Vest\Ammo_Sash_NCO.p3d";
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\vests\Sash_co.paa",
			"BCG_Armour\data\vests\kama_STND_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "SFA_Equipment_R\Vest\Ammo_Sash_NCO.p3d";
			containerClass = "Supply100";
			mass = 80;
			modelSides[]={6};
			hiddenSelections[] = {
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = {
				"BCG_Armour\data\vests\Sash_co.paa",	
				"BCG_Armour\data\vests\kama_STND_co.paa"
				
				};
			};
		};
		
		class BCG_Ammo_Sash :BCG_Kama
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Ammo Sash";
		model = "SFA_Equipment_R\Vest\Ammo_Sash.p3d";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"BCG_Armour\data\vests\Sash_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "SFA_Equipment_R\Vest\Ammo_Sash.p3d";
			containerClass = "Supply100";
			mass = 80;
			modelSides[]={6};
			hiddenSelections[] = {
				"camo1"
			};
			hiddenSelectionsTextures[] = {
				"BCG_Armour\data\vests\Sash_co.paa"	
			
				};
			};
		};
		
		class BCG_Pauldron : BCG_Kama
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Pauldron";
		model = "Clone_Armor_Unit\Clone_Trooper_Vest_Up.p3d"
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"Clone_Armor_Unit\data\Clone_ARC_Vest_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType = "Rebreather";
			uniformModel = "Clone_Armor_Unit\Clone_Trooper_Vest_Up.p3d";
			containerClass = "Supply100";
			mass = 80;
			modelSides[]={6};
			hiddenSelections[] = {
				"camo1"
			};
			hiddenSelectionsTextures[] = {
				"Clone_Armor_Unit\data\Clone_ARC_Vest_co.paa"	
			
				};
			};
		};
		
