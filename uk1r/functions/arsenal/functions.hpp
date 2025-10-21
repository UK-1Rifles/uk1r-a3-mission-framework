#include "script_component.hpp"
class DOUBLES(PREFIX,COMPONENT) {
  class functions {
    file = QUOTE(PREFIX\functions\COMPONENT);
    class addToObject {};
    class removeFromObject {};
    class updateFromConfig {};
    class updateInventory {};
  };
};