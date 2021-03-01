#include <iostream>
#include "is_odd.hpp"

int main() {
    int number = 0;
    std::cin >> number;
    
    std::cout << (is_odd(number) ? "ODD" : "EVEN") << "\n";
}
