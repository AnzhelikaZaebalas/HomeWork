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

    if (selection == 1) {
    std::cout << "Результат сложения " << a + b << std::endl;
    }
    else if (selection == 2) {
        std::cout << "Результат вычитания " << a - b << std::endl;
        }
    else if (selection == 3) {
        std::cout << "Результат уменожения " << a * b << std::endl;
        }
    else if (selection == 4) {
        std::cout << "Результат деления " <<(float) a / b << std::endl;
        }
    else {
        std::cout << "Такой операции нет в списке:( Попробуйте снова." <<  std::endl;

    }
}