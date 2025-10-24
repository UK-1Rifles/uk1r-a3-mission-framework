#include "..\script_mod.hpp"

class DOUBLES(PREFIX,aircrew) {
  aircraftPilot = 1;
  aircraftGunner = 1;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_Helipilot_F",
    "B_helicrew_F",
    "B_Helipilot_F",
    "B_Fighter_Pilot_F",
    "B_Pilot_F"
  };
};
class DOUBLES(PREFIX,antiair) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 1;
  staticWeapons = 0;
  units[] = {
    "B_soldier_AA_F"
  };
};
class DOUBLES(PREFIX,antitank) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 1;
  staticWeapons = 0;
  units[] = {
    "B_soldier_AT_F",
    "B_soldier_LAT_F",
    "B_soldier_LAT2_F"
  };
};
class DOUBLES(PREFIX,engineer) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_engineer_F",
    "B_soldier_exp_F",
    "B_soldier_mine_F"
  };
};
class DOUBLES(PREFIX,grenadier) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 1;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_Soldier_GL_F"
  };
};
class DOUBLES(PREFIX,groundcrew) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 1;
  armourDriver = 1;
  armourGunner = 1;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_crew_F"
  };
};
class DOUBLES(PREFIX,machinegunner) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 1;
  staticWeapons = 0;
  units[] = {
    "B_soldier_AR_F",
    "B_HeavyGunner_F"
  };
};
class DOUBLES(PREFIX,marksman) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_soldier_M_F",
    "B_Sharpshooter_F",
  };
};
class DOUBLES(PREFIX,medic) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_medic_F"
  };
};
class DOUBLES(PREFIX,officer) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_office_F",
    "B_Officer_Parade_F",
    "B_Officer_Parade_Veteran_F"
  };
};
class DOUBLES(PREFIX,rifleman) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_Soldier_A_F",
    "B_soldier_AAR_F",
    "B_support_AMG_F",
    "B_support_AMort_F",
    "B_soldier_AAA_F",
    "B_soldier_AAT_F",
    "B_soldier_PG_F",
    "B_Soldier_F",
    "B_Soldier_lite_F",
    "B_Soldier_unarmed_F"
  };
};
class DOUBLES(PREFIX,squadleader) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_Soldier_SL_F"
  };
};
class DOUBLES(PREFIX,support) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 1;
  units[] = {
    "B_support_GMG_F",
    "B_support_MG_F",
    "B_support_Mort_F"
  };
};
class DOUBLES(PREFIX,teamleader) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_Soldier_TL_F"
  };
};
class DOUBLES(PREFIX,uavoperator) {
  aircraftPilot = 0;
  aircraftGunner = 0;
  armourCommander = 0;
  armourDriver = 0;
  armourGunner = 0;
  grenadeLaunchers = 0;
  launchers = 0;
  machineguns = 0;
  staticWeapons = 0;
  units[] = {
    "B_soldier_UAV_F",
    "B_soldier_UAV_06_F",
    "B_soldier_UAV_06_medical_F",
    "B_soldier_UGV_02_Demining_F",
    "B_soldier_UGV_02_Science_F"
  };
};