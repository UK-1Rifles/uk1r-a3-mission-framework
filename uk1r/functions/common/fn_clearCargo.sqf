#include "script_component.hpp"

params [
  ["_container", objNull, [objNull]],
  ["_global", false, [false]]
];

if (isNull _object) exitWith {false}; // Check a valid container is provided.

if (_global) then {
  clearBackpackCargoGlobal _container;
  clearItemCargoGlobal _container;
  clearMagazineCargoGlobal _container;
  clearWeaponCargo _container;
} else {
  clearBackpackCargo _container;
  clearItemCargo _container;
  clearMagazineCargo _container;
  clearWeaponCargo _container;
};

true