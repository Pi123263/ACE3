#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Item_Vector"};
        weapons[] = {"ACE_Vector", "ACE_VectorDay"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Ghost","Hamburger SV","commy2","bux578"};
        url = "http://ace3mod.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "RscInGameUI.hpp"
