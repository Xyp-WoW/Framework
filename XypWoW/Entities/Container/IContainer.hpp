#pragma once

#include "../Item/IItem.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Container object
    class IContainer : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IContainer>;

            /// Callback type
            typedef void(*EnumerateItemCallback)(Entities::IItem::Ptr, void*);

        public:
            /// Constructor
            IContainer(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IContainer() { }

            /// As object
            virtual IObject::Ptr & AsObject() = 0;

            /// Get container capacity
            virtual uint32_t GetNumSlots() const = 0;
            /// Get current item count
            virtual uint32_t GetItemCount() const = 0;
            /// Get free item slots
            virtual uint32_t GetFreeSlots() const = 0;
            /// Enumerate Items
            /// @p_Callback : Object callback
            /// @p_UserData : User data for the callback
            virtual void EnumerateItems(EnumerateItemCallback p_Callback, void * p_UserData) = 0;

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp