#pragma once


#include <map>
#include <ostream>

template<class K, class T>
std::ostream& operator<<(std::ostream& os, const std::map<K,T>& v){
    os << "{ ";
    auto it = v.begin();
    auto end = v.end();
    if(it != end)
        while (true) {
            const std::pair<K, T>& p = *it;
            os << p.first << ": " << p.second;
            it++;
            if(it == end)
                break;
            os << ", ";
        }
    return os << " }";
}

template<class K, class T>
std::wostream& operator<<(std::wostream& os, const std::map<K,T>& v){
    os << L"{ ";
    auto it = v.begin();
    auto end = v.end();
    if(it != end)
        while (true) {
            const std::pair<K, T>& p = *it;
            os << p.first << L": " << p.second;
            it++;
            if(it == end)
                break;
            os << L", ";
        }
    return os << L" }";
}
