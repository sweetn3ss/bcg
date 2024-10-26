class cfgPatches {
	class BCG_Facewear {
		authors[]={"Gray","Neifer","Indie Beninging"};
		name="Buy'ce Gal Cabur Core";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"tgf_facewear", "knd_vests"
		};
	};
};
class cfgFunctions {
	class bcg_MLG {
		class functions {
			file="BCG_Facewear\functions";
			class mlgmode {};		// bcg_MLG_fnc_mlgmode;
			class cringemode {};	// bcg_MLG_fnc_cringemode;
			class mlgmode_Duke {};		// bcg_MLG_fnc_mlgmode_Duke;
			class cringemode_Duke {};	// bcg_MLG_fnc_cringemode_Duke;
		};
	};
	class bcg_iPod {
		class functions {
			file="BCG_Facewear\functions"; // bcg_iPod_fnc
			class iPodSay3D {}; // bcg_iPod_fnc_iPodSay3D
			class iPodStop3D {}; // bcg_iPod_fnc_iPodStop3D
		};
	};
};
class cfgWeapons {
	class ItemCore;
	class InventoryWeapon_Base_F;
	
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class HeadGearItem;
	
	class knd_nvg_nya;
	class BCG_iPod_Beroya: knd_nvg_nya
	{
		scope = 2;
		displayName = "[BCG] iPod (Beroya)";
		model = "\BCG_Facewear\data\ipod\ipod.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","dalverd","gen5"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\ipod\camo1_co.paa","\BCG_Facewear\data\ipod\camo2_co.paa"};
		picture = "\BCG_Facewear\data\iPod\icon.paa";
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"dalverd",
				"gen5"
			};
			uniformModel = "\BCG_Facewear\data\ipod\ipod.p3d";
			modelOff = "\BCG_Facewear\data\ipod\ipod.p3d";
		};
	};
	class BCG_iPod_Dalverd: BCG_iPod_Beroya
	{
		scope = 2;
		displayName = "[BCG] iPod (Dalverd)";
		model = "\BCG_Facewear\data\ipod\ipod.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","beroya","gen5"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\ipod\camo1_co.paa","\BCG_Facewear\data\ipod\camo2_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"beroya",
				"gen5"
			};
			uniformModel = "\BCG_Facewear\data\ipod\ipod.p3d";
			modelOff = "\BCG_Facewear\data\ipod\ipod.p3d";
		};
	};
	class BCG_iPod_Gen5: BCG_iPod_Beroya
	{
		scope = 2;
		displayName = "[BCG] iPod Gen 5 (Beroya)";
		model = "\BCG_Facewear\data\ipod\ipod.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","beroya","dalverd"};
		hiddenSelectionsTextures[] = {
			"\BCG_Facewear\data\ipod\camo1_co.paa",
			"\BCG_Facewear\data\ipod\camo2_co.paa",
			"\BCG_Facewear\data\ipod\camo3_co.paa",
			"\BCG_Facewear\data\ipod\camo2_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"beroya",
				"dalverd"
			};
			uniformModel = "\BCG_Facewear\data\ipod\ipod.p3d";
			modelOff = "\BCG_Facewear\data\ipod\ipod.p3d";
		};
	};
	
	class BCG_Playlist_Yeet: ItemCore {
		author = "Gray";
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Playlist Yeet";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\BCG_Facewear\data\iPod\yeet2.paa";
		detectRange = -1;
		simulation = "ItemMineDetector";
		useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
	};
	class BCG_Playlist_Ace: ItemCore {
		author = "Gray";
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Playlist Ace";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\BCG_Facewear\data\iPod\yeet2.paa";
		detectRange = -1;
		simulation = "ItemMineDetector";
		useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
	};
	class BCG_Playlist_Juggy: ItemCore {
		author = "Gray";
		scope=2;
		scopeArsenal=2;
		displayName = "[BCG] Playlist Juggy";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\BCG_Facewear\data\BK\vatreicon2a.paa";
		detectRange = -1;
		simulation = "ItemMineDetector";
		useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
	};
};
class cfgGlasses {
	

	
	class tgf_facewear_arbiter_belt;
	class tgf_facewear_forgemaster_belt;
	class tgf_facewear_heavy_belt;
	class tgf_facewear_light_belt;
	class tgf_facewear_medium_belt;
	class tgf_facewear_pilot_belt;
	class knd_kama;
	class G_Combat;
	
	
	class BCG_arbiter_belt: tgf_facewear_arbiter_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Arbiter's Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\arbiter\camo1_co.paa"
		};
	};
	class BCG_forgemaster_belt: tgf_facewear_forgemaster_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Forgemaster's Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\forge\camo1_co.paa"
		};
	};
	class BCG_heavy_belt: tgf_facewear_heavy_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Heavy Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\heavy\camo1_co.paa"
		};
	};
	class BCG_light_belt: tgf_facewear_light_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Light Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\light\camo1_co.paa"
		};
	};
	class BCG_medium_belt: tgf_facewear_medium_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Medium Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\medium\whatthefuck.paa"
		};
	};
	class BCG_pilot_belt: tgf_facewear_pilot_belt
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Pilot Belt";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\pilot\camo1_co.paa"
		};
	};
	class BCG_MedicKama: knd_kama
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Medic Kama";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\MedicKama\camo1_co.paa"
		};
	};
	class BCG_MaviKama: knd_kama
	{
		scope=2;
		scopeArsenal=2;
		displayName="[BCG] Mavi Kama";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"BCG_Facewear\data\Customs\MaviKama.paa"
		};
	};
	class BCG_HaveItTheWay: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Crown of Vibe'trei'des";
		model = "\BCG_Facewear\data\BK\bk_crownT.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\BK_Crown_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "";
	};
	
	class BCG_HaveItNoWay: G_Combat
	{
		scope = 1;
		displayName = "[BCG] Crown of The MLG";
		model = "\BCG_Facewear\data\BK\bk_crownT.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\BK_Crown_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "\BCG_Facewear\data\BK\vibetreides.paa";
		ACE_OverlayCracked = "\BCG_Facewear\data\BK\CombatGogglesCracked.paa";
	};
	class BCG_Duke: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Duke of Va'trei'des";
		model = "\BCG_Facewear\data\BK\duke.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\duke_camo1_ca.paa","\BCG_Facewear\data\BK\duke_camo2_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "";
	};
	class BCG_Duke_MLG: G_Combat
	{
		scope = 1;
		displayName = "[BCG] Duke of MLG";
		model = "\BCG_Facewear\data\BK\duke.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\BK\duke_camo1_ca.paa","\BCG_Facewear\data\BK\duke_camo2_co.paa"};
		picture = "\BCG_Facewear\data\BK\bk_icon.paa";
		ACE_Overlay = "\BCG_Facewear\data\BK\theduke.paa";
		ACE_OverlayCracked = "\BCG_Facewear\data\BK\CombatGogglesCracked.paa";
	};
	class BCG_Mommy_Hat: G_Combat
	{
		scope = 2;
		displayName = "[BCG] Mother's Hat";
		model = "\BCG_Facewear\data\mommy\mommy_hat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BCG_Facewear\data\mommy\camo_co.paa"};
		ACE_Overlay = "";
	};
	
};
class cfgVehicles {
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class bcg_MLG {
                displayName="Activate Gamer Mode";
                condition="(goggles player) in [""BCG_HaveItTheWay""]";
                statement="_player call bcg_MLG_fnc_mlgmode";
                icon = "BCG_Facewear\data\BK\vatreicon.paa";
			};
			class bcg_cringe {
                displayName="Activate Cringe Mode";
                condition="(goggles player) in [""BCG_HaveItNoWay""]";
                statement="_player call bcg_MLG_fnc_cringemode";
                icon = "BCG_Facewear\data\BK\vatreicon2.paa";
			};
			class bcg_MLG_duke {
                displayName="Activate Gamer Mode";
                condition="(goggles player) in [""BCG_Duke""]";
                statement="_player call bcg_MLG_fnc_mlgmode_Duke";
                icon = "BCG_Facewear\data\BK\vatreicon.paa";
			};
			class bcg_cringe_duke {
                displayName="Activate Cringe Mode";
                condition="(goggles player) in [""BCG_Duke_MLG""]";
                statement="_player call bcg_MLG_fnc_cringemode_Duke";
                icon = "BCG_Facewear\data\BK\vatreicon2.paa";
			};
			class bcg_iPod {
				displayName="iPod Tracks";
				condition="(hmd player) in [""BCG_iPod_Beroya"",""BCG_iPod_Dalverd"",""BCG_iPod_Gen5""]";
				statement="";
				icon="BCG_Facewear\data\iPod\icon.paa";
				class iPod_Stop {
					displayName="Stop Music";
					condition="";
					statement="call bcg_iPod_fnc_iPodStop3D";
					icon="";
				};
				class iPod_invisible {
					displayName="Va'trei'des Nat'l Anthem";
					condition="";
					statement="['iPod_invisible'] call bcg_iPod_fnc_iPodSay3D";
					icon="BCG_Facewear\data\BK\vatreicon.paa";
				};
				class iPod_Yeet {
					displayName="Yeet's Epic Playlist";
					condition = "(""BCG_Playlist_Yeet"" in (items _player))";
					statement="";
					icon="BCG_Facewear\data\iPod\yeet.paa";
					class iPod_Devious {
						displayName="Devious Ahh Beat";
						condition="";
						statement="['iPod_Devious'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_biblexmozart {
						displayName="Bible / Mozart";
						condition="";
						statement="['iPod_biblexmozart'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_gcphonk {
						displayName="GigaChad Phonk";
						condition="";
						statement="['iPod_gcphonk'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_dtmis {
						displayName="Don't Thug Me";
						condition="";
						statement="['iPod_dtmis'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_NeroBattle {
						displayName="Nero's Battle Theme";
						condition="";
						statement="['iPod_NeroBattle'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_RebelYell {
						displayName="Rebel Yell";
						condition="";
						statement="['iPod_RebelYell'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_YoungGirl {
						displayName="A Young Girl";
						condition="";
						statement="['iPod_YoungGirl'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
				};
				class iPod_Ace {
					displayName="Ace's Playlist";
					condition="(""BCG_Playlist_Ace"" in (items _player))";
					statement="";
					icon="BCG_Facewear\data\iPod\ace.paa";
					class iPod_nvrap {
						displayName="The House Always Wins";
						condition="";
						statement="['iPod_nvrap'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_pedro {
						displayName="PEDRO";
						condition="";
						statement="['iPod_pedro'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_vicente {
						displayName="Vicente";
						condition="";
						statement="['iPod_vicente'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_BlueMoon {
						displayName="Blue Moon";
						condition="";
						statement="['iPod_BlueMoon'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_Frankie {
						displayName="If Frank Sinatra...";
						condition="";
						statement="['iPod_Frankie'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_TNWP {
						displayName="The New Workout Plan";
						condition="";
						statement="['iPod_TNWP'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
				};
				class iPod_Juggy {
					displayName="Juggy's Playlist";
					condition="(""BCG_Playlist_Juggy"" in (items _player))";
					statement="";
					icon="BCG_Facewear\data\BK\vatreicon2.paa";
					class iPod_hltw {
						displayName="Hungry Like the Wolf";
						condition="";
						statement="['iPod_hltw'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_pittl {
						displayName="Push it to the limit";
						condition="";
						statement="['iPod_pittl'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_JUDGEMENT {
						displayName="JUDGEMENT";
						condition="";
						statement="['iPod_JUDGEMENT'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
				};
				class iPod_House {
					displayName="BCG's Playlist";
					condition="";
					statement="";
					icon="";
					class iPod_Mando {
						displayName="The Mandalorian";
						condition="";
						statement="['iPod_Mando'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
					class iPod_Caramell {
						displayName="Caramelldansen (Polski)";
						condition="";
						statement="['iPod_Caramell'] call bcg_iPod_fnc_iPodSay3D";
						icon="";
					};
				};
			};
		};
	};
};