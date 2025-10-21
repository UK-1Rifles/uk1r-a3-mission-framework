#include "script_component.hpp"

if !(hasInterface) exitWith {[]}; // Clients only.

private _removed = [];

// Check backpack.
if !(typeOf backpack player in GVAR(equipment)#0) then {
  _removed pushBackUnique typeOf backpack player;
  removeBackpack player;
} else {
  // Check backpack inventory.
  {
    if (_x isKindOf "CA_Magazine") then {
      // Evaluate magazine list.
      if !(typeOf _x in GVAR(equipment)#2) then {
        _removed pushBackUnique typeOf _x;
        player removeItemFromBackpack _x;
      };
    } else {
      if (_x isKindOf "ItemCore") then {
        // Evaluate item list.
        if !(typeOf _x in GVAR(equipment)#1) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      } else {
        // Evaluate weapon list.
        if !(typeOf _x in GVAR(equipment)#3) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      };
    };
  } forEach backpackItems player;
};

// Check uniform.
if !(uniform player in GVAR(equipment)#1) then {
  _removed pushBackUnique typeOf uniform player;
  removeUniform player;
} else {
  // Check uniform inventory.
  {
    if !(typeOf _x in GVAR(equipment)#2) then {
        _removed pushBackUnique typeOf _x;
        player removeItemFromBackpack _x;
      };
    } else {
      if (_x isKindOf "ItemCore") then {
        // Evaluate item list.
        if !(typeOf _x in GVAR(equipment)#1) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      } else {
        // Evaluate weapon list.
        if !(typeOf _x in GVAR(equipment)#3) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      };
    };
  } forEach uniformItems player;
};

// Check vest.
if !(vest player in GVAR(equipment)#1) then {
  _removed pushBackUnique typeOf vest player;
  removeVest player;
} else {
  // Check vest inventory.
  {
    if !(typeOf _x in GVAR(equipment)#2) then {
        _removed pushBackUnique typeOf _x;
        player removeItemFromBackpack _x;
      };
    } else {
      if (_x isKindOf "ItemCore") then {
        // Evaluate item list.
        if !(typeOf _x in GVAR(equipment)#1) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      } else {
        // Evaluate weapon list.
        if !(typeOf _x in GVAR(equipment)#3) then {
          _removed pushBackUnique typeOf _x;
          player removeItemFromBackpack _x;
        };
      };
    };
  } forEach vestItems player;
};

// Check headgear.
if !(headgear player in GVAR(equipment)#1) then {
  _removed pushBackUnique typeOf headgear player;
  removeHeadgear player;
};

// Check goggles.
if !(goggles player in GVAR(equipment)#1) then {
  _removed pushBackUnique typeOf goggles player;
  removeGoggles player;
};

// Check linked items.

// Check primary weapon.

// Check secondary weapon.

// Check launcher.