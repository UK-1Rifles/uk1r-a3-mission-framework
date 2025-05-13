#include "..\..\script_mod.hpp"
#define FACTION gre_aaf

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 2;
	side = 2;
	class units {};
	class groups {
		class infantry {};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};