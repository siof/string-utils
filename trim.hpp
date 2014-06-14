#ifndef SIOF_STRING_UTILS_TRIM
#define SIOF_STRING_UTILS_TRIM

#include <string>

namespace siof
{
    template<class T>
    static inline std::basic_string<T>& trim(const std::basic_string<T> & str)
    {
        size_t first = str.find_first_not_of(' ');
        size_t last = str.find_last_not_of(' ');
        return str.substr(first, last - first + 1);
    }

    template<class T>
    static inline void trim(std::basic_string<T> & str)
    {
        str = trim(const_cast<const std::basic_string<T>& >(str));
    }
}

#endif // SIOF_STRING_UTILS_TRIM
