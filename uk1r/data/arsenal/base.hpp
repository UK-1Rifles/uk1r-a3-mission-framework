#include "..\..\script_mod.hpp"

class base_arsenal {
  displayName = "Base arsenal";
  mods[] = {"A3_Data_F"}; // Anything listed here must be in CfgPatches for this preset to be available.
  scope = 0;
  class base_role {
    condition = "false"; // Must evaluate to true to be added to the arsenal.
    attachments[] = {};
    backpacks[] = {};
    binoculars[] = {};
    goggles[] = {};
    headgear[] = {};
    items[] = {};
    nightVision[] = {};
    uniforms[] = {};
    vests[] = {};
    weapons[] = {};
  };
};