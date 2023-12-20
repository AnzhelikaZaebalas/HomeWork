#include <iostream>
#include <cmath>

double calculateDistance(double a1, double b1, double a2, double b2) {
    double R = 6371;
    double a1_rad = a1 * M_PI / 180;
    double b1_rad = b1 * M_PI / 180;
    double a2_rad = a2 * M_PI / 180;
    double b2_rad = b2 * M_PI / 180;

    double delta_a = a2_rad - a1_rad;
    double delta_b = b2_rad - b1_rad;

    double c = sin(delta_a / 2) * sin(delta_a / 2) + cos(a1_rad) * cos(a2_rad) * sin(delta_b / 2) * sin(delta_b / 2);
    double d = 2 * atan2(sqrt(c), sqrt(1 - c));
    double distance = R * d;

    return distance;
}

int main() {
    
    setlocale(LC_ALL, "rus");
    
    double a1, b1;
    std::cout << "Введите широту первой точки: ";
    std::cin >> a1;
    std::cout << "Введите долготу первой точки: ";
    std::cin >> b1;

    double a2, b2;
    std::cout << "Введите широту второй точки: ";
    std::cin >> a2;
    std::cout << "Введите долготу второй точки: ";
    std::cin >> b2;

    double result = calculateDistance(a1,b1, a2, b2);

    std::cout << "Расстояние между точками: " << result << " км" << std::endl;

    return 0;
}