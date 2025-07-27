#include "script_component.hpp"

if !(isNil QGVAR(init)) exitWith {false}; // Block re-running of component initialisation.
GVAR(init) = false;

GVAR(init) = true;
INFO_1("%1 component initialized.", QUOTE(COMPONENT));