#pragma once


#include <ostream>
#include <vector>

template<class T>
inline static std::ostream& operator<<(std::ostream& os, const std::vector<T>& v){
    os << "[ ";
    std::size_t i = 0;
    do{
        os << v[i];
        i++;
        if(i >= v.size())break;
        os << ", ";
    }while (true);
    return os << "] ";
}


template<class T>
inline static std::wostream& operator<<(std::wostream& os, const std::vector<T>& v){
    os << L"[ ";
    std::size_t i = 0;
    do{
        os << v[i];
        i++;
        if(i >= v.size())break;
        os << L", ";
    }while (true);
    return os << L"] ";
}
