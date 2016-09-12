#pragma once

#include "../SmartPtr.hpp"

namespace xyp { namespace WoW { namespace DBFileClient {

    enum class ItemBondingType
    {
        BIND_NONE                                   = 0,
        BIND_ON_ACQUIRE                             = 1,
        BIND_ON_EQUIP                               = 2,
        BIND_ON_USE                                 = 3,
        BIND_QUEST                                  = 4
    };

    enum ItemFlags : uint32_t
    {
        ITEM_FLAG_NO_PICKUP                         = 0x00000001,
        ITEM_FLAG_CONJURED                          = 0x00000002, // Conjured item
        ITEM_FLAG_HAS_LOOT                          = 0x00000004, // Item can be right clicked to open for loot
        ITEM_FLAG_HEROIC_TOOLTIP                    = 0x00000008, // Makes green "Heroic" text appear on item
        ITEM_FLAG_DEPRECATED                        = 0x00000010, // Cannot equip or use
        ITEM_FLAG_NO_USER_DESTROY                   = 0x00000020, // Item can not be destroyed, except by using spell (item can be reagent for spell)
        ITEM_FLAG_PLAYERCAST                        = 0x00000040,
        ITEM_FLAG_NO_EQUIP_COOLDOWN                 = 0x00000080, // No default 30 seconds cooldown when equipped
        ITEM_FLAG_MULTI_LOOT_QUEST                  = 0x00000100,
        ITEM_FLAG_IS_WRAPPER                        = 0x00000200, // Item can wrap other items
        ITEM_FLAG_USES_RESOURCES                    = 0x00000400,
        ITEM_FLAG_MULTI_DROP                        = 0x00000800, // Looting this item does not remove it from available loot
        ITEM_FLAG_ITEM_PURCHASE_RECORD              = 0x00001000, // Item can be returned to vendor for its original cost (extended cost)
        ITEM_FLAG_PETITION                          = 0x00002000, // Item is guild or arena charter
        ITEM_FLAG_HAS_TEXT                          = 0x00004000,
        ITEM_FLAG_NO_DISENCHANT                     = 0x00008000,
        ITEM_FLAG_REAL_DURATION                     = 0x00010000,
        ITEM_FLAG_NO_CREATOR                        = 0x00020000,
        ITEM_FLAG_IS_PROSPECTABLE                   = 0x00040000, // Item can be prospected
        ITEM_FLAG_UNIQUE_EQUIPPABLE                 = 0x00080000, // You can only equip one of these
        ITEM_FLAG_IGNORE_FOR_AURAS                  = 0x00100000,
        ITEM_FLAG_IGNORE_DEFAULT_ARENA_RESTRICTIONS = 0x00200000, // Item can be used during arena match
        ITEM_FLAG_NO_DURABILITY_LOSS                = 0x00400000,
        ITEM_FLAG_USE_WHEN_SHAPESHIFTED             = 0x00800000, // Item can be used in shapeshift forms
        ITEM_FLAG_HAS_QUEST_GLOW                    = 0x01000000,
        ITEM_FLAG_HIDE_UNUSABLE_RECIPE              = 0x02000000, // Profession recipes: can only be looted if you meet requirements and don't already know it
        ITEM_FLAG_NOT_USEABLE_IN_ARENA              = 0x04000000, // Item cannot be used in arena
        ITEM_FLAG_IS_BOUND_TO_ACCOUNT               = 0x08000000, // Item binds to account and can be sent only to your own characters
        ITEM_FLAG_NO_REAGENT_COST                   = 0x10000000, // Spell is cast ignoring reagents
        ITEM_FLAG_IS_MILLABLE                       = 0x20000000, // Item can be milled
        ITEM_FLAG_REPORT_TO_GUILD_CHAT              = 0x40000000,
        ITEM_FLAG_NO_PROGRESSIVE_LOOT               = 0x80000000
    };

