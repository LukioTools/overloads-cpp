#pragma once

#include <ostream>
#include <functional>


template<class ret, class ...args>
std::ostream& operator<<(std::ostream& os, const std::function<ret(args...)>& fn){
    if(!fn) return  os << "nullfunc";
    os << typeid(ret).name() << "(";
    std::size_t n{0};
    ((os << typeid(args).name() << (++n != sizeof...(args) ? ", " : "")), ...);
    os << ")";
    return os;
}


template<class ret, class ...args>
std::wostream& operator<<(std::wostream& os, const std::function<ret(args...)>& fn){
    if(!fn) return  os << L"nullfunc";
    os << typeid(ret).name() << L"(";
    std::size_t n{0};
    ((os << typeid(args).name() << (++n != sizeof...(args) ? L", " : L"")), ...);
    os << L")";
    return os;
}



