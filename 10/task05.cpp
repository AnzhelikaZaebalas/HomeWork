#include <iostream>

void swapValues(int a, int b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    int a, b;
    std::cout << "Введите значение переменной a: ";
    std::cin >> a;
    std::cout << "Введите значение переменной b: ";
    std::cin >> b;

    swapValues(a, b);

    std::cout << "Измененные значения: a = " << a << ", b = " << b << std::endl;

    return 0;
}