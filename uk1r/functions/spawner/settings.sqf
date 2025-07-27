#include "script_component.hpp"
private _category = format [
	"%1: %2",
	toUpper QUOTE(PREFIX),
	[QUOTE(COMPONENT)] call cba_fnc_capitalize
];
private _values = ("getNumber (_x >> 'scope') == 2" configClasses (missionConfigFile >> "CfgFactions"));
private _names = _values apply { getText (_x >> "displayName"); };
[
	QGVAR(enable),
	"CHECKBOX",
	[
		"Enable",
		format ["Enables or disables the %1 system", QUOTE(COMPONENT)]
	],
	_category,
	true, // Type specific options (https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#setting-type-specific-arguments-_valueinfo).
	true, // Is global.
	{},
	true // Requires restart.
] call cba_fnc_addSetting;
[
	QGVAR(blufor),
	"LIST",
	[
		"BLUFOR faction",
		"Faction to use for the blufor side."
	],
	_category,
	[
		_values,
		_names,
		0
	],
	true,
	{},
	true
] call cba_fnc_addSetting;
[
	QGVAR(opfor),
	"LIST",
	[
		"OPFOR faction",
		"Faction to use for the opfor side."
	],
	_category,
	[
		_values,
		_names,
		0
	],
	true,
	{},
	true
] call cba_fnc_addSetting;
[
	QGVAR(grefor),
	"LIST",
	[
		"GREFOR faction",
		"Faction to use for the grefor side."
	],
	_category,
	[
		_values,
		_names,
		0
	],
	true,
	{},
	true
] call cba_fnc_addSetting;