#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Conversation object
    class IConversation : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IConversation>;

        public:
            /// Constructor
            IConversation(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IConversation() { }
    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp