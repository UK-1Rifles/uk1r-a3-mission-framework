#include "script_mission.hpp"
params ["_player", "_didJIP"];

// Fix for remote execution config blocking initPlayerServer.
0 spawn {
	waitUntil {!isNull player};
	[player, didJIP] remoteExec ["fixes_fnc_initPlayerServer", 2];
};
