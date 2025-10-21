#include "script_component.hpp"

if !(hasInterface) exitWith {[]}; // Clients only.

private _removed = [];

// Check backpack.
if !(backpack player == "") then {
  if !(backpack player in GVAR(equipment)#0) then {
    _removed pushBackUnique backpack player;
    removeBackpack player;
  } else {
    // Check backpack inventory.
    {
      
      if (_x isKindOf "CA_Magazine") then {
        // Evaluate magazine list.
        if !(_x in GVAR(equipment)#2) then {
          _removed pushBackUnique _x;
          player removeItemFromBackpack _x;
        };
      } else {
        if (_x isKindOf "ItemCore") then {
          // Evaluate item list.
          if !(_x in GVAR(equipment)#1) then {
            _removed pushBackUnique _x;
            player removeItemFromBackpack _x;
          };
        } else {
          // Evaluate weapon list.
          if !(_x in GVAR(equipment)#3) then {
            _removed pushBackUnique _x;
            player removeItemFromBackpack _x;
          };
        };
      };
    } forEach backpackItems player;
  };
};

// Check uniform.
if !(uniform player == "") then {
  if !(uniform player in GVAR(equipment)#1) then {
    _removed pushBackUnique uniform player;
    removeUniform player;
  } else {
    // Check uniform inventory.
    {
      if !(_x in GVAR(equipment)#2) then {
        _removed pushBackUnique _x;
        player removeItemFromUniform _x;
      } else {
        if (_x isKindOf "ItemCore") then {
          diag_log _x;
          // Evaluate item list.
          if !(_x in GVAR(equipment)#1) then {
            diag_log _x;
            _removed pushBackUnique _x;
            player removeItemFromUniform _x;
          };
        } else {
          // Evaluate weapon list.
          if !(_x in GVAR(equipment)#3) then {
            diag_log _x;
            _removed pushBackUnique _x;
            player removeItemFromUniform _x;
          };
        };
      };
    } forEach uniformItems player;
  };
};

// Check vest.
if !(vest player == "") then {
  if !(vest player in GVAR(equipment)#1) then {
    _removed pushBackUnique vest player;
    removeVest player;
  } else {
    // Check vest inventory.
    {
      if !(_x in GVAR(equipment)#1) then {
        _removed pushBackUnique _x;
        player removeItemFromVest _x;
      } else {
        if (_x isKindOf "ItemCore") then {
          // Evaluate item list.
          if !(_x in GVAR(equipment)#1) then {
            _removed pushBackUnique _x;
            player removeItemFromVest _x;
          };
        } else {
          // Evaluate weapon list.
          if !(_x in GVAR(equipment)#3) then {
            _removed pushBackUnique _x;
            player removeItemFromVest _x;
          };
        };
      };
    } forEach vestItems player;
  };
};

// Check headgear.
if !(headgear player == "") then {
  if !(headgear player in (GVAR(equipment)#1)) then {
    _removed pushBackUnique headgear player;
    removeHeadgear player;
  };
};

// Check goggles.
if !(goggles player == "") then {
  if !(goggles player in (GVAR(equipment)#1)) then {
    _removed pushBackUnique goggles player;
    removeGoggles player;
  };
};

// Check linked items.

// Check primary weapon.

// Check secondary weapon.

// Check launcher.


{
  private _displayName = _x;
  diag_log _x;
  if (isClass (configFile >> "CfgWeapons" >> _x)) then {
    _displayName = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
  } else {
    if (isClass (configFile >> "CfgMagazines" >> _x)) then {
      _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
    } else {
      _displayName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
    };
  };
  systemChat format ["Item %1 is not allowed in your role and has been removed.", _displayName];
} forEach _removed;