#include "script_component.hpp"
params [
  ["_position", [], [[]], 3],
  ["_config", configNull, [configNull]]
];

if (isNull _config) exitWith {objNull};
if !(isClass _config) exitWith {objNull};

// Create the vehicle.
private _vehicle = createVehicle [
  [_config, "baseClass", ""] call BIS_fnc_returnConfigEntry,
  _position,
  [],
  0,
  "CAN_COLLIDE"
];

// Set inventory if provided.
private _inventory = [_config, "inventory"] call BIS_fnc_returnConfigEntry;
if (count _inventory > 0) then {
  [_vehicle] call EFUNC(common,clearCargo);
  {
    _vehicle addItemCargoGlobal _x;
  } forEach ([_config, "inventory"] call BIS_fnc_returnConfigEntry);
};

// Set turret magazines if provided.
private _magazines = [_config, "magazines"] call BIS_fnc_returnConfigEntry;
if (count _magazines > 0) then {
  {
    _vehicle addMagazinesTurret _x;
  } forEach _magazines;
};

// Set textures.
private _textures = [_config, "textures"] call BIS_fnc_returnConfigEntry;
if (count _textures > 0) then {
  {
    _vehicle setObjectTextureGlobal _x;
  } forEach ([_config, "textures"] call BIS_fnc_returnConfigEntry);
};

// Return the unit created.
_vehicle