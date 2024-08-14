#include "defines.hpp"

private _fnc_camoSwapper = {
	params [
		["_object",objNull,[objNull]],
		["_camoPaa","BLK",[""]],
		["_textureArray",[],[[]]]
	];
	for "_i" from 0 to ((count _textureArray) - 1) do {
		// get current camo
		private _currentCamoPath = _textureArray # _i;
		// split string into array
		private _currentCamoArr = _currentCamoPath splitString "\";
		// delete current camo index
		_currentCamoArr deleteAt (count _currentCamoArr-1);
		// pushback new camo index
		_currentCamoArr pushBack _camoPaa;
		// join new string path
		private _newCamoPath = _currentCamoArr joinString "\";
		// set texture
		_object setObjectTextureGlobal [_i,_newCamoPath];
	};
};

/*
	Author: Daisy, Max, Mesa

	Description:
		Changes the compatible equipment on a player to be camouflaged in the manner chosen.
		The Helmet is swapped to a different versioned object
		The Uniform, Vest, and Backpack are the same objects, but have their texture changed globally.

	Parameter(s):
		0: OBJECT - (Required, default 'objNull') The player
		1: STRING - (Required, default "Urban") The identifier of the camouflage to change to

	Returns:
		BOOLEAN 

	Examples:
		[_player, ""Woodland""] call changeCamo_fnc_camoChange
		[_player, ""Urban""] call changeCamo_fnc_camoChange
*/

private _errorLog = [];
private _msg = "";
private _return = true;

params [
	["_unit", objNull,[objNull]], 
	["_selectedCamoType", "Urban",[""]]
];
// removes some possible error with typeChecking
_selectedCamoType = toLower _selectedCamoType;

// ###############################
// ### Compatibility Constants ###
// ###############################
//
// These arrays define all items that the script will operate on.
// This idiot-proofs the script so as not to delete items and try to replace them with those that don't exist
// AKA if an item isn't specified in these lists, NOTHING happens on runtime.

// ### Begin ###
private _currentUniform  	= uniform _unit;
private _currentHelmet   	= headgear _unit;
private _currentVest     	= vest _unit;
private _currentBackpack 	= backpack _unit;

// Set the camo suffix
// This is not necessarily the string that is sent to the function
private _camoType = "BLK";
switch (_selectedCamoType) do {
	case "urban":    	{ /*_camoType = "BLK";*/ };
	case "desert":   	{ _camoType = "DES"; };
	case "winter":   	{ _camoType = "SNO"; };
	case "woodland": 	{ _camoType = "WDL"; };
	default          	{  // error in type. no code should execute after this as it would be a waste of resources.
							_camoType = false;	// set to boolean for exit statement
					 	};
};

// halting of futher execution if _selectedCamoType was invalid
if (_camoType isEqualType false) exitWith {
	_msg = format ["ERROR: Invalid Selected Camo Type <%1>. No camo changes were executed.",_selectedCamoType];
	RPT_DTAIL(_msg,__FILE__,__LINE__);
	HINT_DTAIL(_msg,__FILE__,__LINE__);
	false;
};

// join new camo with .paa
private _camoPaa = SJOIN(_camoType,"paa",".");

// ###############
// ### Uniform ###
// ###############
//
// if uniform empty, do nothing.
if (_currentUniform == "") then {
		_msg = "WARNING: You are not wearing a uniform. It cannot have, and therefore has not had, its camo changed.";
		RPT_DTAIL(_msg,__FILE__,__LINE__);
} else {
	// grab camo types from uniform cfg
	private _uniformCamoTypes = (configFile >> "CfgWeapons" >> _currentUniform >> "camoTypes") call BIS_fnc_getCfgDataArray;
	
	// if camoType is valid for uniform
	if (_uniformCamoTypes find _camoType != -1) then {
	
		// Get the entire array of textures for the uniform
		private _uniformCamoArr = getObjectTextures _unit;
		// change all camo texture paths
		[_unit,_camoPaa,_uniformCamoArr] call _fnc_camoSwapper;
/*
		for "_i" from 0 to ((count _uniformCamoArr) - 1) do {
			// get current camo
			private _currentCamoPath = _uniformCamoArr # _i;
			// split string into array
			private _currentCamoArr = _currentCamoPath splitString "\";
			// delete current camo index
			_currentCamoArr deleteAt (count _currentCamoArr-1);
			// pushback new camo index
			_currentCamoArr pushBack _camoPaa;
			// join new string path
			private _newCamoPath = _currentCamoArr joinString "\";
			// set texture
			_unit setObjectTextureGlobal [_i,_newCamoPath];
		};
*/
		// log happy boy behavior
		_errorLog pushBack 1;
		// rpt log it
		_msg = format ["INFO: Uniform camo change on unit <%1> executed successfully to <%2>.",_unit,_camoType];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
		HINT_DTAIL(_msg,__FILE__,__LINE__);
	} else {
		_msg = format ["WARNING: Camo type <%1> is not a viable camo under the 'camoTypes' config field of the current uniform, <%2>. The camo was not changed.",_camoType,_currentUniform];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
	};
};

