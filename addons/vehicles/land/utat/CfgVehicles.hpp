class CfgVehicles {
    class 3AS_UTAT_01_Base;
    class 3AS_UTAT: 3AS_UTAT_01_Base {
        class ACE_SelfActions;
    };
    class CLASS(UTAT): 3AS_UTAT {
        SCOPE_PUBLIC;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\utat,UTAT);

        displayName = "UT-AT";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelections[] = {"camo", "camo1"}; // 3AS bug, missing comma in original config
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
            QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
        };

        textureList[] = {
            "Standard", 0,
            "KeeliCompany", 1,
            "KeeliCompanyWhite", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa",
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\KeeliCompanyWhite\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\KeeliCompanyWhite\Secondary_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\CamoBrown\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\CamoBrown\Secondary_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\CamoGrey\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\CamoGrey\Secondary_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };

        INVENTORY_VEHICLE_BASE(9);

        class VehicleTransport {
            class Cargo {
                canBeTransported = TRUE;
                dimensions[] = {
                    {-3.61739,  5.24512, 1.25418},
                    { 1.94353, -9.91646, 12.53851}
                };
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
            };
        };
    };
};
