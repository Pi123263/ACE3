#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ace_common" };
        author = ECSTRING(common,ACETeam);
        authors[] = {"KoffeinFlummi", "esteldunedain"};
        url = "http://ace3mod.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgSounds.hpp"

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"

#include "RscTitles.hpp"
