#pragma once

#include "../../SmartPtr.hpp"
#include "../../IGuid.hpp"
#include "../../Interface.hpp"

namespace xyp { namespace WoW { namespace Entities {

    /// Object type list
    enum class ObjectType
    {
        TYPE_OBJECT        = 0,
        TYPE_ITEM          = 1,
        TYPE_CONTAINER     = 2,
        TYPE_UNIT          = 3,
        TYPE_PLAYER        = 4,
        TYPE_GAMEOBJECT    = 5,
        TYPE_DYNAMICOBJECT = 6,
        TYPE_CORPSE        = 7,
        TYPE_AREATRIGGER   = 8,
        TYPE_SCENEOBJECT   = 9,
        TYPE_CONVERSATION  = 10
    };

    class IAreaTrigger;
    class IContainer;
    class IConversation;
    class ICorpse;
    class IGameObject;
    class IItem;
    class IPlayer;
    class ISelfPlayer;
    class IUnit;

    /// WoW world base object
    class IObject : public Interface
    {
        public:
            /// Shared pointer type
            using Ptr = SmartPtr<IObject>;

        public:
            /// Constructor
            IObject(uintptr_t p_Addr)
                : Interface(p_Addr)
            {

            }
            /// Destructor
            virtual ~IObject() { }

        public:
            /// Get as IAreaTrigger
            virtual SmartPtr<IAreaTrigger>  & AsAreaTrigger()  = 0;
            /// Get as IContainer
            virtual SmartPtr<IContainer>    & AsContainer()    = 0;
            /// Get as IConversation
            virtual SmartPtr<IConversation> & AsConversation() = 0;
            /// Get as ICorpse
            virtual SmartPtr<ICorpse>       & AsCorpse()       = 0;
            /// Get as IGameObject
            virtual SmartPtr<IGameObject>   & AsGameObject()   = 0;
            /// Get as IItem
            virtual SmartPtr<IItem>         & AsItem()         = 0;
            /// Get as IPlayer
            virtual SmartPtr<IPlayer>       & AsPlayer()       = 0;
            /// Get as ISelfPlayer
            virtual SmartPtr<ISelfPlayer>   & AsSelfPlayer()   = 0;
            /// Get as IUnit
            virtual SmartPtr<IUnit>         & AsUnit()         = 0;

            /// Get update field address
            /// @p_Field : Field index
            virtual uintptr_t GetUpdateFieldAddress(uint32_t p_Field) const = 0;
            /// Get update field
            /// @p_Index : Field index
            template<typename T> T GetUpdateField(uint32_t p_Index) const
            {
                return *reinterpret_cast<T*>(GetUpdateFieldAddress(p_Index));
            }
            /// Set update field
            /// @p_Index : Field index
            /// @p_Value : New field value
            template<typename T> void SetUpdateField(uint32_t p_Index, T p_Value)
            {
                uintptr_t l_StorageField = GetUpdateFieldAddress(p_Index);

                if (l_StorageField)
                    *reinterpret_cast<T*>(l_StorageField) = p_Value;
            }

            /// Get this object GUID
            virtual IGuid::Ptr const GetGUID() const = 0;
            /// Get object type
            virtual ObjectType GetType() const = 0;
            /// Get entry
            virtual uint32_t GetEntry() const = 0;
            /// Get Name
            virtual const char* GetName() const = 0;

            /// Is object locked
            virtual bool IsLocked() const = 0;

            /// Interact with this object
            virtual void Interact() const = 0;

    };

}   ///< namespace Entities
}   ///< namespace WoW
}   ///< namespace xyp