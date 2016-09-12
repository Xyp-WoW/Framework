#pragma once

#include <stdint.h>

namespace xyp { namespace WoW { namespace DBFileClient {

    enum class ItemClass
    {
        ITEM_CLASS_CONSUMABLE                       = 0,
        ITEM_CLASS_CONTAINER                        = 1,
        ITEM_CLASS_WEAPON                           = 2,
        ITEM_CLASS_GEM                              = 3,
        ITEM_CLASS_ARMOR                            = 4,
        ITEM_CLASS_REAGENT                          = 5,
        ITEM_CLASS_PROJECTILE                       = 6,
        ITEM_CLASS_TRADE_GOODS                      = 7,
        ITEM_CLASS_ITEM_ENHANCEMENT                 = 8,
        ITEM_CLASS_RECIPE                           = 9,
        ITEM_CLASS_MONEY                            = 10, // OBSOLETE
        ITEM_CLASS_QUIVER                           = 11,
        ITEM_CLASS_QUEST                            = 12,
        ITEM_CLASS_KEY                              = 13,
        ITEM_CLASS_PERMANENT                        = 14, // OBSOLETE
        ITEM_CLASS_MISCELLANEOUS                    = 15,
        ITEM_CLASS_GLYPH                            = 16,
        ITEM_CLASS_BATTLE_PET                       = 17,
        ITEM_CLASS_WOW_TOKEN                        = 18  ///< WoW Token system
    };

    enum class ItemSubclassConsumable
    {
        ITEM_SUBCLASS_CONSUMABLE                    = 0,
        ITEM_SUBCLASS_POTION                        = 1,
        ITEM_SUBCLASS_ELIXIR                        = 2,
        ITEM_SUBCLASS_FLASK                         = 3,
        ITEM_SUBCLASS_SCROLL                        = 4,
        ITEM_SUBCLASS_FOOD_DRINK                    = 5,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT              = 6,
        ITEM_SUBCLASS_BANDAGE                       = 7,
        ITEM_SUBCLASS_CONSUMABLE_OTHER              = 8,
        ITEM_SUBCLASS_VANTUS_RUNE                   = 9
    };

    enum class ItemSubclassContainer
    {
        ITEM_SUBCLASS_CONTAINER                     = 0,
        ITEM_SUBCLASS_SOUL_CONTAINER                = 1,
        ITEM_SUBCLASS_HERB_CONTAINER                = 2,
        ITEM_SUBCLASS_ENCHANTING_CONTAINER          = 3,
        ITEM_SUBCLASS_ENGINEERING_CONTAINER         = 4,
        ITEM_SUBCLASS_GEM_CONTAINER                 = 5,
        ITEM_SUBCLASS_MINING_CONTAINER              = 6,
        ITEM_SUBCLASS_LEATHERWORKING_CONTAINER      = 7,
        ITEM_SUBCLASS_INSCRIPTION_CONTAINER         = 8,
        ITEM_SUBCLASS_TACKLE_CONTAINER              = 9,
        ITEM_SUBCLASS_COOKING_CONTAINER             = 10,
        ITEM_SUBCLASS_OTHER_CONTAINER               = 11,
        ITEM_SUBCLASS_ENCHANTING_CONTAINER_2        = 12,
        ITEM_SUBCLASS_MATERIALS_CONTAINER           = 13,
        ITEM_SUBCLASS_ITEM_ENCHANTMENT_CONTAINER    = 14,
        ITEM_SUBCLASS_WEAPON_ENCHANTMENT_CONTAINER  = 15
    };

