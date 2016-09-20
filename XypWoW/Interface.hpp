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
            template<class T> T GetAs() const
            {
                return reinterpret_cast<T>(m_ObjectPointer);
            }
            /// Get variable
            /// @p_Offset : Variable offset
            template<class T> T& GetVariable(uintptr_t p_Offset) const
            {
                return *reinterpret_cast<T*>(m_ObjectPointer + p_Offset);
            }
            /// Get vTable method
            /// @p_Case : Method index
            template<class T> T GetVTableMethod(uintptr_t p_Case) const
            {
                auto l_vTable = *reinterpret_cast<void***>(m_ObjectPointer);
                return reinterpret_cast<T>(l_vTable[p_Case]);
            }

        private:
            /// Memory address of the object
            uintptr_t m_ObjectPointer;

    };

}   ///< namespace WoW
}   ///< namespace xyp