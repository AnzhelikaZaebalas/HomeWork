#include <iostream>

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int number;
    std::cout << "Enter a number, please: ";
    std::cin >> number;

    int setBits = countSetBits(number);
    std::cout << "Number of set bits: " << setBits << std::endl;

    return 0;
}