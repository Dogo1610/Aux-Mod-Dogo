class CLASS(Helmet_Phase2_Tanker_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] ARMR P2 Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
    hiddenSelections[] = {"Camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };

    subItems[] = {QCLASS(cloneNvg_chip)};

    HEARING_PROTECTION_CREW;
    TFAR_externalIntercomWirelessCapable = TRUE;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
    };
};

class CLASS(Helmet_Phase2_Tanker_CT): CLASS(Helmet_Phase2_Tanker_Base) {
    displayName = "[KC] ARMR P2 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\CT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Tanker_SCT): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 02 (Senior Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\SCT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Tanker_VCT): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 03 (Veteran Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\VCT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Tanker_NCO): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 04 (NCO)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\NCO_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Tanker_Officer): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 05 (Officer)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\Officer_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Tanker_Enlisted_CamoBrown): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 01 (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\camo\brown\Enlisted_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Tanker_Enlisted_CamoGrey): CLASS(Helmet_Phase2_Tanker_CT) {
    displayName = "[KC] ARMR P2 Helm 01 (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2SpecOp\camo\grey\Enlisted_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
    };
};
