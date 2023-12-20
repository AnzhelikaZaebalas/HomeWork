#include<iostream>

int main()
{
    int a;
    std::cout << "Введите число для проверки на чётность: " << std::endl;
    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << "Число " << a << " чётное!" << std::endl;
    } 
    
    else
    {
    std::cout << "Число " << a << " нечётное!" << std::endl;
    }
}