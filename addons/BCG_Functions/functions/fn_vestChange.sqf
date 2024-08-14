/*
	Author: Max

	Description:
		Changes the compatible 82nd SOC Vests on the player to a different variant. Copies items from one vest to the other

	Parameter(s):
		0: OBJECT - (Required, default 'objNull') The player
		1: STRING - (Required, default "Rifleman") The identifier of the vest variant to swap to

	Returns:
		BOOLEAN (TODO: Actually return BOOLEAN for log purposes)

	Examples:
		[_player, ""Rifleman""] call personalizeArmor_fnc_vestChange
		[_player, ""Corpsman""] call personalizeArmor_fnc_vestChange
*/

params [
	["_unit", objNull], 
	["_selectedVestVariant", "Rifleman"]
];

// #################
// ### Constants ###
// #################
//
// These constants are related to the setup of the mod(s) and the naming scheme of items
private	_armorTextureRoot    = "82nd_Armor\data\armors";
private	_unitTexturePrefix   = "82nd";

// ###############################
// ### Compatibility Constants ###
// ###############################
//
// This array defines all vests that the script will operate on.
// This idiot-proofs the script so as not to delete items and try to replace them with those that don't exist
// AKA if a vest isn't specified in this list, NOTHING happens on runtime.
private _compatibleVests = [
	"82nd_M52A_Rifleman_BLK",
	"82nd_M52A_Corpsman_BLK",
	"82nd_M52A_MG_BLK",
	"82nd_M52A_Grenadier_BLK",
	"82nd_M52A_Marksman_BLK",
	"82nd_M52A_Breacher_BLK",
	"82nd_M52A_TeamLead_BLK",
	"82nd_M52A_TyrRifleman_BLK",
	"82nd_M52A_TyrCorpsman_BLK",
	"82nd_M52A_TyrMG_BLK",
	"82nd_M52A_TyrGrenadier_BLK",
	"82nd_M52A_TyrMarksman_BLK",
	"82nd_M52A_TyrBreacher_BLK",
	"82nd_M52A_TyrTeamLead_BLK",
	"82nd_M52A_SlpRifleman_BLK",
	"82nd_M52A_SlpCorpsman_BLK",
	"82nd_M52A_SlpMG_BLK",
	"82nd_M52A_SlpGrenadier_BLK",
	"82nd_M52A_SlpMarksman_BLK",
	"82nd_M52A_SlpBreacher_BLK",
	"82nd_M52A_SlpTeamLead_BLK",
	"82nd_M52A_AirAssault_BLK",
	"82nd_M52A_AirMedic_BLK",
	"82nd_M52A_AirMG_BLK",
	"82nd_M52A_AirGrenadier_BLK",
	"82nd_M52A_AirMarksman_BLK",
	"82nd_M52A_AirBreacher_BLK",
	"82nd_M52A_AirTeamLead_BLK",
	"82nd_M52A_A_BLK",
	"82nd_M52A_B_BLK",
	"82nd_M52A_C_BLK",
	"82nd_M52A_Crew_BLK",
	"82nd_M52A_Aviation_BLK",
	"82nd_M52A_PJ_BLK"
];

// ### Begin ###
private _currentVest = vest _unit;

// TODO: be better about input validation
private _vestVariant = _selectedVestVariant;

// The vest is replaced, and copies of all items are added to the vest
if !(_currentVest == "") then {
	// Split the class name into its components
	private _vestTempArray = [_currentVest, "_"] call BIS_fnc_splitString;
	private _vestType      = _vestTempArray # 1; // M52A
	private _vestSubtype   = _vestTempArray # 2; // Rifleman, Corpsman, etc.
	private _vestCamo      = _vestTempArray # 3; // BLK, DES, SNO, WDL
	
	// Reconstruct vest into default camo version for the compatibility check
	private _vestBLK = format ["%1_%2_%3_BLK", _unitTexturePrefix, _vestType, _vestSubtype];
	
	if (compatibleVests find _vestBLK != -1) then {	
		if (_vestType == "M52A") then {
			private _vestTypeName = format ["%1_%2_%3_%4", _unitTexturePrefix, _vestType, _vestVariant, _vestCamo];
			// Setup for ammo restoration, must be before 'removeVest _unit;' START OF DAISY EDIT
            private _allItems     = vestItems _unit;
			
			// DAISY EDIT START
			private _vestMags = magazinesAmmoCargo vestContainer _unit; //getcha mags
			
			{_allItems = _allItems - _x # 0;} forEach _vestMags; //remove mags from _allItems

			removeVest _unit;
			_unit addVest _vestTypeName;
			
			{ _unit addItemToVest _x } forEach _allItems; // add items back

			{ _unit addMagazine _x; } forEach _vestMags; // add mags back - ez pz.
			// DAISY EDIT END
		};
	};
};