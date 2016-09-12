#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Base class for Unit & Player
    class IUnit : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IUnit>;

        public:
            /// Constructor
            IUnit(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IUnit() { }

            /// As object
            virtual IObject::Ptr & AsObject() = 0;

            /// Set display ID
            /// @p_DisplayID : Show display ID
            virtual void SetDisplayID(uint32_t p_DisplayID) = 0;
            /// Set native display ID
            /// @p_NativeDisplayID : Native display ID
            virtual void SetNativeDisplayID(uint32_t p_NativeDisplayID) = 0;

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp