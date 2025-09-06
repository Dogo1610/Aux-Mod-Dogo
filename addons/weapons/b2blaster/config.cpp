#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(e5),
            "ls_weapons",
            "ls_weapons_eseries",
            "SWLW_clones",
            "SWLW_droids",
            "3AS_Weapons_DWBlaster"
        };
        units[] = {};
        weapons[] = {
            QCLASS(B2Blaster_base),
            QCLASS(AquaB2Blaster_base),
            QCLASS(B2Blaster),
            QCLASS(AquaB2Blaster),
            QCLASS(B2Blaster_grenadeLauncher),
            QCLASS(B2Blaster_rocket),
            QCLASS(B2Blaster_flamer)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
