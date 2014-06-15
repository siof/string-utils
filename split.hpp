/*
*      "THE BEER-WARE LICENSE" (Revision 42):
*      Siof <siof@siof.pl> wrote this file. As long as you retain this notice you
*      can do whatever you want with this stuff. If we meet some day, and you think
*      this stuff is worth it, you can buy me a beer in return.
*
*      File:       split.hpp
*      Author:     siof@siof.pl
*      Date:       15/06/2014
*/

#ifndef SIOF_STRING_UTILS_SPLIT
#define SIOF_STRING_UTILS_SPLIT

#include <string>
#include <sstream>
#include <vector>

namespace siof
{
    namespace utils
    {
        template<class T>
        static inline std::vector<std::basic_string<T> > && split(const std::basic_string<T> & str, T delim = '\n')
        {
            std::vector<basic_string<T> > splitted;
            std::basic_stringstream<T> ss(str);
            std::basic_string<T> tmpStr;

            while (std::getline(ss, tmpStr, delim))
                splitted.push_back(tmpStr);

            return splitted;
        }

        template<class T>
        static inline void trim(const std::basic_string<T> & str, std::vector<std::basic_string<T>> & dest, T delim = '\n')
        {
            dest = split(str, delim);
        }
    }
}

#endif // SIOF_STRING_UTILS_SPLIT
