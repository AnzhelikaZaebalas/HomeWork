#include <iostream>

// Функция для вывода побитового представления переменной
template <typename T>
void printBits(T value) {
    unsigned char* ptr = reinterpret_cast<unsigned char*>(&value);
    int numBytes = sizeof(T);

    // Вывод побитового представления
    for (int i = numBytes - 1; i >= 0; --i) {
        for (int j = 7; j >= 0; --j) {
            std::cout << ((ptr[i] >> j) & 1);
        }
        std::cout << ' ';
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "rus");
   
    int intValue = 42;
    bool boolValue = true;

    // Вывод адресов памяти каждой переменной
    std::cout << "Адрес int: " << &intValue << std::endl;
    std::cout << "Адрес bool: " << reinterpret_cast<void*>(&boolValue) << std::endl;

    // Вывод побитового представления каждой переменной
    std::cout << "Побитовое представление int: ";
    printBits(intValue);
    std::cout << "Побитовое представление bool: ";
    printBits(boolValue);

    return 0;
}