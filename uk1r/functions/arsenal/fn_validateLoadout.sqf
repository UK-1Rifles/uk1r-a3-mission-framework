#include "script_component.hpp"

if !(hasInterface) exitWith {[]}; // Clients only.

private _removed = [];

// Check backpack.
if !(backpack player in GVAR(equipment)#0) then {
  _removed pushBackUnique backpack player;
  removeBackpack player;
} else {
  // Check backpack inventory.
  {
    
    if (_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
      // Evaluate magazine list.
      if !(_x in GVAR(equipment)#2) then {
        _removed pushBackUnique _x;
        player removeItemFromBackpack _x;
      };
    } else {
      if (_x isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
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

// Check uniform.
if !(uniform player in GVAR(equipment)#1) then {
  _removed pushBackUnique uniform player;
  removeUniform player;
} else {
  // Check uniform inventory.
  {
    if (_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
      // Evaluate magazine list.
      if !(_x in GVAR(equipment)#2) then {
        _removed pushBackUnique _x;
        player removeItemFromUniform _x;
      };
    } else {
      if (_x isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
        // Evaluate item list.
        if !(_x in GVAR(equipment)#1) then {
          _removed pushBackUnique _x;
          player removeItemFromUniform _x;
        };
      } else {
        // Evaluate weapon list.
        if !(_x in GVAR(equipment)#3) then {
          _removed pushBackUnique _x;
          player removeItemFromUniform _x;
        };
      };
    };
  } forEach uniformItems player;
};

// Check vest.
if !(vest player in GVAR(equipment)#1) then {
  _removed pushBackUnique vest player;
  removeVest player;
} else {
  // Check vest inventory.
  {
    if (_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
      // Evaluate magazine list.
      if !(_x in GVAR(equipment)#2) then {
        _removed pushBackUnique _x;
        player removeItemFromVest _x;
      };
    } else {
      if (_x isKindOf ["ItemCore", configFile >> "CfgWeapons"]) then {
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

// Check headgear.
if !(headgear player in (GVAR(equipment)#1)) then {
  _removed pushBackUnique headgear player;
  removeHeadgear player;
};

// Check goggles.
if !(goggles player in (GVAR(equipment)#1)) then {
  _removed pushBackUnique goggles player;
  removeGoggles player;
};

// Check linked items.
{
  if (_x isKindOf ["NVGoggles", configFile >> "CfgWeapons"]) then {
    if !(_x in GVAR(equipment)#1) then {
      _removed pushbackUnique _x;
      player unlinkItem _x;
    };
  } else {
    if (_x isKindOf ["Binocular", configFile >> "CfgWeapons"]) then {
      if !(_x in GVAR(equipment)#3) then {
        _removed pushbackUnique _x;
        player removeWeapon _x;
      };
    } else {
      if !(_x in GVAR(equipment)#1) then {
        _removed pushbackUnique _x;
        player unlinkItem _x;
      };
    };
  };
} forEach assignedItems player;

// Check primary weapon.
if !(primaryWeapon player in GVAR(equipment)#3) then {
  _removed pushbackUnique primaryWeapon player;
  player removeWeapon primaryWeapon player;
} else {
  // Check magazine.
  {
    if !(_x in GVAR(equipment)#2) then {
      _removed pushBackUnique _x;
      player removePrimaryWeaponItem _x;
    };
  } forEach primaryWeaponMagazine player;

  // Check attachments.
  {
    if !(_x in GVAR(equipment)#1) then {
      _removed pushBackUnique _x;
      player removePrimaryWeaponItem _x;
    };
  } forEach primaryWeaponItems player;
};

// Check handgun.
if !(handgunWeapon player in GVAR(equipment)#3) then {
  _removed pushbackUnique handgunWeapon player;
  player removeWeapon handgunWeapon player;
} else {
  // Check magazine.
  {
    if !(_x in GVAR(equipment)#2) then {
      _removed pushBackUnique _x;
      player removeHandgunItem _x;
    };
  } forEach handgunMagazine player;

  // Check attachments.
  {
    if !(_x in GVAR(equipment)#1) then {
      _removed pushBackUnique _x;
      player removeHandgunItem _x;
    };
  } forEach handgunItems player;
};

// Check launcher.
if !(secondaryWeapon player in GVAR(equipment)#3) then {
  _removed pushbackUnique secondaryWeapon player;
  player removeWeapon secondaryWeapon player;
} else {
  // Check magazine.
  {
    if !(_x in GVAR(equipment)#2) then {
      _removed pushBackUnique _x;
      player removesecondaryWeaponItem _x;
    };
  } forEach secondaryWeaponMagazine player;

  // Check attachments.
  {
    if !(_x in GVAR(equipment)#1) then {
      _removed pushBackUnique _x;
      player removesecondaryWeaponItem _x;
    };
  } forEach secondaryWeaponItems player;
};

// Clear empty values.
_removed = _removed - [""];

// Output the removed items as feedback to the player.
{
  private _displayName = "";
  if (isClass (configFile >> "CfgWeapons" >> _x)) then {
    _displayName = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
  } else {
    if (isClass (configFile >> "CfgMagazines" >> _x)) then {
      _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
    } else {
      if (isClass (configFile >> "CfgGlasses" >> _x)) then {
        _displayName = getText (configFile >> "CfgGlasses" >> _x >> "displayName");
      } else {
        _displayName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
      };
    };
  };

  // Fall back to the classname if no displayname is found.
  if (_displayName == "") then {_displayName = _x;};

  systemChat format ["Item %1 is not allowed in your role and has been removed.", _displayName];

} forEach _removed;