class CfgVehicles {

	class 3AS_Z95_VTOL_Dynamic_Base_F;
    class 3AS_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F{
        class ACE_Actions;
        class ACE_SelfActions;
        class Turrets {
            class BubbleGun;
        };
        class PilotCamera;
        };
        class CLASS(Z95): 3AS_Z95_Republic {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "Z-95 Demon";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] =
		{
			"3AS_Z95_Light_Cannon",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"3AS_Z95_750Rnd_Light_shells",
			"3AS_Z95_750Rnd_Light_shells",
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};

        hiddenselectionstextures[] = {
            QPATHTOF(air\z95\data\textures\Demon\Hull_co.paa),
			"3AS\3AS_Z95\Data\cockpit_co.paa",
			"3AS\3AS_Z95\data\glass\glass_ca"
        };

        textureList[] = {"Standard", 1,};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\z95\data\textures\Demon\Hull_co.paa),
			        "3AS\3AS_Z95\Data\cockpit_co.paa",
			        " 3AS\3AS_Z95\data\glass\glass_ca"
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
};