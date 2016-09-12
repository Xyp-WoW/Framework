#pragma once

#include "SmartPtr.hpp"

namespace xyp { namespace WoW {

    /// High Guid type
    enum class HighGuid
    {
        Null             = 0,
        Uniq             = 1,
        Player           = 2,
        Item             = 3,
        WorldTransaction = 4,
        StaticDoor       = 5,
        Transport        = 6,
        Conversation     = 7,
        Creature         = 8,
        Vehicle          = 9,
        Pet              = 10,
        GameObject       = 11,
        DynamicObject    = 12,
        AreaTrigger      = 13,
        Corpse           = 14,
        LootObject       = 15,
        SceneObject      = 16,
        Scenario         = 17,
        AIGroup          = 18,
        DynamicDoor      = 19,
        ClientActor      = 20,
        Vignette         = 21,
        CallForHelp      = 22,
        AIResource       = 23,
        AILock           = 24,
        AILockTicket     = 25,
        ChatChannel      = 26,
        Party            = 27,
        Guild            = 28,
        WowAccount       = 29,
        BNetAccount      = 30,
        GMTask           = 31,
        MobileSession    = 32,
        RaidGroup        = 33,
        Spell            = 34,
        Mail             = 35,
        WebObj           = 36,
        LFGObject        = 37,
        LFGList          = 38,
        UserRouter       = 39,
        PVPQueueGroup    = 40,
        UserClient       = 41,
        PetBattle        = 42,
        UniqUserClient   = 43,
        BattlePet        = 44,
        CommerceObj      = 45,
        ClientSession    = 46,
        Cast             = 47,

        Count,
    };

    /// Object Guid helper class
    class IGuid
    {
        public:
            /// Smart pointer type
            using Ptr = SmartPtr<IGuid>;

        public:
            /// Destructor
            virtual ~IGuid() { }

            /// Get this Guid high raw part
            virtual uint64_t GetHighPart() const = 0;
            /// Get this Guid low raw part
            virtual uint64_t GetLowPart() const = 0;

            /// Get Guid type
            virtual HighGuid GetHigh() const = 0;
            /// Get realm id
            virtual uint32_t GetRealmID() const = 0;
            /// Get map id
            virtual uint32_t GetMapID() const = 0;
            /// Get associated object entry
            virtual uint32_t GetEntry() const = 0;
            /// Get Guid counter value
            virtual uint64_t GetCounter() const = 0;

            /// Is this Guid empty ?
            virtual bool IsEmpty() const = 0;

            /// Is this Guid should have an entry value (based on HighGuid type)
            virtual bool HasEntry() const = 0;

        /// Helpers
        public:
            /// bool cast operator, validity check
            bool operator!() const
            {
                return IsEmpty();
            }
            /// Is this Guid equal to an another Guid
            /// @p_Guid : Other Guid to compare with
            bool operator== (IGuid const& p_Guid) const
            {
                return GetLowPart() == p_Guid.GetLowPart() && GetHighPart() == p_Guid.GetHighPart();
            }
            /// Is this Guid different to an another one
            /// @p_Guid : Other Guid to compare with
            bool operator!= (IGuid const& p_Guid) const
            {
                return !(*this == p_Guid);
            }
            /// Is this Guid inferior to an another one
            /// @p_Guid : Other Guid to compare with
            bool operator< (IGuid const& p_Guid) const
            {
                if (GetHighPart() < p_Guid.GetHighPart())
                    return true;
                else if (GetHighPart() > p_Guid.GetHighPart())
                    return false;

                return GetLowPart() < p_Guid.GetLowPart();
            }

    };

}   ///< namespace WoW
}   ///< namespace xyp