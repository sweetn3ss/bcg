class cfgPatches {
	class BCG_Anim {
		authors[]={"Gray","Snipey"};
		name="Buy'ce Gal Cabur Animations";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"BCG_Core",
			"ace_main",
			"A3_Functions_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgMovesBasic
{
	class default;
	class DefaultDie;
	class ManActions
	{
		bcg_fortnitedance01 = "bcg_fortnitedance01";
	};
};
class cfgMovesMaleSdr: cfgMovesBasic {
	class States {
		class AmovPercMstpSnonWnonDnon_falling;
		class bcg_fortnitedance01: AmovPercMstpSnonWnonDnon_falling
		{
			actions = "NoActions";
			variantsPlayer[] = {};
			forceAim = 1;
			speed = 1;
			file = "BCG_Anim\data\skinwalking.rtm";
			looped = 1;
			minPlayTime = 1;
			disableWeapons = 0;
			ignoreMinPlayTime[] = {"Unconscious"};
			soundEnabled = 0;
			canBlendStep = 0;
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon",0.1};
			ConnectTo[] = {};
			InterpolateTo[] = {};
			InterpolateFrom[] = {"AmovPercMstpSnonWnonDnon",0.5};
		};
	};
};
class cfgVehicles {
	class Man;
	class CAManBase : Man {
		class ACE_SelfActions {
			class bcg_anims {
				displayName = "BCG Fortnite";
				icon = "";
				class bcg_Dance {
					displayName = "Skinwalking";
					icon = "";
					condition = "";
					statement = "[player, 'bcg_fortnitedance01'] remoteExec ['switchMove', 0]";
					exceptions[]={};
				};
			};
		};
	};
};