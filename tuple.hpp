#pragma once


#include <ostream>
#include <tuple>




/*
i hate fucking templates, just give me the runtime forloop please
*/
template<class ...Va>
std::ostream& operator<<(std::ostream& os, const std::tuple<Va...>& v){
    os << "( ";

    std::apply
    ([&os](Va const&... tupleArgs)
        {
            std::size_t n{0};
            ((os << tupleArgs << (++n != sizeof...(Va) ? ", " : "")), ...);
        }, v
    );

    return os << " )";
}


template<class ...Va>
std::wostream& operator<<(std::wostream& os, const std::tuple<Va...>& v){
    os << "( ";

    std::apply
    ([&os](Va const&... tupleArgs)
        {
            std::size_t n{0};
            ((os << tupleArgs << (++n != sizeof...(Va) ? ", " : "")), ...);
        }, v
    );

    return os << " )";
}