    enum ItemFlags2 : uint32_t
    {
        ITEM_FLAG2_FACTION_HORDE                            = 0x00000001,
        ITEM_FLAG2_FACTION_ALLIANCE                         = 0x00000002,
        ITEM_FLAG2_DONT_IGNORE_BUY_PRICE                    = 0x00000004, // when item uses extended cost, gold is also required
        ITEM_FLAG2_CLASSIFY_AS_CASTER                       = 0x00000008,
        ITEM_FLAG2_CLASSIFY_AS_PHYSICAL                     = 0x00000010,
        ITEM_FLAG2_EVERYONE_CAN_ROLL_NEED                   = 0x00000020,
        ITEM_FLAG2_NO_TRADE_BIND_ON_ACQUIRE                 = 0x00000040,
        ITEM_FLAG2_CAN_TRADE_BIND_ON_ACQUIRE                = 0x00000080,
        ITEM_FLAG2_CAN_ONLY_ROLL_GREED                      = 0x00000100,
        ITEM_FLAG2_CASTER_WEAPON                            = 0x00000200,
        ITEM_FLAG2_DELETE_ON_LOGIN                          = 0x00000400,
        ITEM_FLAG2_INTERNAL_ITEM                            = 0x00000800,
        ITEM_FLAG2_NO_VENDOR_VALUE                          = 0x00001000,
        ITEM_FLAG2_SHOW_BEFORE_DISCOVERED                   = 0x00002000,
        ITEM_FLAG2_OVERRIDE_GOLD_COST                       = 0x00004000,
        ITEM_FLAG2_IGNORE_DEFAULT_RATED_BG_RESTRICTIONS     = 0x00008000,
        ITEM_FLAG2_NOT_USABLE_IN_RATED_BG                   = 0x00010000,
        ITEM_FLAG2_BNET_ACCOUNT_TRADE_OK                    = 0x00020000,
        ITEM_FLAG2_CONFIRM_BEFORE_USE                       = 0x00040000,
        ITEM_FLAG2_REEVALUATE_BONDING_ON_TRANSFORM          = 0x00080000,
        ITEM_FLAG2_NO_TRANSFORM_ON_CHARGE_DEPLETION         = 0x00100000,
        ITEM_FLAG2_NO_ALTER_ITEM_VISUAL                     = 0x00200000,
        ITEM_FLAG2_NO_SOURCE_FOR_ITEM_VISUAL                = 0x00400000,
        ITEM_FLAG2_IGNORE_QUALITY_FOR_ITEM_VISUAL_SOURCE    = 0x00800000,
        ITEM_FLAG2_NO_DURABILITY                            = 0x01000000,
        ITEM_FLAG2_ROLE_TANK                                = 0x02000000,
        ITEM_FLAG2_ROLE_HEALER                              = 0x04000000,
        ITEM_FLAG2_ROLE_DAMAGE                              = 0x08000000,
        ITEM_FLAG2_CAN_DROP_IN_CHALLENGE_MODE               = 0x10000000,
        ITEM_FLAG2_NEVER_STACK_IN_LOOT_UI                   = 0x20000000,
        ITEM_FLAG2_DISENCHANT_TO_LOOT_TABLE                 = 0x40000000,
        ITEM_FLAG2_USED_IN_A_TRADESKILL                     = 0x80000000
    };

    enum ItemFlags3 : uint32_t
    {
        ITEM_FLAG3_DONT_DESTROY_ON_QUEST_ACCEPT                 = 0x00000001,
        ITEM_FLAG3_ITEM_CAN_BE_UPGRADED                         = 0x00000002,
        ITEM_FLAG3_UPGRADE_FROM_ITEM_OVERRIDES_DROP_UPGRADE     = 0x00000004,
        ITEM_FLAG3_ALWAYS_FFA_IN_LOOT                           = 0x00000008,
        ITEM_FLAG3_HIDE_UPGRADE_LEVELS_IF_NOT_UPGRADED          = 0x00000010,
        ITEM_FLAG3_UPDATE_INTERACTIONS                          = 0x00000020,
        ITEM_FLAG3_UPDATE_DOESNT_LEAVE_PROGRESSIVE_WIN_HISTORY  = 0x00000040,
        ITEM_FLAG3_IGNORE_ITEM_HISTORY_TRACKER                  = 0x00000080,
        ITEM_FLAG3_IGNORE_ITEM_LEVEL_CAP_IN_PVP                 = 0x00000100,
        ITEM_FLAG3_DISPLAY_AS_HEIRLOOM                          = 0x00000200, // Item appears as having heirloom quality ingame regardless of its real quality (does not affect stat calculation)
        ITEM_FLAG3_SKIP_USE_CHECK_ON_PICKUP                     = 0x00000400,
        ITEM_FLAG3_OBSOLETE                                     = 0x00000800,
        ITEM_FLAG3_DONT_DISPLAY_IN_GUILD_NEWS                   = 0x00001000, // Item is not included in the guild news panel
        ITEM_FLAG3_PVP_TOURNAMENT_GEAR                          = 0x00002000,
        ITEM_FLAG3_REQUIRES_STACK_CHANGE_LOG                    = 0x00004000,
        ITEM_FLAG3_UNUSED_FLAG                                  = 0x00008000,
        ITEM_FLAG3_HIDE_NAME_SUFFIX                             = 0x00010000,
        ITEM_FLAG3_PUSH_LOOT                                    = 0x00020000,
        ITEM_FLAG3_DONT_REPORT_LOOT_LOG_TO_PARTY                = 0x00040000,
        ITEM_FLAG3_ALWAYS_ALLOW_DUAL_WIELD                      = 0x00080000,
        ITEM_FLAG3_OBLITERATABLE                                = 0x00100000,
        ITEM_FLAG3_ACTS_AS_TRANSMOG_HIDDEN_VISUAL_OPTION        = 0x00200000,
        ITEM_FLAG3_EXPIRE_ON_WEEKLY_RESET                       = 0x00400000,
        ITEM_FLAG3_DOESNT_SHOW_UP_IN_TRANSMOG_UNTIL_COLLECTED   = 0x00800000,
        ITEM_FLAG3_CAN_STORE_ENCHANTS                           = 0x01000000
    };

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    class IItemTemplate
    {

    };

}   ///< namespace DBFileClient
}   ///< namespace WoW
}   ///< namespace xyp