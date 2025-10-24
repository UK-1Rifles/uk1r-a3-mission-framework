#include "script_component.hpp"

params [
  ["_unit", objNull, [objNull]],
  ["_role", "", [""]]
];

_unit setVariable [QGVAR(role), _role]; // Manual override of the players role.

_return