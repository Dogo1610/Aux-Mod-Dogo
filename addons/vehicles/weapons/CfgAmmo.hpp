class CfgAmmo {
    // TODO: Make base bullet classes for vehicles
    // Will be done Some Day™️, but not today

    // TODO: Update flyby sounds with JLTS and/or 3AS sounds. See weapons addon for property/class names

    class B_127x99_Ball;
    class CLASS(Bullet_PlasmaCoax_Blue): B_127x99_Ball {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };

    class 3AS_ATRT_bluePlasma;
    class CLASS(Bullet_PlasmaATRT_Blue): 3AS_ATRT_bluePlasma {
        hit = 120;
        caliber = 6;
        typicalSpeed = 400;
        coefGravity = 0.01;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        tracerScale = 1;
    };

    class 3AS_MK4ES_30mm_MP;
    class CLASS(Bullet_Plasma_Medium_Cannon_Blue): 3AS_MK4ES_30mm_MP {
        hit = 90;
        caliber = 4.4;
        typicalSpeed = 1070;

        model = "\3AS\3AS_Weapons\Data\tracer_shell_blue.p3d";
        effectfly = "3AS_PlasmaBolt_Medium_Blue_Fly";

        tracerScale = 2.5;
    };

    class Sh_155mm_AMOS;
    class CLASS(Shell_PlasmaMortar_82mm_HE): Sh_155mm_AMOS {
        hit = 340;
        dangerRadiusHit = 750;
        indirectHit = 125;
        indirectHitRange = 30;
        suppressionRadiusHit = 75;
        explosive = 0.8;

        cost = 200;

        effectFly = "3AS_PlasmaBolt_Medium_Blue_Fly";
        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO;

        soundFakeFall[] = {"soundFakeFall0", 1};
        soundFakeFall0[] = {QPATHTOF(sounds\data\audio\mortar\Fall1.wss), 3.16228, 1, 1000};

        class CamShakeExplode {
            distance = 216.443;
            duration = 1.8;
            frequency = 20;
            power = 16.4;
        };
        class CamShakeFire {
            distance = 72.4431;
            duration = 1.8;
            frequency = 20;
            power = 3.00922;
        };
        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
        class CamShakePlayerFire {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
    };

    class ShotDeployBase;
    class CLASS(Shell_Mortar_SmokeWhite): ShotDeployBase {
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo = "SmokeShellArty";

        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO;
    };
    class CLASS(Shell_Mortar_SmokeBlue): CLASS(Shell_Mortar_SmokeWhite) {
        submunitionAmmo = QCLASS(Shell_Mortar_SmokeBlue_Submunition);
    };
    class CLASS(Shell_Mortar_SmokeRed): CLASS(Shell_Mortar_SmokeWhite) {
        submunitionAmmo = QCLASS(Shell_Mortar_SmokeRed_Submunition);
    };

    class SmokeShellArty;
    class CLASS(Shell_Mortar_SmokeBlue_Submunition): SmokeShellArty {
        effectsSmoke = QCLASS(Effects_Mortar_SmokeShellBlue);
    };
    class CLASS(Shell_Mortar_SmokeRed_Submunition): SmokeShellArty {
        effectsSmoke = QCLASS(Effects_Mortar_SmokeShellRed);
    };
};
