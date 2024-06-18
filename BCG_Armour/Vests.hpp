class BCG_Armor_Base: tgf_armour_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author= "Mesa";
		displayName="-";
		picture= "\tgf\addons\armour\heavy_armour\data\Heavy_Armour.paa";
		model= "tgf\addons\armour\heavy_armour\heavy_armour.p3d";
		hiddenSelections[]=
		{
			    "camo1", 
				"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tgf\addons\armour\heavy_armour\data\camo1_co.paa",
			"tgf\addons\armour\heavy_armour\data\camo2_co.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="tgf\addons\armour\heavy_armour\heavy_armour.p3d";
			containerClass="Supply300";
			mass=80;
			modelSides[]={6};
			hiddenSelections[]=
			{   
			
				"camo1", 
				"camo2" 
				
			};
			hiddenSelectionsTextures[]=
			{
				"tgf\addons\armour\heavy_armour\data\camo1_co.paa",
				"tgf\addons\armour\heavy_armour\data\camo2_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class BCG_Heavy_Armour: BCG_Armor_Base {
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName= "[BCG] Heavy Armour";
		picture= "\tgf\addons\armour\heavy_armour\data\Heavy_Armour.paa";		// icon used. fill w/ same info as inherit class
		model= "tgf\addons\armour\heavy_armour\heavy_armour.p3d";		// this and uniformModel should be the same.
		hiddenSelections[]=	// selections
		{
			    "camo1", 
				"camo2"
		};
		hiddenSelectionsTextures[]=	// textures
		{
			"tgf\addons\armour\heavy_armour\data\camo1_co.paa",
			"tgf\addons\armour\heavy_armour\data\camo2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType= "Rebreather";	// do not touch
			uniformModel= "tgf\addons\armour\heavy_armour\heavy_armour.p3d";
			modelSides[]={6};	// do not touch
			containerClass= "Supply300"; // capacity
			hiddenSelections[]=
			{
				"camo1", 
				"camo2"
			};
			
			hiddenSelectionsTextures[]=			
			{
				"tgf\addons\armour\heavy_armour\data\camo1_co.paa",
				"tgf\addons\armour\heavy_armour\data\camo2_co.paa"
			};
		};
		
	};