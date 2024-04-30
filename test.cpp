
#include "span.hpp"
#include <initializer_list>
#include <iostream>
#include <vector>

int main(int argc, const char* argv[]){

    std::string s1 = "std::string";
    std::wstring s2 = L"std::wstring";
    std::vector<int> v1;

    std::cout << s1 << std::endl;
    std::wcout << s2 << std::endl;

    std::cout << std::span(v1) << std::endl;
    std::wcout << std::span(v1) << std::endl;


    return 0;
}