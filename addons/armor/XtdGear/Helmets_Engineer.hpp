class CLASS(Helmet_Engineer_Base) {
    model = QCLASS(Helmets_Engineer);
    rank = "Base";
};

class CLASS(Helmet_Engineer_CT): CLASS(Helmet_Engineer_Base) { rank = "CT"; };

class CLASS(Helmet_Engineer_Enlisted_CamoBrown): CLASS(Helmet_Engineer_CT) { camo = "Brown"; };
class CLASS(Helmet_Engineer_Enlisted_CamoGrey): CLASS(Helmet_Engineer_CT) { camo = "Grey"; };
