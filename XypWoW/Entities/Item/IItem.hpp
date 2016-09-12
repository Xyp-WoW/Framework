#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Item object
    class IItem : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IItem>;

        public:
            /// Constructor
            IItem(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IItem() { }

            /// As object
            virtual IObject::Ptr & AsObject() = 0;
    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp