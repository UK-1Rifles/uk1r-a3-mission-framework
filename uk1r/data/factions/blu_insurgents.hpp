#include "..\..\script_mod.hpp"
#define FACTION blu_ins

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 2;
	side = 1;
	class units {};
	class groups {
		class infantry {};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};