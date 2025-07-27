#include "script_component.hpp"
params [
  ["_position", [], [[]], 3],
  ["_config", configNull, [configNull]]
];

if (isNull _config) exitWith {objNull};

// Create the unit.
private _unit = createVehicle [];

// Set the unit skill.

// Set the unit loadout.

// Return the created unit.
_unit