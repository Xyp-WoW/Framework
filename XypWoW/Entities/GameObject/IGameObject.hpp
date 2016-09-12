#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// GameObject object
    class IGameObject : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IGameObject>;

        public:
            /// Constructor
            IGameObject(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IGameObject() { }
    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp