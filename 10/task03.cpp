#include <iostream>

bool func(int num) {
    return num != 0 && (num & (num - 1)) == 0;
}

int main() {
    int number;
    std::cout << "Enter a number, please: ";
    std::cin >> number;

    if (func(number)) {
        std::cout << "It is a power of two" << std::endl;
    } else {
        std::cout << "It is not a power of two" << std::endl;
    }

    return 0;
}