class ls_impulsor_base;

class CfgVehicles {
    class Heli_Attack_01_base_F;
	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F {
    };
    class 3AS_Patrol_LAAT_Republic: 3AS_Patrol_LAAT_Base {
        class ACE_SelfActions;
        class AnimationSources;
        class pilotCamera;
    };
    class CLASS(LAATLE_Base): 3AS_Patrol_LAAT_Republic {
        class LS_Impulsor: ls_impulsor_base{
            enabled = 1; // 0-Disabled, 1-Enabled
            speed = 300; // Speed in km/h
            fuelDrain = 0; // Percent of fuel used every 1/2 seconds
            overchargeSpeed = 1000; // Same but for overcharge
            overchargeFuelDrain = 0; // Same but for overcharge
            // Time in seconds before overcharge can be used after turning it off
            overchargeCooldown = 01;
        };
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        side = BLUFOR;

        displayName = "LAAT/LE (Base)";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        armor = 200;
        fuelCapacity = 1000;
        fuelConsumptionRate = 0.12;

        vehicleClass = "Helicopter";
        availableForSupportTypes[] = {"CAS_Heli", "Transport", "Drop"};


        // Weapons and mags
        weapons[] = {
            "3as_LAAT_Medium_Canon",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
        };
        magazines[] = {
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "3as_LAAT_1000Rnd_Medium_shells",
            "Laserbatteries"
        };

        // Textures
        hiddenSelectionsTextures[] = {
            "3AS\3as_LAAT\LAAT_LE\data\republicpatrol01_CO.paa"
        };

        textureList[] = {
            "Standard", 0,
            "Imperial", 0,
        };

        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
					"3AS\3as_LAAT\LAAT_LE\data\republicpatrol01_CO.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
					"3AS\3as_LAAT\LAAT_LE\data\imperialpatrol01_CO.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class AnimationSources: AnimationSources {
            class BeaconsStart
			{
				displayName="$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_BeaconsStart0";
				author="$STR_A3_Bohemia_Interactive";
				initPhase=0;
			};
            class Beacons
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Door_L
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Door_R
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="3as_LAAT_Medium_Canon";
			};
        };


        class pilotCamera: pilotCamera {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;

            ace_missileguidance_usePilotCameraForTargeting = TRUE;
        };
    };



    class CLASS(LAATLE_Republic): CLASS(LAATLE_Base) {
        SCOPE_PUBLIC;
        displayName = "LAAT/LE (Republic)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATLE_Republic);


    };
};
