#include <iostream>

int main() {
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    if(x % 2 == 0) {
        std::cout << "Even number";
    } else 
        std::cout << "Odd number";

}