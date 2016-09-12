#pragma once

#include "IItemTemplate_Enums.hpp"
#include "../SmartPtr.hpp"

namespace xyp { namespace WoW { namespace DBFileClient {

    /// Item template class
    class IItemTemplate
    {
        public:
            /// Destructor
            virtual ~IItemTemplate() { }

        public:
            /// Get item class
            virtual ItemClass GetClass() const = 0;
            /// Get item sub class
            virtual uint32_t GetSubClass() const = 0;
            /// Get item inventory type
            virtual InventoryType GetInventoryType() const = 0;

        public:
            /// Has item flags
            /// @p_Flags : Flags to check
            virtual bool HasItemFlags(uint32_t p_Flags) const = 0;
            /// Has item flags 2
            /// @p_Flags : Flags to check
            virtual bool HasItemFlags2(uint32_t p_Flags) const = 0;
            /// Has item flags 3
            /// @p_Flags : Flags to check
            virtual bool HasItemFlags3(uint32_t p_Flags) const = 0;

            /// Get this item allowed class mask
            virtual uint32_t GetAllowableClassMask() const = 0;
            /// Get this item allowed race mask
            virtual uint32_t GetAllowableRaceMask() const = 0;
            /// Get this item required spell ID
            virtual uint32_t GetRequiredSpellID() const = 0;
            /// Get this item max count in inventory
            virtual uint32_t GetMaxCount() const = 0;
            /// Get this item max stack size
            virtual uint32_t GetMaxStackSize() const = 0;

            /// Get item name
            virtual const char * GetName() const = 0;
            /// Get item description
            virtual const char * GetDescription() const = 0;

        public:
            /// This is item can be equip in combat mode ?
            virtual bool CanBeEquippedInCombat() const = 0;

            /// Is potion item ?
            virtual bool IsPotion() const = 0;
            /// Is vellum item ?
            virtual bool IsVellum() const = 0;
            /// Is consumable item ?
            virtual bool IsConsumable() const = 0;
            /// Is crafting reagent item ?
            virtual bool IsCraftingReagent() const = 0;
            /// Is quest item ?
            virtual bool IsQuestItem() const = 0;
            /// Is bag item
            virtual bool IsBag() const = 0;
            /// Is currency token
            virtual bool IsCurrencyToken() const = 0;

            /// Is weapon item ?
            virtual bool IsWeapon() const = 0;
            /// Is melee weapon item ?
            virtual bool IsMeleedWeapon() const = 0;
            /// Is ranged weapon item ?
            virtual bool IsRangedWeapon() const = 0;
            /// Is one handed weapon item ?
            virtual bool IsOneHanded() const = 0;
            /// Is two handed weapon item ?
            virtual bool IsTwoHandedWeapon() const = 0;


    };

}   ///< namespace DBFileClient
}   ///< namespace WoW
}   ///< namespace xyp