#pragma once


#include <ostream>
#include <utility>



template<class K, class T>
std::ostream& operator<<(std::ostream& os, const std::pair<K,T>& v){
    os << v.first << ": " << v.second;
    return  os;
}

template<class K, class T>
std::wostream& operator<<(std::wostream& os, const std::pair<K,T>& v){
    os << v.first << L": " << v.second;
    return  os;
}
