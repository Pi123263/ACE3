#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Garth 'L-H' de Wet", "commy2"};
        url = "http://ace3mod.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgMovesBasic.hpp"
