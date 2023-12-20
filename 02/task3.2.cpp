#include <iostream>

int main()
{
    int a, b, selection;
    std::cout << "Введите 2 числа" << std::endl;
    std::cin >> a >> b;

    std::cout << "Выберите математическую операцию" << std::endl <<
    "1. Сложение" << std::endl <<
    "2. Вычитание" << std::endl <<
    "3. Умножение" << std::endl <<
    "4. Деление" << std::endl;
    std::cin >> selection;

    switch (selection) {
        case 1:
        std::cout << "Результат сложения " << a + b << std::endl;
        break;
        case 2:
        std::cout << "Результат вычитания " << a - b << std::endl;
        break;
        case 3:
        std::cout << "Результат уменожения " << a * b << std::endl;
        break;
        case 4:
        std::cout << "Результат деления " <<(float) a / b << std::endl;
        break;
    }
}