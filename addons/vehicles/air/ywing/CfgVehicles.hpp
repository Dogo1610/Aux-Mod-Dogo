class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_SelfActions;
        class Turrets {
            class BubbleGun;
        };
        class PilotCamera;
    };
    class CLASS(BTLB_YWing): BTL_Base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,BTLB_YWing);

        displayName = "BTL-B Y-Wing";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            QCLASS(Cannon_YWing),
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
            };
        magazines[] = {
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "120Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenselectionstextures[] = {
            "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
            "\3as\3AS_btlb\data\detail_co.paa",
            "\3as\3AS_btlb\data\interior_co.paa"
        };

        textureList[] = {"Standard", 1, "StandardLeader", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
            class StandardLeader: Standard {
                displayName = "Standard Leader";
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadowleader_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
            AI_CREW_SPAWNER;
        };

        class Turrets: Turrets {
            class BubbleGun: BubbleGun {
                gunnerName = "Gunner";
            };
        };

        INVENTORY_VEHICLE_BASE(2);

        class PilotCamera: PilotCamera {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;
        };
    };
};
