#pragma once

#include "../Object/IObject.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Corpse object
    class ICorpse : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<ICorpse>;

        public:
            /// Constructor
            ICorpse(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~ICorpse() { }
    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp