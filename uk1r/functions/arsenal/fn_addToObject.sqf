#include "script_component.hpp"

if !(hasInterface) exitWith {false}; // Client only.

params [
  ["_arsenal", objNull, [objNull]],
  ["_side", sideUnknown, [sideUnknown]]
];

if (isNull _arsenal) exitWith {false}; // Validate arsenal object.

// Wait until the player is initialised.
if (isNull player) then {
  diag_log "Player not initialised yet.";
  if !(canSuspend) exitWith {
    _this spawn FUNC(add);
  };
  waitUntil {!isNull player};
};

// Set the side of the arsenal.
_arsenal setVariable [QGVAR(side), _side];

// Add the arsenal.
[
  "AmmoboxInit",
  [
    _arsenal,
    false,
    {
      _side = _originalTarget getVariable [QGVAR(side), sideUnknown];
      side _this == _side || _side == sideUnknown // Side of player is equal to arsenal side, or arsenal is open (side set to unknown).
    }
  ]
] call BIS_fnc_arsenal;

// Update the contents.
[_arsenal] call FUNC(updateInventory);

true