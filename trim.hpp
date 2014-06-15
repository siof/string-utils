/*
*      "THE BEER-WARE LICENSE" (Revision 42):
*      Siof <siof@siof.pl> wrote this file. As long as you retain this notice you
*      can do whatever you want with this stuff. If we meet some day, and you think
*      this stuff is worth it, you can buy me a beer in return.
*
*      File:       trim.hpp
*      Author:     siof@siof.pl
*      Date:       15/06/2014
*/

#ifndef SIOF_STRING_UTILS_TRIM
#define SIOF_STRING_UTILS_TRIM

#include <string>

namespace siof
{
    namespace utils
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
}

#endif // SIOF_STRING_UTILS_TRIM
