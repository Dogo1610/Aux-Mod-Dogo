class CfgGroups {
    class CLASS(TeamBase) {
        class Object0;
        class Object1;
        class Object2;
        class Object3;
    };

    class CLASS(SquadBase) {
        class Object0;
        class Object1;
        class Object2;
        class Object3;
        class Object4;
        class Object5;
        class Object6;
    };

    class CLASS(SectionBase) {
        class Object0;
        class Object1;
        class Object2;
        class Object3;
        class Object4;
        class Object5;
        class Object6;
        class Object7;
        class Object8;
        class Object9;
        class Object10;
        class Object11;
    };

    class East {
        class FACTION(CIS) {
            name = "[KC] CIS";

            class Infantry {
                name = "Infantry";

                class RifleSquad: CLASS(SquadBase) {
                    faction = QFACTION(CIS);
                    name = "B1 Rifle Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = OPFOR;

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class RifleTeam: CLASS(TeamBase) {
                    faction = QFACTION(CIS);
                    name = "B1 Rifle Team";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = OPFOR;

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class AntiArmorSquad: RifleSquad {
                    name = "B1 Anti-Armor Squad";

                    class Object0: Object0 {};
                    class Object1: Object1 {};
                    class Object2: Object2 {};
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object5: Object5 {};
                    class Object6: Object6 {};
                };

                class AntiArmorTeam: RifleTeam {
                    name = "B1 Anti-Armor Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class AntiAirSquad: RifleSquad {
                    name = "B1 Anti-Air Squad";

                    class Object0: Object0 {};
                    class Object1: Object1 {};
                    class Object2: Object2 {};
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AA);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AA);
                    };
                    class Object5: Object5 {};
                    class Object6: Object6 {};
                };

                class AntiAirTeam: RifleTeam {
                    name = "B1 Anti-Air Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AA);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class AssaultSquad: RifleSquad {
                    name = "B1 Assault Squad";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Sniper);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                };

                class AssaultTeam: RifleTeam {
                    name = "B1 Assault Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class LightAssaultSquad: RifleSquad {
                    name = "B1 Assault Squad (Light)";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class LightAssaultTeam: RifleTeam {
                    name = "B1 Assault Team (Light)";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_CQC);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class DefenseSquad: RifleSquad {
                    name = "B1 Defense Squad";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_CQC);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Sniper);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                };

                class LightDefenseSquad: RifleSquad {
                    name = "B1 Defense Squad (Light)";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class WeaponsSquad: RifleSquad {
                    name = "B1 Weapons Squad";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_CQC);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Sniper);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                };

                class WeaponsTeam: RifleTeam {
                    name = "B1 Weapons Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_CQC);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                };

                class CommandSquad: RifleSquad {
                    name = "B1 Command Squad";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Commander);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                };

                class CommandTeam: RifleTeam {
                    name = "B1 Command Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Commander);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Security);
                    };
                };

                class B2Squad: RifleSquad {
                    name = "B2 Squad";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                };

                class B2Team: RifleTeam {
                    name = "B2 Team";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                };
            };

            class VehicleFiller {
                name = "Vehicle Fillers";

                class HMP_B1: CLASS(SectionBase) {
                    faction = QFACTION(CIS);
                    name = "HMP B1 Section";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_CQC);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Heavy);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Marine);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_Marine);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1_AT);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object7: Object7 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object8: Object8 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object9: Object9 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object10: Object10 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    class Object11: Object11 {
                        vehicle = QCLASS(CIS_Unit_Droid_B1);
                    };
                    delete Object12;
                };

                class HMP_B2: HMP_B1 {
                    name = "HMP B2 Section";

                    class Object0: Object0 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object1: Object1 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object2: Object2 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object3: Object3 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object4: Object4 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object5: Object5 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object6: Object6 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object7: Object7 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object8: Object8 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object9: Object9 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object10: Object10 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                    class Object11: Object11 {
                        vehicle = QCLASS(CIS_Unit_Droid_B2);
                    };
                };
            };
        };
    };
};
