#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_interaction"};
        author = ECSTRING(common,ACETeam);
        url = "http://ace3mod.com";
    authors[] = {"PabstMirror"};
    authorUrl = "https://github.com/acemod/ACE3";
    VERSION_CONFIG;
  };
};

#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
