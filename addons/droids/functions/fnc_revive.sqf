#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Has a chance to revive a droid unit when it is killed.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Type of droid to simulate <STRING>
 *    - B2: Random chance to leave old body, but has "camo_arms" and "torso" selections hidden.
 *          New unit is forced to crawl and has "legs" selection hidden.
 *
 * Return Value:
 * None
 *
 * Examples:
 * _unit call BNA_KC_droids_fnc_revive
 *
 * Public: No
 */

params ["_unit", ["_droidType", ""]];
private ["_reviveUnit", "_reviveChance", "_reviveDelay"];
TRACE_2("fnc_revive",_unit,_droidType);

if (!GVAR(canRevive) or {isNull _unit} or {!local _unit}) exitWith {};

_reviveUnit = getText (configOf _unit >> QGVAR(reviveUnit));
_reviveChance = getNumber (configOf _unit >> QGVAR(reviveChance));

if (_reviveUnit == "" or {_reviveChance <= 0}) exitWith {};

if (random 1 <= _reviveChance) exitWith {};

_reviveDelay = (random 15) max 5;
INFO_2("Reviving unit %1 (%2)",_unit,typeOf _unit);

[{
    params ["_oldUnit", "_droidType"];
    private ["_reviveClass", "_newUnit"];
    _reviveClass = getText (configOf _oldUnit >> QGVAR(reviveUnit));
    _textures = getObjectTextures _oldUnit;

    _newUnit = group _oldUnit createUnit [_reviveClass, _oldUnit, [], 0, "CAN_COLLIDE"];
    {_newUnit setObjectTextureGlobal [_forEachIndex, _x]} forEach _textures;
    switch (toLowerANSI _droidType) do {
        case "bx": {
            [QEGVAR(core,forceSay3D), [_newUnit, QCLASS(BX_Revive), 50]] call CBA_fnc_globalEvent;
            deleteVehicle _oldUnit;
            };
        case "b2": {
            _newUnit setVariable ["Droid_Health", GVAR(healthB2) / 2, true];
            if (random 1 > 0.5) then {
                INFO("Forcing new B2 to crawl, hiding textures");
                _oldUnit setObjectTextureGlobal ["camo_arms", ""];
                _oldUnit setObjectTextureGlobal ["torso", ""];
                _newUnit setObjectTextureGlobal ["legs", ""];
                [_newUnit, "AmovPpneMstpSrasWrflDnon", 2] call ace_common_fnc_doAnimation;
                _newUnit setUnitPos "DOWN";
            } else {
                INFO("Forcing new B2 to walk, no WBK script");
                deleteVehicle _oldUnit;
                // Try to make a smooth movement from prone to B2 animation
                _newUnit setUnitPos "DOWN";
                [_newUnit, "AmovPpneMstpSrasWrflDnon", 2] call ace_common_fnc_doAnimation;
                [{_this setUnitPos "MIDDLE";}, _newUnit, 1] call CBA_fnc_waitAndExecute;
                [{_this setUnitPos "UP";}, _newUnit, 1.5] call CBA_fnc_waitAndExecute;
                [{_this call FUNC(initB2);}, _newUnit, 3] call CBA_fnc_waitAndExecute;
            };
        };
        default {
            deleteVehicle _oldUnit;
        };
    };
}, [_unit, _droidType], _reviveDelay] call CBA_fnc_waitAndExecute;
nil;