    enum class ItemSubclassWeapon
    {
        ITEM_SUBCLASS_WEAPON_AXE                    = 0,  // One-Handed Axes
        ITEM_SUBCLASS_WEAPON_AXE2                   = 1,  // Two-Handed Axes
        ITEM_SUBCLASS_WEAPON_BOW                    = 2,
        ITEM_SUBCLASS_WEAPON_GUN                    = 3,
        ITEM_SUBCLASS_WEAPON_MACE                   = 4,  // One-Handed Maces
        ITEM_SUBCLASS_WEAPON_MACE2                  = 5,  // Two-Handed Maces
        ITEM_SUBCLASS_WEAPON_POLEARM                = 6,
        ITEM_SUBCLASS_WEAPON_SWORD                  = 7,  // One-Handed Swords
        ITEM_SUBCLASS_WEAPON_SWORD2                 = 8,  // Two-Handed Swords
        ITEM_SUBCLASS_WEAPON_WARGLAIVES             = 9,  // One-Handed WarGlaive
        ITEM_SUBCLASS_WEAPON_STAFF                  = 10,
        ITEM_SUBCLASS_WEAPON_EXOTIC                 = 11, // One-Handed Exotics
        ITEM_SUBCLASS_WEAPON_EXOTIC2                = 12, // Two-Handed Exotics
        ITEM_SUBCLASS_WEAPON_FIST_WEAPON            = 13,
        ITEM_SUBCLASS_WEAPON_MISCELLANEOUS          = 14,
        ITEM_SUBCLASS_WEAPON_DAGGER                 = 15,
        ITEM_SUBCLASS_WEAPON_THROWN                 = 16,
        ITEM_SUBCLASS_WEAPON_SPEAR                  = 17,
        ITEM_SUBCLASS_WEAPON_CROSSBOW               = 18,
        ITEM_SUBCLASS_WEAPON_WAND                   = 19,
        ITEM_SUBCLASS_WEAPON_FISHING_POLE           = 20
    };

    enum class ItemSubclassGem
    {
        ITEM_SUBCLASS_GEM_INTELLECT                 = 0,
        ITEM_SUBCLASS_GEM_AGILITY                   = 1,
        ITEM_SUBCLASS_GEM_STRENGTH                  = 2,
        ITEM_SUBCLASS_GEM_STAMINA                   = 3,
        ITEM_SUBCLASS_GEM_SPIRIT                    = 4,
        ITEM_SUBCLASS_GEM_CRITICAL_STRIKE           = 5,
        ITEM_SUBCLASS_GEM_MASTERY                   = 6,
        ITEM_SUBCLASS_GEM_HASTE                     = 7,
        ITEM_SUBCLASS_GEM_VERSATILITY               = 8,
        ITEM_SUBCLASS_GEM_OTHER                     = 9,
        ITEM_SUBCLASS_GEM_MULTIPLE_STATS            = 10,
        ITEM_SUBCLASS_GEM_ARTIFACT_RELIC            = 11
    };

    enum class ItemSubclassArmor
    {
        ITEM_SUBCLASS_ARMOR_MISCELLANEOUS           = 0,
        ITEM_SUBCLASS_ARMOR_CLOTH                   = 1,
        ITEM_SUBCLASS_ARMOR_LEATHER                 = 2,
        ITEM_SUBCLASS_ARMOR_MAIL                    = 3,
        ITEM_SUBCLASS_ARMOR_PLATE                   = 4,
        ITEM_SUBCLASS_ARMOR_COSMETIC                = 5, // New 5.4 (old : BUCKLER)
        ITEM_SUBCLASS_ARMOR_SHIELD                  = 6,
        ITEM_SUBCLASS_ARMOR_LIBRAM                  = 7,
        ITEM_SUBCLASS_ARMOR_IDOL                    = 8,
        ITEM_SUBCLASS_ARMOR_TOTEM                   = 9,
        ITEM_SUBCLASS_ARMOR_SIGIL                   = 10,
        ITEM_SUBCLASS_ARMOR_RELIC                   = 11,
    };

    enum class ItemSubclassReagent
    {
        ITEM_SUBCLASS_REAGENT                       = 0,
        ITEM_SUBCLASS_KEYSTONE                      = 1
    };

    enum class ItemSubclassProjectile
    {
        ITEM_SUBCLASS_WAND                          = 0, // OBSOLETE
        ITEM_SUBCLASS_BOLT                          = 1, // OBSOLETE
        ITEM_SUBCLASS_ARROW                         = 2,
        ITEM_SUBCLASS_BULLET                        = 3,
        ITEM_SUBCLASS_THROWN                        = 4  // OBSOLETE
    };

