#pragma once

#include "Entities/Object/IObject.hpp"
#include "Entities/Player/ISelfPlayer.hpp"

namespace xyp { namespace WoW {

    /// Client object manager
    class IObjectManager
    {
        public:
            /// Callback type
            typedef void(*EnumerateCallback)(Entities::IObject::Ptr, void*);

        public:
            /// Destructor
            virtual ~IObjectManager() { }

            /// Get self player instance
            virtual Entities::ISelfPlayer::Ptr GetSelfPlayer() const = 0;

            /// Get object by his Guid
            /// @p_Guid : Object Guid
            virtual Entities::IObject::Ptr GetObjectByGuid(const IGuid::Ptr& p_Guid) const = 0;

            /// Enumerate objects
            /// @p_Callback : Object callback
            /// @p_UserData : User data for the callback
            virtual void EnumerateObjects(EnumerateCallback p_Callback, void * p_UserData) = 0;
            /// Enumerate objects by type
            /// @p_Callback : Object callback
            /// @p_UserData : User data for the callback
            virtual void EnumerateObjects(Entities::ObjectType p_Type, EnumerateCallback p_Callback, void * p_UserData) = 0;

    };

}   ///< namespace WoW
}   ///< namespace xyp