class CfgVehicles {
    class 3AS_Z95_VTOL_Dynamic_Base_F;
    class 3AS_Z95_Republic:3AS_Z95_VTOL_Dynamic_Base_F {
        class Components{
            class TransportPylonsComponent;
        };
    };
    class CLASS(Z95): 3AS_Z95_Republic {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "Z-95 Headhunter";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            "3AS_Z95_Light_Cannon",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
            };
        magazines[] = {
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "120Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenselections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Z95\Data\orange_co.paa","3AS\3AS_Z95\Data\cockpit_co.paa","3AS\3AS_Z95\data\glass\glass_ca"};

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				UIPicture="3as\3AS_Z95\Data\ui\pylon_z95.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL",
							"ARC_AGM_PYLON",
                            QCLASS(Pylon_Gunpods)
						};
						attachment="PylonRack_Missile_BIM9X_x1";
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL",
							"ARC_AGM_PYLON",
                            QCLASS(Pylon_Gunpods)
						};
						attachment="3AS_PylonRack_ARC_6Rnd_Missile_AGM";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL",
							"ARC_AGM_PYLON",
                            QCLASS(Pylon_Gunpods)
						};
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};
					class Pylons7
					{
						hardpoints[]=
						{
							"z95_CANON_PYLON"
						};
						priority=5;
						attachment="3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight=4000;
						UIposition[]={0.32499999,0.15000001};
					};
				};
            };
        };
    };
};
