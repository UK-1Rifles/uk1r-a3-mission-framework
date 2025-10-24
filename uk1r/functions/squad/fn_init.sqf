#include "script_component.hpp"

if !(isNil QGVAR(init)) exitWith {false}; // Block re-running of component initialisation.
GVAR(init) = false;

if (hasInterface) then {
  
  player addEventHandler [
    "GetInMan",
    FUNC(getInManEH)
  ];

  player addEventHandler [
    "SeatSwitchedMan",
    FUNC(seatSwitchedManEH)
  ];

};

GVAR(init) = true;
INFO_1("%1 component initialized.", QUOTE(COMPONENT));