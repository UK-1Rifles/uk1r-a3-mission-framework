#include "..\..\script_mod.hpp"
#define FACTION a3_usa_a

class DOUBLES(PREFIX,FACTION) : DOUBLES(PREFIX,base) {
	addons[] = {};
  displayName = "A3 US military (arid)";
	scope = 2;
	class units : units {
		class TRIPLES(PREFIX,FACTION,base) : base {
			backpacks[] = {
				"B_AssaultPack_cbr",
				"B_AssaultPack_rgr",
				"B_AssaultPack_khk",
				"B_AssaultPack_mcamo",
				"B_AssaultPack_sgg"
			};
			faces[] = {
				"AfricanHead_01",
				"AfricanHead_02",
				"AfricanHead_03",
				"GreekHead_A3_01",
				"GreekHead_A3_02",
				"GreekHead_A3_05",
				"GreekHead_A3_06",
				"GreekHead_A3_07",
				"GreekHead_A3_08",
				"GreekHead_A3_09",
				"GreekHead_A3_11",
				"GreekHead_A3_12",
				"GreekHead_A3_13",
				"GreekHead_A3_14",
				"LivonianHead_1",
				"LivonianHead_2",
				"LivonianHead_3",
				"LivonianHead_4",
				"LivonianHead_5",
				"LivonianHead_6",
				"LivonianHead_7",
				"LivonianHead_8",
				"LivonianHead_9",
				"LivonianHead_10",
				"TanoanHead_A3_01",
				"TanoanHead_A3_02",
				"TanoanHead_A3_03",
				"TanoanHead_A3_04",
				"TanoanHead_A3_05",
				"TanoanHead_A3_06",
				"TanoanHead_A3_07",
				"TanoanHead_A3_08",
				"TanoanHead_A3_09",
				"WhiteHead_01",
				"WhiteHead_02",
				"WhiteHead_03",
				"WhiteHead_04",
				"WhiteHead_05",
				"WhiteHead_06",
				"WhiteHead_07",
				"WhiteHead_08",
				"WhiteHead_09",
				"WhiteHead_10",
				"WhiteHead_11",
				"WhiteHead_12",
				"WhiteHead_13",
				"WhiteHead_14",
				"WhiteHead_15",
				"WhiteHead_16",
				"WhiteHead_17",
				"WhiteHead_18",
				"WhiteHead_19",
				"WhiteHead_20",
				"WhiteHead_21",
				"WhiteHead_22",
				"WhiteHead_23",
				"WhiteHead_24",
				"WhiteHead_25",
				"WhiteHead_26",
				"WhiteHead_27",
				"WhiteHead_28",
				"WhiteHead_29",
				"WhiteHead_30",
				"WhiteHead_31",
				"WhiteHead_32"
			};
			headgear[] = {
				"H_HelmetB",
				"H_HelmetB_black",
				"H_HelmetB_camo",
				"H_HelmetB_grass",
				"H_HelmetB_snakeskin"
			};
			items[] = {"ItemMap", "ItemCompass", "ItemGPS", "ItemRadio", "ItemWatch", {"FirstAidKit", 3}, "NVGoggles", "Binocular"};
			goggles[] = {
				"None",
				"G_Combat",
				"G_Combat_Goggles_tna_F",
				"G_Lowprofile",
				"G_Tactical_Clear",
				"G_Tactical_Black",
				"G_Shades_Black",
				"G_Spectacles",
				"G_Squares"
			};
			magazines[] = {};
			uniforms[] = {
				"U_B_CombatUniform_mcam",
				"U_B_CombatUniform_mcam_tshirt",
				"U_B_CombatUniform_mcam_vest"
			};
			vests[] = {
				"V_PlateCarrier1_rgr",
				"V_PlateCarrier2_rgr"
			};
			voices[] = {
				"Male01ENG",
				"Male02ENG",
				"Male03ENG",
				"Male04ENG",
				"Male05ENG",
				"Male06ENG",
				"Male07ENG",
				"Male08ENG",
				"Male09ENG",
				"Male10ENG",
				"Male11ENG",
				"Male12ENG",
				"Male01ENGB",
				"Male02ENGB",
				"Male03ENGB",
				"Male04ENGB",
				"Male05ENGB",
				"Male01ENGFRE",
				"Male02ENGFRE",
				"Male01GRE",
				"Male02GRE",
				"Male03GRE",
				"Male04GRE",
				"Male05GRE",
				"Male06GRE"
			};
			weaponPrimary[] = {
				{"arifle_MX_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 2}, {"30Rnd_65x39_caseless_mag", 6}}}
			};
			weaponSecondary[] = {
				{"hgun_ACPC2_F", {"", "", "", "9Rnd_45ACP_Mag"}, {{"9Rnd_45ACP_Mag", 2}}}
			};
			skill = "base_regular";
		};
		class TRIPLES(PREFIX,FACTION,rifleman) : TRIPLES(PREFIX,FACTION,base) {
			magazines[] = {{"SmokeShell", 3}, "SmokeShellRed", "SmokeShellBlue", {"HandGrenade", 3}, "200Rnd_556x45_Box_F"};
		};
		class TRIPLES(PREFIX,FACTION,grenadier) : TRIPLES(PREFIX,FACTION,base) {
			magazines[] += {"SmokeShellRed"};
			weaponPrimary[] = {
				{"arifle_MX_GL_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer" ,"1Rnd_HE_Grenade_shell"}, {{"30Rnd_65x39_caseless_mag_Tracer", 2}, {"30Rnd_65x39_caseless_mag", 6}, {"1Rnd_HE_Grenade_shell", 8}, {"1Rnd_Smoke_Grenade_shell", 6}, {"1Rnd_SmokeBlue_Grenade_shell", 3}}}
			};
		};
		class TRIPLES(PREFIX,FACTION,light_mg) : TRIPLES(PREFIX,FACTION,base) {
      magazines[] = {{"SmokeShell", 3}, "SmokeShellRed", "SmokeShellBlue", "HandGrenade"};
      weaponPrimary[] = {
				{"arifle_MX_SW_F", {"optic_Holosight", "acc_flashlight", "", "", "100Rnd_65x39_caseless_mag_Tracer"}, {{"100Rnd_65x39_caseless_mag_Tracer", 1}, {"100Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,medium_mg) : TRIPLES(PREFIX,FACTION,base) {
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue", "HandGrenade"};
      weaponPrimary[] = {
				{"LMG_03_F", {"optic_Holosight", "acc_flashlight", "", "", "100Rnd_65x39_caseless_mag_Tracer"}, {{"200Rnd_556x45_Box_F", 2}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,heavy_mg) : TRIPLES(PREFIX,FACTION,base) {
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue"};
      weaponPrimary[] = {
        {"MMG_02_sand_F", {"optic_Holosight", "acc_pointer_IR", "", "", "130Rnd_338_Mag"}, {{"130Rnd_338_Mag", 2}}}
      };
    };
		class TRIPLES(PREFIX,FACTION,hmg_assist) : TRIPLES(PREFIX,FACTION,base) {
      backpacks[] = {"B_Kitbag_mcamo", "B_Kitbag_rgr", "B_Kitbag_sgg", "B_Kitbag_cbr", "B_Kitbag_tan"};
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue", {"130Rnd_338_Mag", 4}};
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,medium_at) : TRIPLES(PREFIX,FACTION,base) {
      backpacks[] = {"B_Kitbag_mcamo", "B_Kitbag_rgr", "B_Kitbag_sgg", "B_Kitbag_cbr", "B_Kitbag_tan"};
      weaponLauncher[] += {
        {"launch_MRAWS_sand_rail_F", {"MRAWS_HEAT_F"}, {{"MRAWS_HEAT_F", 2}}}
      };
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,heavy_at) : TRIPLES(PREFIX,FACTION,base) {
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue"};
      weaponLauncher[] += {
        {"launch_Titan_short_F", {"Titan_AT"}, {{"Titan_AT", 1}}}
      };
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,hat_assist) : TRIPLES(PREFIX,FACTION,base) {
      backpacks[] = {"B_Carryall_cbr", "B_Carryall_khk", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_oli"};
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue", {"Titan_AT", 3}};
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,aa) : TRIPLES(PREFIX,FACTION,base) {
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue"};
      weaponLauncher[] += {
        {"launch_Titan_F", {"Titan_AA"}, {{"Titan_AA", 1}}}
      };
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,aa_assist) : TRIPLES(PREFIX,FACTION,base) {
      backpacks[] = {"B_Carryall_cbr", "B_Carryall_khk", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_oli"};
      magazines[] = {"SmokeShell", "SmokeShellRed", "SmokeShellBlue", {"Titan_AA", 3}};
      weaponPrimary[] = {
				{"arifle_MXC_F", {"optic_Holosight", "acc_flashlight", "", "", "30Rnd_65x39_caseless_mag_Tracer"}, {{"30Rnd_65x39_caseless_mag_Tracer", 1}, {"30Rnd_65x39_caseless_mag", 4}}}
			};
    };
		class TRIPLES(PREFIX,FACTION,mortar) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,mortar_assist) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,medic) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,marksman) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,sniper) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,spotter) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,team_leader) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,squad_leader) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,crewman) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,heli_pilot) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,heli_crew) : TRIPLES(PREFIX,FACTION,base) {};
		class TRIPLES(PREFIX,FACTION,pilot) : TRIPLES(PREFIX,FACTION,base) {};
	};
	class vehicles : vehicles {
		class TRIPLES(PREFIX,FACTION,lpv) : base {
			baseClass = "B_LSV_01_unarmed_F";
			inventory[] = {{"FirstAidKit", 10}};
		};
		class TRIPLES(PREFIX,FACTION,lpv_mg) : base {
			baseClass = "B_LSV_01_armed_F";
			inventory[] = {{"FirstAidKit", 10}};
			magazines[] = {
				{"", [], -1}
			};
		};
		class TRIPLES(PREFIX,FACTION,lpv_at) : base {
			baseClass = "B_LSV_01_AT_F";
			inventory[] = {{"FirstAidKit", 10}};
			magazines[] = {};
		};
	};
	class groups : groups {
		class infantry {
			class TRIPLES(PREFIX,FACTION,patrol) : base {
				roles[] = {"guard"};
				class units {};
			};
		};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};