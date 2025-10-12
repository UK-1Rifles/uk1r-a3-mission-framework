#include "script_component.hpp"
private _category = format [
	"%1: %2",
	toUpper QUOTE(PREFIX),
	[QUOTE(COMPONENT)] call cba_fnc_capitalize
];
private _values = ("getNumber (_x >> 'scope') == 2" configClasses (missionConfigFile >> "CfgArsenal"));
private _names = _values apply { getText (_x >> "displayName"); };
[
	QGVAR(blufor),
	"LIST",
	[
		"BLUFOR arsenal",
		"Arsenal to use for the BLUFOR side."
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
		"OPFOR arsenal",
		"Arsenal to use for the OPFOR side."
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
		"GREFOR arsenal",
		"Arsenal to use for the GREFOR side."
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