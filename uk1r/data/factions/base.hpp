#include "..\..\script_mod.hpp"
#define FACTION base

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 1; // Set this to 2 for factions you want to be visible.
	class units {
		class base {
			baseClass = "";
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
	class vehicles {
		class base {
      baseClass = ""; // The classname to spawn as the base of this vehicle.
			inventory[] = {}; // {Item class (str), Item count (int)}. Leave empty to ignore.
			lockSeats[] = {}; // {Seat/Turret path} - Numbers = cargo seats, arrays = turrets. Leave empty to ignore.
			turretMagazines[] = {}; // {Magazine class (str), Turret path (arr), Magazine count (int)}. Leave empty to ignore.
      textures[] = {}; // {Texture selection (int), Texture path (str)}. Leave empty to ignore.
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
};