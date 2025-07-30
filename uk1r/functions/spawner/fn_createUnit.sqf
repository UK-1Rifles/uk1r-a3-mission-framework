#include "script_component.hpp"
params [
  ["_position", [], [[]], 3],
  ["_cfgUnit", configNull, [configNull]],
  ["_group", grpNull, [grpNull]]
];

if (isNull _cfgUnit || isNull _group) exitWith {objNull};

// Select the base unit.
private _baseClass = (switch (side _group) do {
  case EAST: {"O_Soldier_F"};
  case WEST: {"B_Soldier_F"};
  case INDEPENDENT: {"I_Soldier_F"};
  case CIVILIAN: {"Civilian_F"};
});

// Create the unit.
private _unit = _group createUnit [_baseClass, _position, [], 0, "CAN_COLLIDE"];
_unit setPos _position;

// Set the unit skill.
{
  _unit setSkill [configName _x, getNumber _x];
} forEach configProperties [missionConfigFile >> "CfgSkill" >> (getText (_cfgUnit >> "skill"))];

// Strip the old loadout.
removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

// Add equipment.
_unit forceAddUniform selectRandom getArray (_cfgUnit >> "uniforms");
_unit addVest selectRandom getArray (_cfgUnit >> "vests");
_unit addBackpack selectRandom getArray (_cfgUnit >> "backpacks");
_unit addHeadgear selectRandom getArray (_cfgUnit >> "headgear");
_unit addGoggles selectRandom getArray (_cfgUnit >> "goggles");
{
  if (_x isEqualType []) then {
    for "_i" from 1 to (_x#1) do {
      _unit addItem _x#0;
    };
  } else {
    if (toLower (getText (configFile >> "CfgWeapons" >> _x >> "simulation")) isEqualTo "binocular") then {
      _unit addWeapon _x;
    } else {
      _unit linkItem _x;
    };
  };
} forEach getArray (_cfgUnit >> "items");

// Add primary weapon and magazines.
private _weapon = selectRandom getArray (_cfgUnit >> "weaponPrimary");
if !(isNil "_weapon") then {
  _unit addWeapon _weapon#0;
  {
    _unit addWeaponItem [_weapon#0, _x];
  } forEach _weapon#1;
  {
    _unit addMagazines [_x#0, _x#1];
  } forEach _weapon#2;
};

// Add secondary weapon and magazines.
_weapon = selectRandom getArray (_cfgUnit >> "weaponSecondary");
if !(isNil "_weapon") then {
  _unit addWeapon _weapon#0;
  {
    _unit addWeaponItem [_weapon#0, _x];
  } forEach _weapon#1;
  {
    _unit addMagazines [_x#0, _x#1];
  } forEach _weapon#2;
};

// Add primary weapon and magazines.
_weapon = selectRandom getArray (_cfgUnit >> "weaponLauncher");
if !(isNil "_weapon") then {
  _unit addWeapon _weapon#0;
  {
    _unit addWeaponItem [_weapon#0, _x];
  } forEach _weapon#1;
  {
    _unit addMagazines [_x#0, _x#1];
  } forEach _weapon#2;
};

// Add magazines.
{
  if (_x isEqualType []) then {
    for "_i" from 1 to _x#2 do {
      _unit addMagazine _x#0;
    };
  } else {
    _unit addMagazine _x;
  };
} forEach getArray (_cfgUnit >> "magazines");

// Return the created unit.
_unit