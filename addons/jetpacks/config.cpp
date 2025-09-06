#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            "3AS_Prop_Crates",
            "ace_refuel",
            "ace_parachute"
        };
        units[] = {
            QCLASS(resupply_jetpackFuel)
        };
        weapons[] = {
            QGVAR(fuelCan_empty),
            QGVAR(fuelCan_mag)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgRscTitles.hpp"
#include "CfgUIGrids.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Arsenal_Stats.hpp"
