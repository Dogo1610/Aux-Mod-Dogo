class CfgVehicles {
    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base {
        class ACE_SelfActions;
    };
    class CLASS(RepublicTransport): 3AS_Republic_Transport_01 {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,RepublicTransport);

        displayName = "Republic Transport";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {QCLASS(Cannon_ARC_Light),"CMFlareLauncher","Laserdesignator_pilotCamera"};
        magazines[] = {
            "3as_ARC_500Rnd_Light_Shells",
            "3as_ARC_500Rnd_Light_Shells",
            "120Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenSelectionsTextures[] = {
           QPATHTOF(air\transport\data\textures\KeeliCompany\Body_co.paa),
            "\3as\3as_starships\data\hs_int_co.paa",
            "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3as_starships\data\hs_ext_co.paa",
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3as\3as_starships\data\hs_Imp_ext_co.paa",
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\transport\data\textures\KeeliCompany\Body_co.paa),
                    "\3as\3as_starships\data\hs_int_co.paa",
                    "\a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        INVENTORY_VEHICLE_BASE(2);
    };

    class CLASS(RepubTransport): CLASS(RepublicTransport) {
        SCOPE_HIDDEN;
    };
};
