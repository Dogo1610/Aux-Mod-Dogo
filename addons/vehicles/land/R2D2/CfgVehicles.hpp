class CfgVehicles {
    class Car;
    class Car_F: Car {
        class HitPoints {
            class HitBody;
        };
    };
    class UGV_01_base_F: Car_F {
        class Turrets;

        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitFuel;

            class HitLFWheel;
        };
    };
    class B_UGV_01_F: UGV_01_base_F {};
    class CLASS(R2D2): B_UGV_01_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Drones);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Khezu_Unarmed);

        displayName = "R2D2 Test";
        Model = "\sdt_droids\sdt_R2_KC.p3d";

        armor = 200;
        fuelCapacity = 9999;
        fuelConsumptionRate = 0.0001;

        maxSpeed = 50;
        enginePower = 276;
        engineMOI = 1.0;
        maxOmega = 471;
        idleRpm = 1000;
        redRpm = 4000;
        peakTorque = 1546;
        torqueCurve[] = {
            {0, 0.3},
            {0.178, 0.5},
            {0.25, 0.85},
            {0.4, 0.95},
            {0.5, 1},
            {0.625, 0.95},
            {0.75, 0.7},
            {1, 0.5}
        };
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        dampingRateZeroThrottleClutchEngaged = 2;


        hiddenSelectionsTextures[] = {
            "\sdt_droids\skins\head_KC-d2.paa",
            "\sdt_droids\skins\Body_KC-d2.paa",
            "\sdt_droids\skins\Legs_KC-d2.paa",
        };
        textureList[] = {
            "Standard", 1,
        };
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\sdt_droids\skins\head_KC-d2.paa",
                    "\sdt_droids\skins\Body_KC-d2.paa",
                    "\sdt_droids\skins\Legs_KC-d2.paa",
                };
            };

        };
        class HitPoints: HitPoints {
        class HitBody: HitBody {
            armor = 4;
            explosionShielding = 1;
            passThrough = 1;
            minimalHit = 0.01;
        };
        class HitHull: HitHull {
            armor = 1;
            explosionShielding = 0.2;
            minimalHit = 0.2;
            passThrough = 0.2;
        };
        class HitEngine: HitEngine {
            armor = 0.5;
            explosionShielding = 0.4;
            minimalHit = 0.2;
            passThrough = 0.4;
        };
        class HitFuel: HitFuel {
            armor = 0.5;
            explosionShielding = 0.1;
            minimalHit = 0.2;
            passThrough = 0.2;
        };

        class HitLFWheel: HitLFWheel {
            name = "wheel_1_1";
            armor = 0.5;
            explosionShielding = 4;
            passThrough = 0.3;
        };
        class HitLF2Wheel: HitLFWheel {
            name = "wheel_1_2";
        };
        class HitLMWheel: HitLFWheel {
            name = "wheel_1_3";
        };

        class HitRFWheel: HitLFWheel {
            name = "wheel_2_1";
        };
        class HitRF2Wheel: HitLFWheel {
            name = "wheel_2_2";
        };
        class HitRMWheel: HitLFWheel {
            name = "wheel_2_3";
        };
      };

    };
};
