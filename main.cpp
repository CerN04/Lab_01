#include <iostream>
#include <string>
#include "swap_a_b.h"

int main() {
    std::string input_string;
    std::getline(std::cin, input_string);
    bool ok = swap_a_b(input_string);
    if (!ok) {
        return 1;
    } else {
        std::cout << input_string << std::endl;
        return 0;
    }
}