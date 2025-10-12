#include "script_component.hpp"

params [
  ["_arsenal", objNull, [objNull]]
];

if !(hasInterface) exitWith {false}; // Client only.
if (isNull _arsenal) exitWith {false}; // Validate arsenal object.

["AmmoboxExit"] call BIS_fnc_arsenal;

true