#include "script_component.hpp"

params [
  ["_unit", objNull, [objNull]]
];

if (isNull _unit || !alive _unit) exitWith {""}; // Validate unit.

// The units role can be overriden by setting a variable on them.
private _return = _unit getVariable [QGVAR(role), ""];

// If no override is set, determine the role based on their class.
if (_return == "") then {
  {
    if (typeOf _unit in getArray (_x >> "units")) then {
      _return = configName _x;
    };
  } forEach ("true" configClasses (missionConfigFile >> "CfgRoles"));

  _unit setVariable [QGVAR(role), _return]; // Quicker retrieval next time.
};

_return