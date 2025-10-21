#include "script_component.hpp"

if !(hasInterface) exitWith {[]}; // Clients only.

// Generate equipment list.
private _backpacks = [];
private _weapons = [];
private _items = [];
private _magazines = [];

private _config = (switch (side player) do {
  case WEST: {GVAR(blufor)};
  case EAST: {GVAR(opfor)};
  case INDEPENDENT: {GVAR(grefor)};
  default {};
});

if (isNil "_config") exitWith {[]};

// Loop through all subclasses and add to the equipment lists.
{
  if (call compile getText (_x >> "condition")) then {
    _backpacks = _backpacks + getArray (_x >> "backpacks");
    _items = _items + getArray (_x >> "attachments");
    _items = _items + getArray (_x >> "goggles");
    _items = _items + getArray (_x >> "headgear");
    _items = _items + getArray (_x >> "items");
    _items = _items + getArray (_x >> "nightVision");
    _items = _items + getArray (_x >> "uniforms");
    _items = _items + getArray (_x >> "vests");
    _magazines = _magazines + getArray (_x >> "magazines");
    _weapons = _weapons + getArray (_x >> "weapons");
    _weapons = _weapons + getArray (_x >> "binoculars");
    
  };
} forEach ("true" configClasses (_config));

GVAR(equipment) = [_backpacks, _items, _magazines, _weapons];