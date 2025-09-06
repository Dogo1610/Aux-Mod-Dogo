class CfgWeapons {
    class ls_weapon_z7_base;
    class ls_weapon_z7: ls_weapon_z7_base {
        class FullAuto;
    };
    class CLASS(Z7_base): ls_weapon_z7 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        baseWeapon = QCLASS(Z7_base);
        modes[] = {"FullAuto"};
        magazines[] = {QCLASS(Mag_800rnd_Z7), QCLASS(Mag_800rnd_Z7_Red)};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        // Enable "buddy reloading"
        ace_reloadLaunchers_enabled = TRUE;

        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;

            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_Z7Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z7Shot)};
            };
        };
    };

    class CLASS(Z7): CLASS(Z7_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-7 Rotary Chaingun";
        baseWeapon = QCLASS(Z7);

        JLTS_friedItem = QCLASS(Z7_fried);
    };

    class CLASS(Z7_fried): CLASS(Z7) {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-7 Rotary Chaingun (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(z8\data\ui\Z8_fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
