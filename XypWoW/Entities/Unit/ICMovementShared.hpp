#pragma once

#include "../../SmartPtr.hpp"
#include "../../Interface.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Unit motion master
    class ICMovementShared : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<ICMovementShared>;

        public:
            /// Constructor
            ICMovementShared(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~ICMovementShared() { }

            /// Set position
            /// @p_X : New x position
            /// @p_Y : New y position
            /// @p_Z : New z position
            virtual void SetPosition(float p_X, float p_Y, float p_Z) = 0;
            /// Make unit stop falling
            virtual void StopFalling() const = 0;

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp