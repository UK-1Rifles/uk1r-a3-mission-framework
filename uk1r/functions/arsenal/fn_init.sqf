#include "script_component.hpp"

if !(isNil QGVAR(init)) exitWith {false}; // Block re-running of component initialisation.
GVAR(init) = false;

if (isNil QGVAR(registry)) then {
  GVAR(registry) = createHashMapFromArray [[WEST, []], [EAST, []], [INDEPENDENT, []], [sideUnknown, []]];
};

{

} forEach GVAR(registry);

GVAR(init) = true;
INFO_1("%1 component initialized.", QUOTE(COMPONENT));