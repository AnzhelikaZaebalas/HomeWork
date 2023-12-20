#include <iostream>

template <typename T>
void printBits(T value) {
    unsigned char* ptr = reinterpret_cast<unsigned char*>(&value);
    int numBytes = sizeof(T);

    for (int i = numBytes - 1; i >= 0; --i) {
        for (int j = 7; j >= 0; --j) {
            std::cout << ((ptr[i] >> j) & 1);
        }
        std::cout << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int intValue = 42;
    bool boolValue = true;

    std::cout << "Адрес int: " << &intValue << std::endl;
    std::cout << "Адрес bool: " << reinterpret_cast<void*>(&boolValue) << std::endl;

    std::cout << "Побитовое представление int: ";
    printBits(intValue);
    std::cout << "Побитовое представление bool: ";
    printBits(boolValue);

    return 0;
}