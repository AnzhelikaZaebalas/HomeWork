#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Введите 3 числа:" << std::endl;
    std::cin >> a >> b >> c;

    std::cout << "Сумма трёх чисел = " << a + b + c << std::endl;
    std::cout << "Произведение трёх чисел = " << a*b*c << std::endl;
    std::cout << "Среднее арифметическое трёх чисел = " << (double)(a + b + c) / 3 << std::endl;
}