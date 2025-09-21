#include <string>
#include <iostream>
#include "swap_a_b.h"

bool swap_a_b(std::string& string) {
    if (string.empty()) {
        std::cerr << "Error: input string empty!" << std::endl;
        return false;
    }
    if (string.find_first_not_of("abc") != std::string::npos) {
        std::cerr << "Error: the input string must consist only of the characters 'a', 'b', 'c'!" << std::endl;
        return false;
    }  
    for (char& symbol : string) {
        if (symbol == 'a') {
            symbol = 'b';
        } else if (symbol == 'b') {
            symbol = 'a';
        }
    }
    return true;
}