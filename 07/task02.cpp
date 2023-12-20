#include <iostream>
#include <cmath>

void powerNumber(int number, int power)
{
    std::cout << "Результат возведения в степень: " << pow(number, power) << std::endl;
}

int main()
{
    int num, power;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Введите степень: ";
    std::cin >> power;

    powerNumber(num, power);
}