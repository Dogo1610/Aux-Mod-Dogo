class ls_impulsor_base;


class CfgVehicles {
    class CLASS(LAATi_Base);
    class CLASS(mini_venator): CLASS(LAATi_Base)  {
        class LS_Impulsor: ls_impulsor_base{
            enabled = 1; // 0-Disabled, 1-Enabled
            speed = 400; // Speed in km/h
            fuelDrain = 0; // Percent of fuel used every 1/2 seconds
            overchargeSpeed = 2000; // Same but for overcharge
            overchargeFuelDrain = 0; // Same but for overcharge
            // Time in seconds before overcharge can be used after turning it off
            overchargeCooldown = 05;
        };
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);

        displayName = "test Mini venator";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        armor = 200000;
        fuelCapacity = 300000;
        fuelConsumptionRate = 0.12;
        vehicleClass = "Helicopter";
        extCameraPosition[] = { 0, 170, -1000 };  // X Z Y
        simulation = "helicopterx";

        model = "\ls\core\addons\props_staticships\venator\ls_venator_zeus.p3d";


        hiddenSelections[] = {"body1","body2","body3","body4","body5","body6","body7","body8","body9","body10","door1","engine","interior1","interior2","interior3","interior4","interior5","interior6","interior7","interior8","bridge"};
        hiddenSelectionsTextures[] = {
        "\ls\core\addons\props_staticships\venator\data\body1_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body2_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body3_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body4_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body5_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body6_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body7_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body8_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body9_co.paa",
        "\ls\core\addons\props_staticships\venator\data\body10_co.paa",
        "\ls\core\addons\props_staticships\venator\data\door_co.paa",
        "\ls\core\addons\props_staticships\venator\data\engine_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior1_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior2_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior3_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior4_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior5_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior6_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior7_co.paa",
        "\ls\core\addons\props_staticships\venator\data\interior8_co.paa",
        "\ls\core\addons\props_staticships\venator\data\bridge_co.paa"
        };


        // ["body1_1","body1_2","body2_1","body2_2","body2_3","body3","body4","body5","body6","body7","body8","body9","body10","bridge","door","engine","interior1","interior2","interior3","interior4","interior5","interior6","interior7","interior8","bounding_box"]

        bounding = "bounding_box";
        memoryPointSupply = "body1_1";
        preciseGetInOut=1;
        cargopreciseGetInOut=1;

        textureList[] = {
            "Standard", 0
        };



        class TextureSources {
            class Standard {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                "\ls\core\addons\props_staticships\venator\data\body1_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body2_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body3_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body4_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body5_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body6_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body7_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body8_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body9_co.paa",
                "\ls\core\addons\props_staticships\venator\data\body10_co.paa",
                "\ls\core\addons\props_staticships\venator\data\door_co.paa",
                "\ls\core\addons\props_staticships\venator\data\engine_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior1_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior2_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior3_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior4_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior5_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior6_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior7_co.paa",
                "\ls\core\addons\props_staticships\venator\data\interior8_co.paa",
                "\ls\core\addons\props_staticships\venator\data\bridge_co.paa"
                };
            };
        };

    	class HitPoints
		{
			class HitHull
			{
				armor=999;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="engine_hit";
				hitpoint="engine_hit";
				name="engine_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor=0.60000002;
			};
			class HitEngine
			{
				armor=0.5;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitHRotor
			{
				armor=3;
				convexComponent="main_rotor_hit";
				explosionShielding=2.5;
				material=51;
				name="main_rotor_hit";
				passThrough=0.1;
				visual="";
				radius=0.0099999998;
			};
			class HitVRotor
			{
				armor=3;
				convexComponent="tail_rotor_hit";
				explosionShielding=6;
				material=51;
				name="tail_rotor_hit";
				passThrough=0.30000001;
				visual="";
				radius=0.0099999998;
			};
			class HitAvionics
			{
				armor=2;
				convexComponent="avionics_hit";
				explosionShielding=5;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
			class HitGlass1
			{
				armor=2;
				name="HitGlass1";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass2
			{
				armor=2;
				name="HitGlass2";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass3
			{
				armor=2;
				name="HitGlass3";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
		};
        driveOnComponent[]=
		{
			"Skids"
		};



        INVENTORY_VEHICLE_BASE(3);
     };
};
