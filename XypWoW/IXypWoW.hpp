#pragma once

#include "IObjectManager.hpp"
#include "DBFileClient/IDBFileClientManager.hpp"

namespace xyp { namespace WoW {

    /// Main plugin class
    class IXypWoW
    {
        public:
            /// Destructor
            ~IXypWoW() { }

            /// Get object manager
            virtual IObjectManager* GetObjectManager() = 0;
            /// Get DBFileClient Manager
            virtual DBFileClient::IDBFileClientManager * GetDBFileClientManager() = 0;

    };

}   ///< namespace WoW
}   ///< namespace xyp