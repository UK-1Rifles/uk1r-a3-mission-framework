#include "script_component.hpp"
params [
  ["_position", [], [[]], 3],
  ["_config", configNull, [configNull]]
];

if (isNull _config) exitWith {grpNull};

// Create the group.
private _group = createGroup [[getNumber (_config >> "side")] call BIS_fnc_sideType, true];

// Create units within the group.
{
  
} forEach 

// Return the created group.
_group