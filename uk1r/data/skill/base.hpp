#include "..\..\script_mod.hpp"
class base {
  aimingAccuracy = 0.5;
  aimingSpeed = 0.5;
  aimingShake = 0.5;
  commanding = 0.1;
  courage = 0.5;
  general = 1;
  reloadSpeed = 0.5;
  spotDistance = 0.5;
  spotTime = 0.5;
};
class base_irregular : base {
  courage = 0.5;
  reloadSpeed = 0.3;
  spotTime = 0.3;
};
class base_regular : base {
  aimingAccuracy = 0.6;
  aimingSpeed = 0.7;
  aimingShake = 0.65;
  commanding = 0.3;
  courage = 0.8;
  reloadSpeed = 0.75;
  spotDistance = 0.65;
  spotTime = 0.75;
};
class base_veteran : base {
  aimingAccuracy = 0.70;
  aimingSpeed = 0.85;
  aimingShake = 0.75;
  commanding = 0.8;
  courage = 1;
};
class base_commander : base {
  commanding = 1;
  spotDistance = 1;
  spotTIme = 1;
};
