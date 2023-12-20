#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = num1 & num2;

    std::cout << "Result in binary form: ";
    for (int i = 31; i >= 0; i--) {
        int bit = (result >> i) & 1;
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}