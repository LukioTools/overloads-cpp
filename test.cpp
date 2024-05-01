
#include "bool.hpp"
#include <iostream>
#include <vector>

int main(int argc, const char* argv[]){

    std::cout << btos(true) << std::endl;
        std::cout << btos(false) << std::endl;
    std::wcout << btows(true) << std::endl;
        std::wcout << btows(false) << std::endl;

    return 0;
}