#pragma once

#include "IPlayer.hpp"
#include "../Container/IContainer.hpp"
#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Bag slot enum
    enum class BagSlot
    {
        Slot2 = 0,
        Slot3,
        Slot4,
        Slot5
    };

    /// Self Player class
    class ISelfPlayer : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<ISelfPlayer>;

        public:
            /// Constructor
            ISelfPlayer(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~ISelfPlayer() { }

            /// As object
            virtual IObject::Ptr & AsObject() const = 0;

        /// Spells
        public:
            /// Is on spell cooldown
            /// @p_SpellID : Spell ID
            virtual bool HasCooldown(uint32_t p_SpellID) = 0;
            /// Cast spell by ID
            /// @p_SpellID      : Spell ID to cast
            /// @p_TargetGuid   : Optional target GUID
            virtual void CastSpellByID(uint32_t p_SpellID, IGuid::Ptr & p_TargetGuid = IGuid::Ptr(nullptr)) = 0;

            /// Update the last hardware action tickcount, which reset the AFK timer
            virtual void UpdateLastHardwareAction() = 0;

        /// Items
        public:
            /// Get current backpack slot count
            virtual uint32_t GetBackPackSlotCount() const = 0;
            /// Get current backpack item count
            virtual uint32_t GetBackPackItemCount() const = 0;
            /// Get backpack free item slots
            virtual uint32_t GetBackPagFreeSlots() const = 0;
            /// Enumerate Items
            /// @p_Callback : Object callback
            /// @p_UserData : User data for the callback
            virtual void EnumerateBackPackItems(IContainer::EnumerateItemCallback p_Callback, void * p_UserData) = 0;

            /// Get total item slot count
            virtual uint32_t GetBagsSlotCount() const = 0;
            /// Get current item count
            virtual uint32_t GetBagsItemCount() const = 0;
            /// Get free item slots
            virtual uint32_t GetBagsFreeSlots() const = 0;
            /// Get bag by index
            /// @p_Slot : Bag slot
            virtual IContainer::Ptr GetBag(BagSlot p_Bag) const = 0;
            /// Enumerate Items
            /// @p_Callback : Object callback
            /// @p_UserData : User data for the callback
            virtual void EnumerateBagsItems(IContainer::EnumerateItemCallback p_Callback, void * p_UserData) = 0;

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp