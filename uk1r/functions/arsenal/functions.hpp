#include "script_component.hpp"
class DOUBLES(PREFIX,COMPONENT) {
  class functions {
    file = QUOTE(PREFIX\functions\COMPONENT);
    class addToObject {};
    class init {};
    class removeFromObject {};
    class updateFromConfig {};
    class updateInventory {};
  };
};