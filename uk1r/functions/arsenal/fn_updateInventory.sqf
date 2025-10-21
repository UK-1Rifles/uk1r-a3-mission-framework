#include "script_component.hpp"

if !(hasInterface) exitWith {false}; // Clients only.

params [
  ["_arsenal", objNull, [objNull]]
];

if (isNull _arsenal) exitWith {false}; // Validate arsenal object.

if (isNil QGVAR(equipment)) then {
  FUNC(updateFromConfig);
};

// Set arsenal contents.
[_arsenal, GVAR(equipment)#0, false, false] call BIS_fnc_addVirtualBackpackCargo;
[_arsenal, GVAR(equipment)#1, false, false] call BIS_fnc_addVirtualItemCargo;
[_arsenal, GVAR(equipment)#2, false, false] call BIS_fnc_addVirtualMagazineCargo;
[_arsenal, GVAR(equipment)#3, false, false] call BIS_fnc_addVirtualWeaponCargo;

// Preload the item configs.
["Preload"] call BIS_fnc_arsenal;

true