#pragma once

#include <iterator>
#include <ostream>
#include <span>



template<size_t Extent>
std::ostream& operator<<(std::ostream& os, const std::span<char, Extent>& s){
    os.write(s.data(), s.size());
    return os;
}
template<size_t Extent>
std::wostream& operator<<(std::wostream& os, const std::span<wchar_t, Extent>& s){
    os.write(s.data(), s.size());
    return os;
}
template<typename T, size_t Extent>
std::ostream& operator<<(std::ostream& os, const std::span<T, Extent>& s){
    os << "{ ";
    std::size_t i=0;
    if(!s.empty())
        while (true) {
            os << s[i];
            if(++i >= s.size()) break;
            os << ", ";
        }
    return os << " }";
}

template<typename T, size_t Extent>
std::wostream& operator<<(std::wostream& os, const std::span<T, Extent>& s){
    os << L"{ ";
    std::size_t i=0;
    if(!s.empty())
        while (true) {
            os << s[i];
            if(++i >= s.size()) break;
            os << L", ";
        }
    return os << L" }";
}