    enum class ItemSubclassTradeGoods
    {
        ITEM_SUBCLASS_TRADE_GOODS                   = 0,
        ITEM_SUBCLASS_PARTS                         = 1,
        ITEM_SUBCLASS_EXPLOSIVES                    = 2,
        ITEM_SUBCLASS_DEVICES                       = 3,
        ITEM_SUBCLASS_JEWELCRAFTING                 = 4,
        ITEM_SUBCLASS_CLOTH                         = 5,
        ITEM_SUBCLASS_LEATHER                       = 6,
        ITEM_SUBCLASS_METAL_STONE                   = 7,
        ITEM_SUBCLASS_MEAT                          = 8,
        ITEM_SUBCLASS_HERB                          = 9,
        ITEM_SUBCLASS_ELEMENTAL                     = 10,
        ITEM_SUBCLASS_TRADE_GOODS_OTHER             = 11,
        ITEM_SUBCLASS_ENCHANTING                    = 12,
        ITEM_SUBCLASS_MATERIAL                      = 13,
        ITEM_SUBCLASS_ENCHANTMENT                   = 14,
        ITEM_SUBCLASS_WEAPON_ENCHANTMENT            = 15,
        ITEM_SUBCLASS_INSCRIPTION                   = 16,
        ITEM_SUBCLASS_EXPLOSIVES_DEVICES            = 17
    };

    enum class ItemSubclassItemEnhancement
    {
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_HEAD                 = 0,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_NECK                 = 1,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_SHOULDER             = 2,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_CLOAK                = 3,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_CHEST                = 4,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_WRIST                = 5,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_HANDS                = 6,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_WAIST                = 7,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_LEGS                 = 8,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_FEET                 = 9,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_FINGER               = 10,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_WEAPON               = 11,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_TWO_HANDED_WEAPON    = 12,
        ITEM_SUBCLASS_ITEM_ENHANCEMENT_SHIELD_OFF_HAND      = 13
    };

    enum class ItemSubclassRecipe
    {
        ITEM_SUBCLASS_BOOK                          = 0,
        ITEM_SUBCLASS_LEATHERWORKING_PATTERN        = 1,
        ITEM_SUBCLASS_TAILORING_PATTERN             = 2,
        ITEM_SUBCLASS_ENGINEERING_SCHEMATIC         = 3,
        ITEM_SUBCLASS_BLACKSMITHING                 = 4,
        ITEM_SUBCLASS_COOKING_RECIPE                = 5,
        ITEM_SUBCLASS_ALCHEMY_RECIPE                = 6,
        ITEM_SUBCLASS_FIRST_AID_MANUAL              = 7,
        ITEM_SUBCLASS_ENCHANTING_FORMULA            = 8,
        ITEM_SUBCLASS_FISHING_MANUAL                = 9,
        ITEM_SUBCLASS_JEWELCRAFTING_RECIPE          = 10,
        ITEM_SUBCLASS_INSCRIPTION_TECHNIQUE         = 11
    };

    enum class ItemSubclassMoney
    {
        ITEM_SUBCLASS_MONEY                          = 0
    };

    enum class ItemSubclassQuiver
    {
        ITEM_SUBCLASS_QUIVER0                       = 0,
        ITEM_SUBCLASS_QUIVER1                       = 1,
        ITEM_SUBCLASS_QUIVER                        = 2,
        ITEM_SUBCLASS_AMMO_POUCH                    = 3
    };

    enum class ItemSubclassQuest
    {
        ITEM_SUBCLASS_QUEST                         = 0,
        ITEM_SUBCLASS_QUEST_UNK3                    = 3,
        ITEM_SUBCLASS_QUEST_UNK8                    = 8
    };

    enum class ItemSubclassKey
    {
        ITEM_SUBCLASS_KEY                           = 0,
        ITEM_SUBCLASS_LOCKPICK                      = 1
    };

    enum class ItemSubclassPermanent
    {
        ITEM_SUBCLASS_PERMANENT                     = 0
    };

    enum class ItemSubclassMiscellaneous
    {
        ITEM_SUBCLASS_MISCELLANEOUS_JUNK            = 0,
        ITEM_SUBCLASS_MISCELLANEOUS_REAGENT         = 1,
        ITEM_SUBCLASS_MISCELLANEOUS_COMPANION_PET   = 2,
        ITEM_SUBCLASS_MISCELLANEOUS_HOLIDAY         = 3,
        ITEM_SUBCLASS_MISCELLANEOUS_OTHER           = 4,
        ITEM_SUBCLASS_MISCELLANEOUS_MOUNT           = 5
    };

