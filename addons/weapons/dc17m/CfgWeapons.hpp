class PointerSlot_Rail;

class CfgWeapons {
    class CLASS(Muzzle_Stun);
    class ls_rifle_base;
    class ls_weapon_dc17m_base: ls_rifle_base {
        class WeaponSlotsInfo;
    };
    class ls_weapon_dc17m: ls_weapon_dc17m_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
        };
        class FullAuto;
        class Single;
    };
    class CLASS(DC17M_Base): ls_weapon_dc17m {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-17M (Base)";
        baseWeapon = QCLASS(DC17M_Base);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] = {
            QCLASS(Mag_60Rnd_DC17M),
            QCLASS(Mag_90Rnd_DC17M),
            QCLASS(Mag_5Rnd_DC17M_Sniper),
            QCLASS(Mag_1Rnd_DC17M_AT),
            "Aux12thFleet_Mag_60Rnd_DC17M",
            "Aux12thFleet_Mag_90Rnd_DC17M",
            "Aux12thFleet_Mag_5Rnd_DC17M_Sniper",
            "Aux12thFleet_Mag_1Rnd_DC17M_AT"
        };
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};

        // Array of magazine properties to check and the attachment to use
        GVAR(attachmentSwapEnabled) = TRUE;
        GVAR(attachments)[] = {
            {QGVAR(isBlasterMag), "ls_muzzle_dc17m_blaster"},
            {QGVAR(isATMag), "ls_muzzle_dc17m_antiArmor"},
            {QGVAR(isSniperMag), "ls_muzzle_dc17m_sniper"}
        };

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        hiddenSelectionsTextures[] = {QPATHTOF(dc17m\data\DC17M_camo1_co.paa)};
        picture = QPATHTOF(dc17m\data\ui\DC17M_ca);

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    ls_cows_dc17m_sniper = TRUE;
                    ATTACHMENTS_OPTIC_SHORT;
                    ATTACHMENTS_OPTIC_MEDIUM;
                    ATTACHMENTS_OPTIC_LONG;
                    CLASS(Optic_Holosight) = TRUE;
                    CLASS(Optic_Holosight2) = TRUE;
                    CLASS(Optic_Holosight3) = TRUE;
                };
            };
            class PointerSlot: PointerSlot_Rail {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class Single: Single {
            dispersion = 0.0001;
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_Single)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_Single)};
            };
        };
        class FullAuto: FullAuto {
            dispersion = 0.015;
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17MShot_FullAuto)};
            };
        };

        class Stun: CLASS(Muzzle_Stun) {
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};
        };

        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "ls_muzzle_dc17m_blaster";
            };
        };
    };

    class CLASS(DC17M): CLASS(DC17M_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-17M";
        baseWeapon = QCLASS(DC17M);
    };
};
