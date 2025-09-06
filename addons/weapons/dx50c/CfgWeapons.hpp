class UGL_F;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
        class CowsSlot;
        class PointerSlot;
        class Single;
    };
    class JLTS_EPL2: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
        };
        class Single: Single {
        };
    };
    class CLASS(DX50C_Base): JLTS_EPL2{
        SCOPE_HIDDEN;

        displayName = "[KC] DX-50C";
        picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_ui_ca.paa";
        model = "\MRC\JLTS\weapons\EPL2\EPL2.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\EPL2\anims\EPL2_handanim.rtm"};
        magazines[]={QCLASS(Mag_20Rnd_DX50C)};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5,0.35};
                iconScale = 0.2;
                linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
                class CompatibleItems {
                    ATTACHMENTS_OPTIC_SHORT;
                    ATTACHMENTS_OPTIC_MEDIUM;
                    ATTACHMENTS_OPTIC_SIGHTS;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };
        class Single: Single
        {
            reloadTime = 0.24;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect = "";
                begin1[] = {"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",1,1,3000};
                soundBegin[] = {"begin1",1};
            };
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
        };
    };
    class CLASS(DX50C): CLASS(DX50C_Base) {
        SCOPE_HIDDEN;

        displayName = "[KC] DX-50C";
        baseWeapon = QCLASS(DX50C);

        JLTS_friedItem = QCLASS(DX50C_Fried);
    };
    class CLASS(DX50C_Fried): CLASS(DX50C) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15A (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(DX50C_Fried);
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};

    };

    class CLASS(DX50C_UGL): CLASS(DX50C_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DX-50C UGL";
        baseWeapon = QCLASS(DX50C_UGL);
        muzzles[] = {"this", "UGL"};
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ugl_plastic_ui_ca.paa";

        irDistance = 0;
        irLaserEnd = "";
        irLaserPos = "";

        JLTS_friedItem = QCLASS(DX50C_UGL_Fried);
        JLTS_repairTime = 35;

        class UGL: UGL_F {
            displayName = "Grenade Launcher";
            descriptionShort = "UGL";

            cameraDir = "OP_look";
            discreteDistance[] = {100, 200, 300, 400};
            discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
            discreteDistanceInitIndex = 0;

            useExternalOptic = FALSE;
            useModelOptics = FALSE;

            canShootInWater = FALSE;
            magazines[] = {};
            magazineWell[] = {QCLASS(MagWell_UGL_Common_DX50C)};
        };
    };

    class CLASS(DX50C_UGL_Fried): CLASS(DX50C_UGL) {
        SCOPE_HIDDEN;

        displayName = "[KC] DX-50C UGL (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
        baseWeapon = QCLASS(DX50C_UGL_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};

        class UGL: UGL {
            displayName = "Grenade Launcher (Fried)";
            magazines[] = {};
            magazineWell[] = {};
        };
    };
};
