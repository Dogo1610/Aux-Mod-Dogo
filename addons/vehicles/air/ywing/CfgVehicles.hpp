class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_SelfActions;
        class Turrets {
            class BubbleGun;
        };
        class PilotCamera;
        class Components {
           class TransportPylonsComponent;
        };
    };
    class CLASS(BTLB_YWing): BTL_Base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,BTLB_YWing);

        displayName = "BTL-B Y-Wing";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            QCLASS(Cannon_YWing),
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
            };
        magazines[] = {
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "120Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenselectionstextures[] = {
            "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
            "\3as\3AS_btlb\data\detail_co.paa",
            "\3as\3AS_btlb\data\interior_co.paa"
        };

        textureList[] = {"Standard", 1, "StandardLeader", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
            class StandardLeader: Standard {
                displayName = "Standard Leader";
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadowleader_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
            AI_CREW_SPAWNER;
        };

        class Turrets: Turrets {
            class BubbleGun: BubbleGun {
                gunnerName = "Gunner";
            };
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

        class Components: Components
        {
            class TransportPylonsComponent: TransportPylonsComponent
            {
				UIPicture="3as\3AS_BTLB\data\ui\pylon_ywing.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"ARC_EMP_RAIL",
							"B_SDB_QUAD_RAIL",
                            "RD501_Republic_Aircraft_Laser_Repeater_Pylon",
                            "RD501_Republic_Aircraft_Laser_Turbo_Pylon",
                            QCLASS(Pylon_Gunpods)
						};
						attachment="PylonRack_Bomb_SDB_x4";
						priority=5;
						maxweight=25000;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						attachment="PylonRack_Bomb_SDB_x4";
						priority=5;
						maxweight=25000;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						attachment="PylonRack_Missile_AGM_02_x2";
						priority=5;
						maxweight=50000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=5;
					};
					class pylons7: pylons1
					{
						attachment="PylonRack_Bomb_SDB_x4";
						priority=5;
						maxweight=25000;
						UIposition[]={0.44999999,0.40000001};
					};
					class pylons8: pylons3
					{
						UIposition[]={0.2,0.40000001};
						mirroredMissilePos=7;
					};
				};
			};
        };
    };
};