//systemChat str "Uniforms Completed";
// ############
// ### Vest ###
// ############
//
// The vest is replaced, and copies of all items are added to the vest
// if vest empty, do nothing.
if (_currentVest == "") then {
		_msg = "WARNING: You are not wearing a vest. It cannot have, and therefore has not had, its camo changed.";
		RPT_DTAIL(_msg,__FILE__,__LINE__);
} else {
	// grab camo types from vest cfg
	private _vestCamoTypes = (configFile >> "CfgWeapons" >> _currentVest >> "camoTypes") call BIS_fnc_getCfgDataArray;
	
	// if camoType is valid for uniform
	if (_vestCamoTypes find _camoType != -1) then {
	
		// Get the entire array of textures for the uniform
		private _vestCamoArr = getObjectTextures _currentVest;

		// change all camo texture paths
		[_unit,_camoPaa,_vestCamoArr] call _fnc_camoSwapper;

		// log happy boy behavior
		_errorLog pushBack 1;
		// rpt log it
		_msg = format ["INFO: Vest camo change on unit <%1> executed successfully to <%2>.",_unit,_camoType];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
		HINT_DTAIL(_msg,__FILE__,__LINE__);
	} else {
		_msg = format ["WARNING: Vest type <%1> is not a viable camo under the 'camoTypes' config field of the current vest, <%2>. The camo was not changed.",_camoType,_currentUniform];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
	};
};
// Please ignore this shit
// It's for uh... debugging?
// Yeah. Debugging...
// private _playerVest = vest player;
// private _vestTempArray1 = [_playervest,"_"] call BIS_fnc_splitString;
// camoRef0 = _vestTempArray1 # 0;
// camoRef3 = _vestTempArray1 # 3;

// ################
// ### Backpack ###
// ################
//
// If the player has a compatible backpack, that backpack has its texture swapped.

