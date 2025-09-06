#define INTERCOM_START class TFAR_IntercomChannel { \
    displayName = "Intercom Channel"; \
    condition = "true"; \
    statement = ""

#define INTERCOM_DISABLED class TFAR_IntercomChannel_disabled { \
    GVAR(channelId) = -1; \
    displayName = "Disabled"; \
    condition = QUOTE([ARR_3(_target,_player,-1)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,-1)] call FUNC(setChannel)); \
}
#define INTERCOM_CARGO class TFAR_IntercomChannel_1 { \
    GVAR(channelId) = 0; \
    displayName = "Cargo"; \
    condition = QUOTE([ARR_3(_target,_player,0)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,0)] call FUNC(setChannel)); \
}
#define INTERCOM_CREW class TFAR_IntercomChannel_2 { \
    GVAR(channelId) = 1; \
    displayName = "Crew"; \
    condition = QUOTE([ARR_3(_target,_player,1)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,1)] call FUNC(setChannel)); \
}
#define INTERCOM_MISC1 class TFAR_IntercomChannel_Misc1 { \
    GVAR(channelId) = 2; \
    displayName = "Misc Channel 1"; \
    condition = QUOTE([ARR_3(_target,_player,2)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,2)] call FUNC(setChannel)); \
}
#define INTERCOM_MISC2 class TFAR_IntercomChannel_Misc2 { \
    GVAR(channelId) = 3; \
    displayName = "Misc Channel 2"; \
    condition = QUOTE([ARR_3(_target,_player,3)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,3)] call FUNC(setChannel)); \
}
#define INTERCOM_MISC3 class TFAR_IntercomChannel_Misc3 { \
    GVAR(channelId) = 4; \
    displayName = "Misc Channel 3"; \
    condition = QUOTE([ARR_3(_target,_player,4)] call FUNC(canSwitchChannel)); \
    statement = QUOTE([ARR_3(_target,_player,4)] call FUNC(setChannel)); \
}

#define INTERCOM_END }
