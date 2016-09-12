#pragma once
#include <cstdint>

namespace xyp { namespace WoW {

    /// Generic interface base class
    class Interface
    {
        public:
            /// Constructor
            /// @p_Object : Object address
            Interface(uintptr_t p_Object)
                : m_ObjectPointer(p_Object)
            {

            }

            /// Get raw pointer
            uintptr_t GetPointer() const { return m_ObjectPointer; }

            /// Get object as
            template<class T> T& GetAs() const
            {
                return *reinterpret_cast<T*>(m_ObjectPointer);
            }

        private:
            /// Memory address of the object
            uintptr_t m_ObjectPointer;

    };

}   ///< namespace WoW
}   ///< namespace xyp