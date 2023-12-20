#include <iostream>

void AreaOfCircle(double radius)
{
    const double pi = 3.1415;
    double Area = pi * radius * radius;
    std::cout << "Площадь круга с радиусом " << radius << " м равна " << Area << " м^2" << std::endl;
}
int main() {
    double radius;
    setlocale(LC_ALL, "rus");
    std::cout << "Введите радиус круга: ";
    std::cin >> radius;
    AreaOfCircle(radius);
    return 0;
}
