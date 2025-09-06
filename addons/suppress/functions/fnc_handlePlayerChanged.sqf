#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Handles adding and removed suppression to controllable units.
 *
 * Arguments:
 * 0: New unit <OBJECT>
 * 1: Old unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_newUnit, _oldUnit] call BNA_KC_suppress_fnc_handlePlayerChanged;
 *
 * Public: No
 */

params ["_newPlayer", "_oldPlayer"];
TRACE_2("fnc_handlePlayerChanged",_newPlayer,_oldPlayer);

if !(GVAR(enabled)) exitWith {};

if (!(isNull _oldPlayer) && (GVAR(suppressedEH) isNotEqualTo -1)) then {
    _oldPlayer removeEventHandler ["Suppressed", GVAR(suppressedEH)];
};

0 call FUNC(resetEffects);

// Don't add EH for curators
if ((side (group _newPlayer)) isEqualTo sideLogic) exitWith {
    GVAR(suppressedEH) = -1;
};

GVAR(suppressedEH) = _newPlayer addEventHandler ["Suppressed", LINKFUNC(handleSuppressed)];

nil;
