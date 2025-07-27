#include "script_component.hpp"
class DOUBLES(PREFIX,COMPONENT) {
  class functions {
    file = QUOTE(PREFIX\functions\COMPONENT);
    class createAgent {};
    class createComposition {};
    class createGroup {};
    class createUnit {};
    class createVehicle {};
    class init {};
    class setUnitSkill {};
  };
};