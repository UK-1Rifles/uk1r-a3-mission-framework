#include "..\..\script_mod.hpp"
#define FACTION base

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 1; // Set this to 2 for factions you want to be visible.
	class units {
		class base {
			backpacks[] = {};
			faces[] = {};
			headgear[] = {};
			items[] = {};
			goggles[] = {};
			magazines[] = {};
			uniforms[] = {};
			vests[] = {};
			voices[] = {};
			weaponsLauncher[] = {}; // {weapon, scope, accessory, muzzle, underbarrel {{magazine_1, count}, {magazine_2, count}}}
			weaponsPrimary[] = {};
			weaponsSecondary[] = {};
			textures[] = {}; // {selection, path to texture}
		};
	};
	class groups {
		class base {
			roles[] = {}; // E.g. patrol, guard, medical etc...
			class units {
				/*
				class unit0 {
					type = "classname";
					rank = "rank";
				};
				*/
			};
			class vehicles {
				/*
				class vehicle0 {
					type = ""; // Classname from faction units.
					class crew {
						class crew0 {
							type = ""; // Classname from faction units.
							rank = "";
							position = ""; // driver, gunner, commander or cargo
						};
					};
				};
				*/
			};
		};
	};
	class skill {
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
	};
};