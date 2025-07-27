#include "..\..\script_mod.hpp"
#define FACTION a3_ins_eur

class DOUBLES(PREFIX,FACTION) {
	addons[] = {};
	scope = 2;
	class units {};
	class groups {
		class infantry {};
		class motorized {};
		class mechanized {};
		class armour {};
		class air {};
	};
};