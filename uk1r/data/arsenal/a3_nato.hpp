#include "..\..\script_mod.hpp"

#define ARSENAL DOUBLES(PREFIX,a3_nato)

class ARSENAL : base_arsenal {
  displayName = "Vanilla NATO (Arid)";
  scope = 2;
  class DOUBLES(ARSENAL,base) : base_role {
    condition = "false"; // Don't add directly, add from inherited classes.
    attachments[] = {
      "acc_flashlight_pistol",
      "acc_flashlight",
      "acc_pointer_IR",
      "optic_ACO_grn",
      "optic_ACO",
      "optic_ACO_grn_smg",
      "optic_Aco_smg",
      "optic_Holosight",
      "optic_Holosight_arid_F",
      "optic_Holosight_blk_F",
      "optic_Holosight_smg",
      "optic_Holosight_smg_blk_F",
      "optic_Yorris"
    };
    binoculars[] = {"Binocular"};
    items[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "FirstAidKit", "MineDetector"};
    nightVision[] = {"NVGoggles", "NVGoggles_INDEP", "NVGoggles_OPFOR"};
    weapons[] = {
      // Pistols
      "hgun_Pistol_heavy_01_F",
      "hgun_ACPC2_F",
      "hgun_P07_blk_F",
      "hgun_P07_F"
    };
    magazines[] = {
      "Chemlight_blue",
      "Chemlight_green",
      "Chemlight_red",
      "Chemlight_yellow",
      "SmokeShellBlue",
      "SmokeShellGreen",
      "SmokeShellOrange",
      "SmokeShellPurple",
      "SmokeShellRed",
      "SmokeShell",
      "SmokeShellYellow",
      "B_IR_Grenade",
      "30Rnd_65x39_caseless_mag",
      "30Rnd_65x39_caseless_black_mag",
      "30Rnd_65x39_caseless_mag_Tracer",
      "30Rnd_65x39_caseless_black_mag_Tracer",
      "30Rnd_65x39_caseless_msbs_mag",
      "30Rnd_65x39_caseless_msbs_mag_Tracer",
      "6Rnd_12Gauge_Pellets",
      "6Rnd_12Gauge_Slug",
      "30Rnd_556x45_Stanag_red",
      "30Rnd_556x45_Stanag_Tracer_Red",
      "30Rnd_556x45_Stanag_Sand_red",
      "30Rnd_556x45_Stanag_Sand_Tracer_Red"
    };
  };
  class DOUBLES(ARSENAL,infantry) : DOUBLES(ARSENAL,base) {
    condition = "false"; // Don't add directly, add from inherited classes.
    backpacks[] = {
      "B_AssaultPack_cbr",
      "B_AssaultPack_rgr",
      "B_AssaultPack_khk",
      "B_AssaultPack_mcamo",
      "B_AssaultPack_sgg",
      "B_Bergen_mcamo_F",
      "B_Carryall_cbr",
      "B_Carryall_khk",
      "B_Carryall_mcamo",
      "B_Carryall_oli",
      "B_FieldPack_cbr",
      "B_FieldPack_green_F",
      "B_FieldPack_khk",
      "B_FieldPack_oli",
      "B_Kitbag_cbr",
      "B_Kitbag_rgr",
      "B_Kitbag_mcamo",
      "B_Kitbag_sgg",
      "B_Kitbag_tan"
    };
    goggles[] = {
      "G_AirPurifyingRespirator_01_F",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_shades",
      "G_Bandanna_sport",
      "G_Bandanna_tan",
      "G_Combat",
      "G_Combat_Goggles_tna_F",
      "G_B_Diving",
      "G_Lowprofile",
      "G_Shades_Black",
      "G_Shades_Blue",
      "G_Shades_Green",
      "G_Shades_Red",
      "G_Spectacles",
      "G_Squares_Tinted",
      "G_Squares",
      "G_Balaclava_TI_blk_F",
      "G_Balaclava_TI_G_blk_F",
      "G_Tactical_Clear",
      "G_Tactical_Black",
      "G_Spectacles_Tinted"
    };
    headgear[] = {
      "H_HelmetB",
      "H_HelmetB_black",
      "H_HelmetB_camo",
      "H_HelmetB_desert",
      "H_HelmetB_grass",
      "H_HelmetB_sand",
      "H_HelmetB_snakeskin",
      "H_HelmetSpecB",
      "H_HelmetSpecB_black",
      "H_HelmetSpecB_camo",
      "H_HelmetSpecB_paint2",
      "H_HelmetSpecB_paint1",
      "H_HelmetSpecB_sand",
      "H_HelmetSpecB_snakeskin"
    };
    magazines[] += {
      "MiniGrenade",
      "HandGrenade"
    };
    uniforms[] = {
      "U_B_CBRN_Suit_01_MTP_F",
      "U_B_CombatUniform_mcam",
      "U_B_CombatUniform_mcam_tshirt",
      "U_B_CombatUniform_mcam_vest",
      "U_B_CombatUniform_mcam_worn"
    };
    vests[] = {
      "V_PlateCarrierGL_rgr",
      "V_PlateCarrierGL_mtp",
      "V_PlateCarrier1_rgr",
      "V_PlateCarrier1_rgr_noflag_F",
      "V_PlateCarrier2_rgr",
      "V_PlateCarrier2_rgr_noflag_F",
      "V_PlateCarrierSpec_rgr",
      "V_PlateCarrierSpec_mtp",
      "V_PlateCarrierL_CTRG",
      "V_PlateCarrierH_CTRG"
    };
    weapons[] += {
      // Primaries
      "arifle_MX_F",
      "arifle_MX_Black_F",
      "arifle_MXC_F",
      "arifle_MXC_Black_F",
      "arifle_MSBS65_sand_F",
      "arifle_MSBS65_black_F",
      "arifle_MSBS65_UBS_sand_F",
      "arifle_MSBS65_UBS_black_F",
      "arifle_SPAR_01_blk_F",
      "arifle_SPAR_01_snd_F"
    };
  };
  class DOUBLES(ARSENAL,rifleman) : DOUBLES(ARSENAL,infantry) {
    condition = QUOTE([player] call EFUNC(squad,getRole) == ""uk1r_rifleman"");
  };
  class DOUBLES(ARSENAL,grenadier) : DOUBLES(ARSENAL,infantry) {
    weapons[] = {};
  };
};