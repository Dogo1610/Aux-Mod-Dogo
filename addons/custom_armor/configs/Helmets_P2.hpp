class CLASS(Helmet_Phase2_Base);
P2_HELMET_CUSTOM(Alvarez);
P2_HELMET_CUSTOM(Axel);
P2_HELMET_CUSTOM(Bailout);
P2_HELMET_VISOR_CUSTOM(Bean,Crimson);
P2_HELMET_CUSTOM(Bigness);
P2_HELMET_VISOR_CUSTOM(Bob,Kyber);
P2_HELMET_CUSTOM(Bond);
P2_HELMET_CUSTOM(Breezy);
P2_HELMET_VISOR_CUSTOM(Burnt,Bacta);
P2_HELMET_CUSTOM(Calvin);
P2_HELMET_VISOR_CUSTOM(Cough,Bacta);
P2_HELMET_CUSTOM(Cutthroat);
P2_HELMET_VISOR_CUSTOM(Dexus,Bacta);
P2_HELMET_CUSTOM(Evo);
P2_HELMET_CUSTOM(Flare);
P2_HELMET_CUSTOM(Grey);
P2_HELMET_VISOR_CUSTOM(Goldie,Bacta);
P2_HELMET_VISOR_CUSTOM(Harry,Bacta);
P2_HELMET_CUSTOM(Havoc);
P2_HELMET_CUSTOM(Hazard);
P2_HELMET_CUSTOM(Henkie);
P2_HELMET_CUSTOM(Jackal);
P2_HELMET_CUSTOM(Jaws);

class CLASS(Helmet_Phase2_Jaws_CamoBrown): CLASS(Helmet_Phase2_Jaws) {
    displayName = "[KC] INF P2 Helm ('Jaws') - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Jaws_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};

P2_HELMET_VISOR_CUSTOM(Joe,Crimson);
P2_HELMET_VISOR_CUSTOM(Keeli,Crimson);

class CLASS(Helmet_Phase2_Keeli_CamoBrown): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoBrown);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown);

    class XtdGearInfo: XtdGearInfo {
        camo = "Brown";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoBrown): CLASS(Helmet_Phase2_Keeli_CamoBrown) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_CamoGrey): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoGrey);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey);

    class XtdGearInfo: XtdGearInfo {
        camo = "Grey";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoGrey): CLASS(Helmet_Phase2_Keeli_CamoGrey) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_Worn): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Keeli_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_Worn): CLASS(Helmet_Phase2_Keeli_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_Emp): CLASS(Helmet_Phase2_Keeli) {
    displayName = "[KC] INF P2 Helm ('Keeli') - Empire";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\empire\Keeli_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_Emp);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_Emp);

    class XtdGearInfo: XtdGearInfo {
        camo = "Empire";
    };
};
class CLASS(Helmet_Phase2_KeeliCrimson_Emp): CLASS(Helmet_Phase2_Keeli_Emp) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\empire\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P2_HELMET_CUSTOM(Kujo);
P2_HELMET_CUSTOM(Leon);
P2_HELMET_VISOR_CUSTOM(Lou,Plasma);
P2_HELMET_CUSTOM(Marge);
P2_HELMET_CUSTOM(Match);
P2_HELMET_CUSTOM(Ox);
P2_HELMET_VISOR_CUSTOM(Patriot,Crimson);
P2_HELMET_CUSTOM(Rabble);
P2_HELMET_CUSTOM(Rodger);
P2_HELMET_CUSTOM(Sage);
P2_HELMET_CUSTOM(Scvrpio);
P2_HELMET_VISOR_CUSTOM(Sin,Crimson);
P2_HELMET_CUSTOM(Sogi);
P2_HELMET_CUSTOM(Sprint);
P2_HELMET_CUSTOM(Star);
P2_HELMET_VISOR_CUSTOM(Swoop,Bacta);
P2_HELMET_CUSTOM(Sytha);
P2_HELMET_CUSTOM(Talyn);
P2_HELMET_CUSTOM(Tugz);
P2_HELMET_CUSTOM(Turtle);
P2_HELMET_VISOR_CUSTOM(Tyrant,Crimson);

class CLASS(Helmet_Phase2_Tyrant_Worn): CLASS(Helmet_Phase2_Tyrant) {
    SCOPE_HIDDEN;
    displayName = "[KC] INF P2 Helm ('Tyrant') - Worn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Tyrant_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
    };

    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Tyrant_Worn);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_TyrantCrimson_Worn);

    class XtdGearInfo: XtdGearInfo {
        camo = "Worn";
    };
};
class CLASS(Helmet_Phase2_TyrantCrimson_Worn): CLASS(Helmet_Phase2_Tyrant_Worn) {
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\worn\Tyrant_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

P2_HELMET_CUSTOM(Vortex);
P2_HELMET_CUSTOM(Weenie);
P2_HELMET_CUSTOM(Woods);
