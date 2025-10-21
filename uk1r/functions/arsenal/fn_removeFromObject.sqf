#include "script_component.hpp"

if !(hasInterface) exitWith {false}; // Client only.

params [
  ["_arsenal", objNull, [objNull]]
];

if (isNull _arsenal) exitWith {false}; // Validate arsenal object.

["AmmoboxExit"] call BIS_fnc_arsenal;

true