if (_currentBackpack == "") then {
		_msg = "WARNING: You are not wearing a backpack. It cannot have, and therefore has not had, its camo changed.";
		RPT_DTAIL(_msg,__FILE__,__LINE__);
} else {
	// grab camo types from vest cfg
	private _backpackCamoTypes = (configFile >> "CfgWeapons" >> _currentBackpack >> "camoTypes") call BIS_fnc_getCfgDataArray;
	
	// if camoType is valid for uniform
	if (_backpackCamoTypes find _camoType != -1) then {
	
		// Get the entire array of textures for the uniform
		private _backpackCamoArr = getObjectTextures _currentBackpack;
		
		// change all camo texture paths
		[_unit,_camoPaa,_backpackCamoArr] call _fnc_camoSwapper;

		// log happy boy behavior
		_errorLog pushBack 1;
		// rpt log it
		_msg = format ["INFO: Backpack camo change on unit <%1> executed successfully to <%2>.",_unit,_camoType];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
		HINT_DTAIL(_msg,__FILE__,__LINE__);
	} else {
		_msg = format ["WARNING: Backpack type <%1> is not a viable camo under the 'camoTypes' config field of the current backpack, <%2>. The camo was not changed.",_camoType,_currentUniform];
		RPT_DTAIL(_msg,__FILE__,__LINE__);
	};
};
/*
if (_currentBackpack != "") then {	
	private _backpackCamoTypes = (configFile >> "CfgWeapons" >> _currentBackpack >> "camoTypes") call BIS_fnc_getCfgData;
	private _backpackTempArray = [_currentBackpack, "_"] call BIS_fnc_splitString;
	
	// This is the last item
	private _backpackCamoRef = _backpackTempArray # ((count _backpackTempArray) - 1);
	if ((_backpackTempArray # 0) find UnitTexturePrefixes != -1 && _backpackCamoTypes find _camoType != -1) then {
		// Get the entire array of textures for the item
		private _backpackCamoTexture = getObjectTextures _unit;
		
		// Replace the value of the last item in array with the preferred camo
		// for loop replacing each texture
		for "_i" from 0 to ((count _backpackCamoTexture) -1) do {
			private _currentTexture = (_backpackCamoTexture select _i); // Grab the nth texture
			private _currentBackpackTempArray = [_currentTexture, "_"] call BIS_fnc_splitString;
			if ((count _currentBackpackTempArray) > 0) then {
				private _currentBackpackTempArrayExtension = [(_currentBackpackTempArray # ((count _currentBackpackTempArray) -1)), "."] call BIS_fnc_splitString;
				
				// Set ABC.paa to XYZ.paa
				_currentBackpackTempArrayExtension set [0, _camoType];
				
				// Move XYZ.paa back into the texture path
				_currentBackpackTempArray set [(count _currentBackpackTempArray) -1, (_currentBackpackTempArrayExtension joinString ".")];
				
				// Recombines the original array, but with our replaced value
				private _backpackTexturePath = _currentBackpackTempArray joinString "_";
				_unit setObjectTextureGlobal [_i, _backpackTexturePath];
			};
		};
		_errorLog pushBack 1;
	} else {
		diag_log "[ERROR] MM_CamoSwapper | " +str _currentBackpack+ " is not compatible with CamoSwapper. Check MM_CamoSwapper\config.cpp (fn_camoChange.sqf, ln 111)";
		_errorLog pushBack 0;
	};
};
*/
systemChat str _camoType;
// ###############
// ###  Helmet ###
// ###############
//
// Helmets are swapped as items.
// This makes hud management easier and is compatible with the way visor opaqueness works.
// All 'duplicate' helmets of non-default camouflage are marked with 'scope = 1;' in their classes
if (_currentHelmet != "") then {
	private _checkedHelmet = (configFile >> "CfgWeapons" >> _currentHelmet >> "camoTypes") call BIS_fnc_getCfgData;
	private _helmetCamoTypes = _checkedHelmet; // May be able to remove this depending on how much arma has a fit about it
	private _helmetTempArray = [_currentHelmet, "_"] call BIS_fnc_splitString;
	if ((count _helmetTempArray) > 1) then {
		// This is the last item
		private _helmetCamoRef = _helmetTempArray # ((count _helmetTempArray) -1);
		// Helmets can have their camo be in the last or 2nd-to-last item in the array depending on if they are using a depolarized version
		private _helmetCamoRef_DP = _helmetTempArray # ((count _helmetTempArray) -2);
		if ((_helmetTempArray # 0) find UnitTexturePrefixes != -1 && _helmetCamoTypes find _camoType != -1) then {
			//Replace the value of the last or second-to-last item in array with the preferred camo
			if (_helmetCamoTypes find _helmetCamoRef_DP != -1) then {
				_helmetTempArray set [((count _helmetTempArray) - 2), _camoType];
			} else {
				_helmetTempArray set [((count _helmetTempArray) - 1), _camoType];
			};
			
			// Recombines the original array but with our replaced value
			private _newHelmet = _helmetTempArray joinString "_";
			systemChat str _newHelmet;
			removeHeadgear _unit;
			_unit addHeadgear _newHelmet;
		};
	};
};

systemChat str "Helmets Completed";

for "_i" from 0 to (count _errorLog) do {
	private _element = _errorLog # _i;
	if (_element == 0) exitWith {
		_msg = "WARNING: One or more errors have occured. Please check your .rpt files for additional information.";
		HINT_DTAIL(_msg,__FILE__,__LINE__);
		_return = false;
	};
};

_return;