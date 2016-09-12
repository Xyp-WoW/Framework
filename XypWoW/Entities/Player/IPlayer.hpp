#pragma once

#include "../Unit/IUnit.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Player class
    class IPlayer : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IPlayer>;

        public:
            /// Constructor
            IPlayer(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IPlayer() { }

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp