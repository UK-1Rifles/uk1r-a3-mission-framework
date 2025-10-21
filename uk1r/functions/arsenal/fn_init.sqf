#include "script_component.hpp"

if !(hasInterface) exitWith {false}; // Client only.
if !(isNil QGVAR(init)) exitWith {false}; // Block re-running of component initialisation.
GVAR(init) = false;

[
  missionNameSpace,
  "arsenalClosed",
  FUNC(validateLoadout)
] call BIS_fnc_addScriptedEventHandler;

// Initialise the equipment list from config.
if (isNil QGVAR(equipment)) then {}
  FUNC(updateFromConfig);
};

GVAR(init) = true;
INFO_1("%1 component initialized.", QUOTE(COMPONENT));