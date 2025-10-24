#include "script_component.hpp"

if!(hasInterface) exitWith {false}; // Client only.

params ["", "_vehicleRole", "_vehicle"];

// Get the players role.
private _squadRole = [player] call FUNC(getRole);

// Translate the vehicle to its classname.
private _vehicle = typeOf _vehicle;

private _moveOut = false;

if (_vehicle isKindOf ["Tank_F", configFile >> "CfgVehicles"] || _vehicle isKindOf ["Wheeled_APC_F", configFile >> "CfgVehicles"]) then  {
  if (_vehicleRole == "driver") then {
    if ([missionConfigFile >> "CfgRoles" >> _squadRole, "armourDriver", 0] call BIS_fnc_returnConfigEntry <= 0) then {
      _moveOut = true;
    };
  } else {
    if (_vehicleRole == "gunner") then {
      if ([missionConfigFile >> "CfgRoles" >> _squadRole, "armourGunner", 0] call BIS_fnc_returnConfigEntry <= 0) then {
        _moveOut = true;
      };
    } else {
      if (_vehicleRole == "commander") then {
        if ([missionConfigFile >> "CfgRoles" >> _squadRole, "armourCommander", 0] call BIS_fnc_returnConfigEntry <= 0) then {
          _moveOut = true;
        };
      };
    };
  };
} else {
  if (_vehicle isKindOf ["Air", configFile >> "CfgVehicles"]) then {
    if (_vehicleRole == "driver") then {
      if ([missionConfigFile >> "CfgRoles" >> _squadRole, "aircraftPilot", 0] call BIS_fnc_returnConfigEntry <= 0) then {
        _moveOut = true;
      };
    } else {
      if (_vehicleRole == "gunner") then {
        if ([missionConfigFile >> "CfgRoles" >> _squadRole, "aircraftGunner", 0] call BIS_fnc_returnConfigEntry <= 0) then {
          _moveOut = true;
        };
      };
    };
  };
};

// Move the player out and warn them why if they are not qualified.
if (_moveOut) then {
  moveOut player;
  systemChat "Your role is not qualified to crew that position.";
};

_moveOut