class CfgVehicles {
    class Plane_Fighter_03_base_F;
    class 3as_V19_base: Plane_Fighter_03_base_F{
        class ACE_Actions;
        class ACE_SelfActions;
        class Turrets {
            class BubbleGun;
        };
        class PilotCamera;
    };
    class CLASS(V19): 3as_V19_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "V-19 Twister";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] =
		{
			"3as_V19_Medium_Cannon",
			"3as_ARC_Missile_AA",
			"weapon_AMRAAMLauncher",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"PylonRack_Missile_AMRAAM_C_x2",
			"PylonRack_Missile_AMRAAM_C_x2",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"3as_V19_800Rnd_Medium_shells",
			"3as_V19_800Rnd_Medium_shells",
			"3as_V19_800Rnd_Medium_shells"
		};

        hiddenselectionstextures[] = {
			"3as\3as_v19\textures\wings_co.paa",
			"3as\3as_v19\textures\wing plates_co.paa",
			"3as\3as_v19\textures\hull_co.paa",
			"3as\3as_v19\textures\gun gear_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"3as\3as_v19\textures\pizzlepit_co.paa"
        };

        textureList[] = {"Standard", 1,};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
			    "3as\3as_v19\textures\wings_co.paa",
			    "3as\3as_v19\textures\wing plates_co.paa",
			    "3as\3as_v19\textures\hull_co.paa",
			    "3as\3as_v19\textures\gun gear_co.paa",
			    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			    "3as\3as_v19\textures\pizzlepit_co.paa"
                };
            };


        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
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