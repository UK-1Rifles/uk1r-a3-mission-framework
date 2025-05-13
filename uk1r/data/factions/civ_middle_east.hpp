#include "..\..\script_mod.hpp"
#define FACTION civ_me

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 2;
	side = 3;
	class units {};
	class groups {
		class infantry {};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};