    enum class ItemSubclassGlyph
    {
        ITEM_SUBCLASS_GLYPH_WARRIOR                 = 1,
        ITEM_SUBCLASS_GLYPH_PALADIN                 = 2,
        ITEM_SUBCLASS_GLYPH_HUNTER                  = 3,
        ITEM_SUBCLASS_GLYPH_ROGUE                   = 4,
        ITEM_SUBCLASS_GLYPH_PRIEST                  = 5,
        ITEM_SUBCLASS_GLYPH_DEATH_KNIGHT            = 6,
        ITEM_SUBCLASS_GLYPH_SHAMAN                  = 7,
        ITEM_SUBCLASS_GLYPH_MAGE                    = 8,
        ITEM_SUBCLASS_GLYPH_WARLOCK                 = 9,
        ITEM_SUBCLASS_GLYPH_MONK                    = 10,
        ITEM_SUBCLASS_GLYPH_DRUID                   = 11,
        ITEM_SUBCLASS_GLYPH_DEMON_HUNTER            = 12
    };

    enum class ItemSubclassBattlePet
    {
        ITEM_SUBCLASS_BATTLE_PET_AQUATIC            = 1,
        ITEM_SUBCLASS_BATTLE_PET_BEAST              = 2,
        ITEM_SUBCLASS_BATTLE_PET_CRITTER            = 3,
        ITEM_SUBCLASS_BATTLE_PET_DRAGONKIN          = 4,
        ITEM_SUBCLASS_BATTLE_PET_ELEMENTAL          = 5,
        ITEM_SUBCLASS_BATTLE_PET_FLYING             = 6,
        ITEM_SUBCLASS_BATTLE_PET_HUMANOID           = 7,
        ITEM_SUBCLASS_BATTLE_PET_MAGICAL            = 8,
        ITEM_SUBCLASS_BATTLE_PET_MECHANICAL         = 9,
        ITEM_SUBCLASS_BATTLE_PET_UNDEAD             = 10
    };

    enum class ItemSubclassWowToken
    {
        ITEM_SUBCLASS_WOW_TOKEN                     = 1
    };

    enum class InventoryType
    {
        INVTYPE_NON_EQUIP                           = 0,
        INVTYPE_HEAD                                = 1,
        INVTYPE_NECK                                = 2,
        INVTYPE_SHOULDERS                           = 3,
        INVTYPE_BODY                                = 4,
        INVTYPE_CHEST                               = 5,
        INVTYPE_WAIST                               = 6,
        INVTYPE_LEGS                                = 7,
        INVTYPE_FEET                                = 8,
        INVTYPE_WRISTS                              = 9,
        INVTYPE_HANDS                               = 10,
        INVTYPE_FINGER                              = 11,
        INVTYPE_TRINKET                             = 12,
        INVTYPE_WEAPON                              = 13,
        INVTYPE_SHIELD                              = 14,
        INVTYPE_RANGED                              = 15,
        INVTYPE_CLOAK                               = 16,
        INVTYPE_2HWEAPON                            = 17,
        INVTYPE_BAG                                 = 18,
        INVTYPE_TABARD                              = 19,
        INVTYPE_ROBE                                = 20,
        INVTYPE_WEAPONMAINHAND                      = 21,
        INVTYPE_WEAPONOFFHAND                       = 22,
        INVTYPE_HOLDABLE                            = 23,
        INVTYPE_AMMO                                = 24,
        INVTYPE_THROWN                              = 25,
        INVTYPE_RANGEDRIGHT                         = 26,
        INVTYPE_QUIVER                              = 27,
        INVTYPE_RELIC                               = 28,
    };

    namespace ItemFlags
    {
        enum : uint32_t
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
    }

    namespace ItemFlags2
    {
        enum : uint32_t
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
    }

    namespace ItemFlags3
    {
        enum : uint32_t
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
    }

    enum class ItemBondingType
    {
        BIND_NONE                                   = 0,
        BIND_ON_ACQUIRE                             = 1,
        BIND_ON_EQUIP                               = 2,
        BIND_ON_USE                                 = 3,
        BIND_QUEST                                  = 4
    };

}   ///< namespace DBFileClient
}   ///< namespace WoW
}   ///< namespace xyp