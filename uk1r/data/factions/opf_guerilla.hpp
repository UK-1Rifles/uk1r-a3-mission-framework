#include "..\..\script_mod.hpp"
#define FACTION opf_guer

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 2;
	side = 0;
	class units {};
	class groups {
		class infantry {};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};