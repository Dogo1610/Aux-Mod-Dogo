class GVAR(overlay) {
    idd = -1;
    movingEnable = FALSE;
    fadeIn = 0;
    fadeOut = 0;
    duration = 9.9999998e+010;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(overlay),_this select 0)]);
    onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(overlay),nil)]);

    class controls {
        class RscOverlay: RscPicture {
            idc = IDC_OVERLAY;
            x = "safezoneXAbs";
            y = "safezoneY";
            w = "safezoneWAbs";
            h = "safezoneH";
            text = QPATHTOF(data\overlayMedium_ca.paa);
            colortext[] = {0, 0, 0, 1};
        };
    };
};
