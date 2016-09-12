#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// AreaTrigger object
    class IAreaTrigger : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IAreaTrigger>;

        public:
            /// Constructor
            IAreaTrigger(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IAreaTrigger() { }
    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp