#pragma once

#include <cstdint>

namespace xyp { namespace WoW {

    template<class T> class SmartPtr
    {
        struct SmartPtrInternal
        {
            uint32_t ReferenceCount;
            T* Instance;
        };

        public:
            explicit SmartPtr()
            {
                m_Internal = new SmartPtrInternal();
                m_Internal->ReferenceCount  = 1;
                m_Internal->Instance        = nullptr;
            }
            explicit SmartPtr(T* p_Object)
            {
                m_Internal = new SmartPtrInternal();
                m_Internal->ReferenceCount  = 1;
                m_Internal->Instance        = p_Object;
            }
            SmartPtr(const SmartPtr<T>& p_Other)
            {
                m_Internal = p_Other.m_Internal;
                m_Internal->ReferenceCount++;
            }
            ~SmartPtr()
            {
                ClearRef();
            }

            SmartPtr<T>& operator=(const SmartPtr<T>& p_Other)
            {
                if (this != &p_Other)
                {
                    ClearRef();

                    m_Internal = p_Other.m_Internal;
                    m_Internal->ReferenceCount++;
                }

                return *this;
            }

            operator bool() const
            {
                return m_Internal && m_Internal->Instance != nullptr;
            }

            T* operator->()
            {
                return m_Internal->Instance;
            }
            T* operator*()
            {
                return m_Internal->Instance;
            }
            const T* operator->() const
            {
                return m_Internal->Instance;
            }

        private:
            void ClearRef()
            {
                if (!m_Internal)
                    return;

                m_Internal->ReferenceCount--;

                if (!m_Internal->ReferenceCount)
                {
                    if (m_Internal->Instance)
                        delete m_Internal->Instance;

                    delete m_Internal;
                    m_Internal = nullptr;
                }
            }

        private:
            SmartPtrInternal * m_Internal;

    };

}   ///< namespace WoW
}   ///< namespace xyp